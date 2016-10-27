#include "MainWindow.h"
#include "ui_MainWindow.h"

// Construtor Personalizado
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    // Configuração Inicial do User Interface
    ui->setupUi(this);

    // Carregando a imagem da QLabel "Logotipo"
    QPixmap *logo = new QPixmap;

    if(logo->load("res/logoPET.png"))
        std::cout << "Carregou" << std::endl;
    else
        std::cout << "ERRO" << std::endl;

    ui->logotipo->setPixmap(*logo);
    // ---

    // Configurando os LineEdits
    ui->codigoText->setValidator(new QIntValidator(1, 9999999, this));
    ui->qtdText->setValidator(new QDoubleValidator(1, 9999999, 3, this));
    ui->valueUnitText->setValidator(new QDoubleValidator(1, 9999999, 2, this));
    ui->valueTotalText->setValidator(new QDoubleValidator(1, 9999999, 2, this));

    // Configurando os TextEdits
    ui->modoText->setAlignment(Qt::AlignCenter);
    ui->subtotalText->setAlignment(Qt::AlignCenter);

    // Inicialização dos Estados
    state = -1;
}

// Destrutor
MainWindow::~MainWindow()
{
    delete ui;
}

// Função Principal para Verificação de Teclado
// (Mapeamento de Teclado)
void MainWindow::keyPressEvent(QKeyEvent* event)
{
    // Mapeamento das Teclas Function F1~F6
    if(event->key() == Qt::Key_F1)
    {
        // Mudamos o estado para "Adicionar Item"
        state = 1;

        ui->codigoText->clear();

        ui->qtdLabel->show();
        ui->qtdText->show();
        ui->unitValueLabel->show();
        ui->valueUnitText->show();
        ui->totalValueLabel->show();
        ui->valueTotalText->show();

        // Configuramos o "Modo" como "Adicionar Item"
        ui->modoText->setText("Adicionar Item...");

        // Damos foco ao LineEdit do Código
        ui->codigoText->setFocus();
    }
    else if(event->key() == Qt::Key_F2)
    {
        // Mudamos o estado para "Remover Item"
        state = 2;

        ui->codigoText->clear();

        ui->qtdLabel->hide();
        ui->qtdText->hide();
        ui->unitValueLabel->hide();
        ui->valueUnitText->hide();
        ui->totalValueLabel->hide();
        ui->valueTotalText->hide();

        // Configuramos o "Modo" como "Remover Item"
        ui->modoText->setText("Remover Item...");

        // Damos foco ao LineEdit do Código
        ui->codigoText->setFocus();
    }
    else if(event->key() == Qt::Key_F3)
    {
        if(state == 1)
        {
            if(ui->valueTotalText->text().isEmpty())
            {
                QMessageBox *errorBox = new QMessageBox;
                errorBox->setText("Preencha todos os campos!");
                errorBox->show();
                errorBox->setFocus();
            }
            else {
                QString newItem;
                newItem.append("  #" + newItem.number(ui->cupomList->count() - 3 + 1) + "    ");
                newItem.append(ui->codigoText->text() + "    ");
                newItem.append(newItem.fromStdString(productList.getData("products.txt", ui->codigoText->text().toInt() - 1, 1)) + "    ");
                newItem.append(ui->qtdText->text() + "UN x " + ui->valueUnitText->text() + "R$    ");
                newItem.append(ui->valueTotalText->text() + "R$");

                float subTotal = ui->valueTotalText->text().toFloat() + ui->subtotalText->text().toFloat();
                ui->subtotalText->setText(QString::number(subTotal));

                ui->cupomList->addItem(newItem);
                shopItems.push_back(ui->codigoText->text());
                shopRecipe.push_back(ui->valueTotalText->text().toFloat());

                ui->codigoText->clear();
                ui->qtdText->clear();
                ui->valueUnitText->clear();
                ui->valueTotalText->clear();
            }
        }
        else if (state == 2)
        {
            if(ui->codigoText->text().isEmpty())
            {
                QMessageBox *errorBox = new QMessageBox;
                errorBox->setText("Preencha todos os campos!");
                errorBox->show();
                errorBox->setFocus();
            }
            else {
                int index;
                for(index = 0; index < shopItems.size(); index++) {
                    if(shopItems[index] == ui->codigoText->text())
                    {
                        float subTotal = ui->subtotalText->text().toFloat() - shopRecipe[index];
                        ui->subtotalText->setText(QString::number(subTotal));

                        delete ui->cupomList->item(3 + index);
                        shopItems.removeAt(index);
                        shopRecipe.removeAt(index);
                        break;
                    }
                }
            }
        }
    }
    else if(event->key() == Qt::Key_F4)
    {
        if(state == 1)
        {
            ui->modoText->setText("Finalizada!");

            ui->codigoText->clear();
            ui->qtdText->clear();
            ui->valueUnitText->clear();
            ui->valueTotalText->clear();

            ui->subtotalText->clear();

            int index;
            for(index = 3; index < ui->cupomList->count(); index++)
                    delete ui->cupomList->item(index);

            QMessageBox *errorBox = new QMessageBox;
            errorBox->setText("Obrigado pela compra!\nAté logo!");
            errorBox->show();
            errorBox->setFocus();
        }
    }
    else if(event->key() == Qt::Key_F5)
    {
        // Fazer...
    }

    // Mapeamento de Teclas Gerais
    if(event->key() == Qt::Key_Return)
    {
        if(state == 1)
        {
            // Se estiver digitando o texto no LineEdit de Código
            if(ui->codigoText->hasFocus()) {
                bool isProduct = false;

                int index;
                for(index = 0; index < productList.getQuantidade("products.txt"); index++) {
                    if(productList.getData("products.txt", index, 0) == ui->codigoText->text().toStdString()){
                        isProduct = true;
                        break;
                    }
                }

                if(isProduct){
                    ui->valueUnitText->setText(QString::fromStdString(productList.getData("products.txt", index, 2)));

                    ui->qtdText->setText(".000");
                    ui->qtdText->setCursorPosition(0);
                    ui->qtdText->setFocus();
                }
                else
                {
                    QMessageBox *errorBox = new QMessageBox;
                    errorBox->setText("Código não cadastrado!");
                    errorBox->show();
                    errorBox->setFocus();
                }
            }

            // Se estiver digitando o texto no LineEdit de Quantidade
            else if(ui->qtdText->hasFocus())
            {
                if(ui->qtdText->text().isEmpty()) {
                    QMessageBox *errorBox = new QMessageBox;
                    errorBox->setText("Digite um valor de quantidade!");
                    errorBox->show();
                    errorBox->setFocus();
                }
                else {
                    float valorFloat = ui->qtdText->text().toFloat() * ui->valueUnitText->text().toFloat();

                    ui->valueTotalText->setText(QString::number(valorFloat));

                    ui->qtdText->clearFocus();
                }
            }
        }
        else if(state == 2)
        {
            ui->codigoText->clearFocus();
        }
    }
}

