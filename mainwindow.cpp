#include "mainwindow.h"
#include "ui_mainwindow.h"

thread1 *t1 = new thread1;
thread2 *t2 = new thread2;
int i = 0,j = 0,k = 0,l = 0;
QString s;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect (t1->u,&specialui::t1, this, &MainWindow::display_thread1);
    connect (t2->u,&specialui::t2,this,&MainWindow::display_thread2);

    ui->progressBar->setRange(-100,100);
    ui->progressBar->setValue(-100);
    ui->label->setText("0");
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow:: display_thread1()
{
    t2->i = t1->i;
    s = t1->s;
    i = t1->i;
    ui->progressBar->setValue(i);
    ui->label->setText(s);
}
void MainWindow:: display_thread2()
{
    ui->label->setText("VICTORY");
}



void MainWindow::on_btn_catch_clicked()
{
    t2->i = t1->i;
    if(t2->i==0)
    {
        t2->start();
        t1->i = 0;
        t1->stime = 1000;
        t1->check = 1;
        t1->i=0;
    }
}




void MainWindow::on_btn_start_clicked()
{
    t1->i = -100;
    t1->j = 1;
    t1->k = 1;
    t1->start();
}




void MainWindow::on_btn_stop_clicked()
{
    t1->i = -100;
    t1->j = 1;
    t1->k = 1;
    t1->terminate();
    t2->terminate();
    ui->progressBar->setValue(-100);
    ui->label->setText("0");
}

