#ifndef THREAD1_H
#define THREAD1_H

#include "specialui.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
# include <QtMath>
#include <QListView>
#include<QListWidget>
#include <QThread>



class thread1 : public QThread
{
public:
    specialui *u = new specialui;
    void run() override;
    thread1();
    QString s;
    int i = -100,j = 1,k=1;
    int stime = 10;
    int check = 0;
};

#endif // THREAD1_H
