/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextEdit *notaFiscalText;
    QLabel *notaFiscalLabel;
    QLabel *subtotalLabel;
    QTextEdit *subtotalText;
    QFrame *line4;
    QTextEdit *codigoText;
    QLabel *codigoLabel;
    QLabel *qtdLabel;
    QTextEdit *qtdText;
    QLabel *unitValueLabel;
    QTextEdit *unitValueText;
    QLabel *totalValueLabel;
    QTextEdit *totalValueText;
    QTextEdit *modoText;
    QLabel *modoLabel;
    QFrame *line3;
    QFrame *line1;
    QTextBrowser *helpText;
    QTextBrowser *softwareTitle;
    QFrame *line2;
    QLabel *logotipo;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        notaFiscalText = new QTextEdit(centralWidget);
        notaFiscalText->setObjectName(QStringLiteral("notaFiscalText"));
        notaFiscalText->setGeometry(QRect(790, 60, 381, 371));
        notaFiscalText->setStyleSheet(QStringLiteral("background-color: rgb(255, 244, 196);"));
        notaFiscalText->setReadOnly(true);
        notaFiscalLabel = new QLabel(centralWidget);
        notaFiscalLabel->setObjectName(QStringLiteral("notaFiscalLabel"));
        notaFiscalLabel->setGeometry(QRect(790, 19, 381, 41));
        subtotalLabel = new QLabel(centralWidget);
        subtotalLabel->setObjectName(QStringLiteral("subtotalLabel"));
        subtotalLabel->setGeometry(QRect(790, 470, 381, 41));
        subtotalText = new QTextEdit(centralWidget);
        subtotalText->setObjectName(QStringLiteral("subtotalText"));
        subtotalText->setGeometry(QRect(790, 510, 381, 51));
        subtotalText->setStyleSheet(QStringLiteral(""));
        subtotalText->setReadOnly(true);
        line4 = new QFrame(centralWidget);
        line4->setObjectName(QStringLiteral("line4"));
        line4->setGeometry(QRect(750, 20, 20, 551));
        line4->setFrameShape(QFrame::VLine);
        line4->setFrameShadow(QFrame::Sunken);
        codigoText = new QTextEdit(centralWidget);
        codigoText->setObjectName(QStringLiteral("codigoText"));
        codigoText->setGeometry(QRect(390, 80, 341, 41));
        codigoText->setTextInteractionFlags(Qt::TextEditable|Qt::TextSelectableByKeyboard);
        codigoLabel = new QLabel(centralWidget);
        codigoLabel->setObjectName(QStringLiteral("codigoLabel"));
        codigoLabel->setGeometry(QRect(390, 40, 341, 41));
        qtdLabel = new QLabel(centralWidget);
        qtdLabel->setObjectName(QStringLiteral("qtdLabel"));
        qtdLabel->setGeometry(QRect(390, 140, 341, 41));
        qtdText = new QTextEdit(centralWidget);
        qtdText->setObjectName(QStringLiteral("qtdText"));
        qtdText->setGeometry(QRect(390, 180, 341, 41));
        qtdText->setTextInteractionFlags(Qt::TextEditable|Qt::TextSelectableByKeyboard);
        unitValueLabel = new QLabel(centralWidget);
        unitValueLabel->setObjectName(QStringLiteral("unitValueLabel"));
        unitValueLabel->setGeometry(QRect(390, 240, 341, 41));
        unitValueText = new QTextEdit(centralWidget);
        unitValueText->setObjectName(QStringLiteral("unitValueText"));
        unitValueText->setGeometry(QRect(390, 280, 341, 41));
        unitValueText->setReadOnly(true);
        totalValueLabel = new QLabel(centralWidget);
        totalValueLabel->setObjectName(QStringLiteral("totalValueLabel"));
        totalValueLabel->setGeometry(QRect(390, 340, 211, 41));
        totalValueText = new QTextEdit(centralWidget);
        totalValueText->setObjectName(QStringLiteral("totalValueText"));
        totalValueText->setGeometry(QRect(390, 380, 341, 41));
        totalValueText->setReadOnly(true);
        modoText = new QTextEdit(centralWidget);
        modoText->setObjectName(QStringLiteral("modoText"));
        modoText->setGeometry(QRect(390, 510, 341, 51));
        modoText->setStyleSheet(QStringLiteral(""));
        modoText->setReadOnly(true);
        modoLabel = new QLabel(centralWidget);
        modoLabel->setObjectName(QStringLiteral("modoLabel"));
        modoLabel->setGeometry(QRect(390, 470, 341, 41));
        line3 = new QFrame(centralWidget);
        line3->setObjectName(QStringLiteral("line3"));
        line3->setGeometry(QRect(350, 20, 20, 551));
        line3->setFrameShape(QFrame::VLine);
        line3->setFrameShadow(QFrame::Sunken);
        line1 = new QFrame(centralWidget);
        line1->setObjectName(QStringLiteral("line1"));
        line1->setGeometry(QRect(20, 340, 311, 16));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);
        helpText = new QTextBrowser(centralWidget);
        helpText->setObjectName(QStringLiteral("helpText"));
        helpText->setGeometry(QRect(20, 450, 311, 121));
        helpText->setAutoFillBackground(false);
        helpText->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        helpText->setFrameShape(QFrame::NoFrame);
        helpText->setFrameShadow(QFrame::Plain);
        softwareTitle = new QTextBrowser(centralWidget);
        softwareTitle->setObjectName(QStringLiteral("softwareTitle"));
        softwareTitle->setGeometry(QRect(20, 360, 311, 51));
        softwareTitle->setAutoFillBackground(false);
        softwareTitle->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        softwareTitle->setFrameShape(QFrame::NoFrame);
        softwareTitle->setFrameShadow(QFrame::Plain);
        line2 = new QFrame(centralWidget);
        line2->setObjectName(QStringLiteral("line2"));
        line2->setGeometry(QRect(20, 410, 311, 16));
        line2->setFrameShape(QFrame::HLine);
        line2->setFrameShadow(QFrame::Sunken);
        logotipo = new QLabel(centralWidget);
        logotipo->setObjectName(QStringLiteral("logotipo"));
        logotipo->setGeometry(QRect(30, 30, 301, 281));
        logotipo->setCursor(QCursor(Qt::ArrowCursor));
        logotipo->setAutoFillBackground(true);
        logotipo->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SeMI PDV", 0));
        notaFiscalLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:600; color:#d6112a;\">Nota Fiscal</span></p></body></html>", 0));
        subtotalLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:600; color:#d6112a;\">Subtotal</span></p></body></html>", 0));
        codigoLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600; color:#000000;\">C\303\263digo</span></p></body></html>", 0));
        qtdLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600; color:#000000;\">Quantidade</span></p></body></html>", 0));
        unitValueLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600; color:#000000;\">Valor Unidade</span></p></body></html>", 0));
        totalValueLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600; color:#000000;\">Valor Total</span></p></body></html>", 0));
        modoLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:600; color:#d6112a;\">Modo</span></p></body></html>", 0));
        helpText->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; font-weight:600;\">HELP</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:8pt;\">F1 -&gt; Inserir Item	F5 -&gt; Cadastrar Produto</span></p"
                        ">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:8pt;\">F2 -&gt; Remover Item	F6 -&gt; Editar Produtos</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:8pt;\">F3 -&gt; Confirmar	F7 -&gt; Remover Produtos</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:8pt;\">F4 -&gt; Fechar Compra	F8 -&gt; Aumentar Estoque</span></p></body></html>", 0));
        softwareTitle->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:16pt; font-weight:600;\">SeMI PDV 1.0</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:10pt;\">- Minho @ 2016 -</span></p></body></html>", 0));
        logotipo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
