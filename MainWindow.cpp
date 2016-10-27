#include "MainWindow.h"
#include "ui_MainWindow.h"

// Construtor Personalizado
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    // Configuração Inicial do User Interface
    ui->setupUi(this);
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

    // Mapeamento de Teclas Gerais
    if(event->key() == Qt::Key_Return)
    {
    }
}

