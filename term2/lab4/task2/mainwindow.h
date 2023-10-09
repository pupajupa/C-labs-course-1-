#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "MyString.h"
#include <QMessageBox>
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
void on_Astrlen_clicked();

void on_Bstrlen_clicked();

void on_memcpy_clicked();

void on_strcmp_clicked();

void on_strncpy_clicked();

void on_strcpy_clicked();

void on_strncmp_clicked();

void on_memcmp_clicked();

void on_strxfrm_clicked();

void on_memove_clicked();

void on_strcoll_clicked();

void on_strerror_clicked();

private:
Ui::MainWindow *ui;
String a,b;
};
#endif // MAINWINDOW_H
