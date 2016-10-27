#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
#include <QMainWindow>
#include <QPixmap>
#include <QKeyEvent>
#include "DataManager.h"
#include <QMessageBox>
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void keyPressEvent(QKeyEvent* event);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    DataManager productList;

    QList<QString> shopItems;
    QList<float> shopRecipe;

    int state;
};

#endif // MAINWINDOW_H
