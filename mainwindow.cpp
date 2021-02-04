#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_button_EnterData_clicked()
{
   text = ui ->lineEdit_input -> text() + "\n";
   text += ui -> lineEdit_Output ->text() +"\n";


}

void MainWindow::on_button_Output_clicked()
{
    ui -> lineEdit_Output -> setText (text);

}
