#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTimeEdit>
#include <QDebug>
#include <QFile>
#include <QDebug>
#include <QThread>
#include <wiringPiSPI.h>
#include <softPwm.h>
#include <Iir.h>
#include <math.h>
#include <sr595.h>
#include <wiringPi.h>

#define LED 26
#define LED_BASE 200
#define dataPin 21
#define clockPin 22
#define latchPin 23

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    wiringPiSetup () ;
    sr595Setup (LED_BASE, 16, dataPin, clockPin, latchPin) ;
    pinMode (LED, PWM_OUTPUT);
    pwmWrite (LED, 0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    digitalWrite (LED_BASE + 0,HIGH) ;
    QThread::msleep(1000);
    digitalWrite (LED_BASE + 0,LOW) ;

}

void MainWindow::on_pushButton_2_clicked()
{
    digitalWrite (LED_BASE + 1,HIGH) ;
    QThread::msleep(1000);
    digitalWrite (LED_BASE + 1,LOW) ;
}

void MainWindow::on_pushButton_3_clicked()
{
    digitalWrite (LED_BASE + 2,HIGH) ;
    QThread::msleep(1000);
    digitalWrite (LED_BASE + 2,LOW) ;
}

void MainWindow::on_pushButton_4_clicked()
{
    digitalWrite (LED_BASE + 3,HIGH) ;
    QThread::msleep(1000);
    digitalWrite (LED_BASE + 3,LOW) ;
}

void MainWindow::on_pushButton_5_clicked()
{
    digitalWrite (LED_BASE + 4,HIGH) ;
    QThread::msleep(1000);
    digitalWrite (LED_BASE + 4,LOW) ;
}

void MainWindow::on_pushButton_6_clicked()
{
    digitalWrite (LED_BASE + 5,HIGH) ;
    QThread::msleep(1000);
    digitalWrite (LED_BASE + 5,LOW) ;
}

void MainWindow::on_pushButton_7_clicked()
{
    digitalWrite (LED_BASE + 6,HIGH) ;
    QThread::msleep(1000);
    digitalWrite (LED_BASE + 6,LOW) ;
}
