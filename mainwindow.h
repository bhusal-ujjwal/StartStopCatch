#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include "thread1.h"
#include "thread2.h"
#include "ui_mainwindow.h"
#include <QTimer>
# include <QtMath>
#include <QListView>
#include<QListWidget>
#include <QThread>
#include <QMutex>
#include<specialui.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    specialui *uu = new specialui;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QElapsedTimer t;
    int time=0;
public slots:
    void display_thread1();
    void display_thread2();

private slots:
    void on_btn_start_clicked();
    void on_btn_stop_clicked();
    void on_btn_catch_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
