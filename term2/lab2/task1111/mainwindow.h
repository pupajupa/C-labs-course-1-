#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include "trainsinf.h"
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
void on_addTrain_clicked();

void on_showAll_clicked();

void on_deleteButton_clicked();

void on_searchNumButton_clicked();

void on_seachTimeButton_clicked();

void on_action_triggered();

void on_save_triggered();

private:
Ui::MainWindow *ui;
List Travels;
};
#endif // MAINWINDOW_H
