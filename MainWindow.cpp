#include "MainWindow.h"
#include "ui_MainWindow.h"

// Construtor Personalizado
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap *logo = new QPixmap;
    if(logo->load("res/logoPET.png"))
        std::cout << "Carregou" << std::endl;
    else
        std::cout << "ERRO" << std::endl;

    ui->logotipo->setPixmap(*logo);
}

// Destrutor
MainWindow::~MainWindow()
{
    delete ui;
}

// Função Principal para Verificação de Teclado
void MainWindow::keyPressEvent(QKeyEvent* event)
{
    if(event->key() == Qt::Key_F1)
    {
        QWidget *teste = new QWidget;
        teste->show();
    }
    else if(event->key() == Qt::Key_F2)
    {

    }
    else if(event->key() == Qt::Key_F3)
    {

    }
    else if(event->key() == Qt::Key_F4)
    {

    }
    else if(event->key() == Qt::Key_F5)
    {

    }
    else if(event->key() == Qt::Key_F6)
    {

    }
}

