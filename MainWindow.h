#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
#include <QMainWindow>
#include <QPixmap>
#include <QKeyEvent>

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

private slots:


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
