#ifndef SPECIALUI_H
#define SPECIALUI_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "ui_mainwindow.h"


class specialui : public QObject
{
    Q_OBJECT
public:
    explicit specialui(QObject *parent = nullptr);
    Ui::MainWindow *ui;


signals:
    void t1();
    void t2();
public slots:
};

#endif // SPECIALUI_H
