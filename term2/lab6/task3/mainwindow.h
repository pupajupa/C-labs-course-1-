#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <hashtable.h>
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
void on_random_clicked();

void on_clear_clicked();

void on_isEmpty_clicked();

void on_getMinKey_clicked();

void on_remove_clicked();

void on_show_clicked();

void on_insert_clicked();

void on_search_clicked();

private:
Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
