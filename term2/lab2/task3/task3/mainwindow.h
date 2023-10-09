#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stack.h"
#include <QString>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
MainWindow(QWidget *parent = nullptr);
~MainWindow();
int pror(QChar);
double value(const QChar &c);

private slots:
void on_pushButton_clicked();

private:
Ui::MainWindow *ui;
Stack*operators,signer;
int rop,lop;
};
#endif // MAINWINDOW_H
