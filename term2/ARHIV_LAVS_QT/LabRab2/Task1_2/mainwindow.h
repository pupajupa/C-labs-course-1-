#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <workers.h>
#include<QFile>
#include<QFileDialog>
#include<QTextStream>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
MainWindow(QWidget *parent = nullptr);
~MainWindow();

private slots:
void on_addButton_clicked();

void on_surnameSearchButton_clicked();

void on_showAll_clicked();

void on_allDelete_clicked();

void on_buttonSalarySearch_clicked();

void on_sverhWorkerSearch_clicked();

void on_oneDelete_2_clicked();

void on_oneDelete_clicked();

void on_exitForm_clicked();

void on_open_triggered();

void on_save_triggered();

private:
Ui::MainWindow *ui;
List workers;
};
#endif // MAINWINDOW_H
