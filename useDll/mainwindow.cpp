#include "mainwindow.h"
#include "ui_mainwindow.h"

__declspec(dllimport) int add(int a,int b);
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    int c =add(1,2);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
