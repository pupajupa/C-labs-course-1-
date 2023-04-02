#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include "stack.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
MainWindow(QWidget *parent = nullptr);
~MainWindow();
bool is_empty(QString, int &, int &);

private slots:
void on_pushButton_clicked();

void on_pushButton_2_clicked();

private:
Ui::MainWindow *ui;
int col;
int row;
};
#endif // MAINWINDOW_H
