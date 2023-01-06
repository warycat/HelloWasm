#include "mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    std::cout << add(1, 2) << std::endl;
}

MainWindow::~MainWindow()
{
}

