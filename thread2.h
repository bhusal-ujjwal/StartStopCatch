#ifndef THREAD2_H
#define THREAD2_H

#include "specialui.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
# include <QtMath>
#include <QListView>
#include<QListWidget>
#include <QThread>

class thread2 : public QThread
{
public:
    specialui *u = new specialui;
    void run() override;
    thread2();
    int i;
    QString s;
};

#endif // THREAD2_H
