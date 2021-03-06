/*
   Copyright (C) Oleg Ziakun
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    setWindowFlags(Qt::WindowCloseButtonHint);
    streetViewManager.reset(new StreetViewManager(ui));
}
