#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionExit, &QAction::triggered, this, &MainWindow::exit);
    connect(ui->actionAbout, &QAction::triggered, this, &MainWindow::about);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::exit(){
    QCoreApplication::exit();
}

void MainWindow::about(){
    //ui->statusbar->showMessage("The NetAlgo - поиск связных элементов сети");
    QMessageBox::about(this, tr("The NetAlgo"),
                  tr("<b>NetAlgo</b> - поиск связных элементов сети"));
}
