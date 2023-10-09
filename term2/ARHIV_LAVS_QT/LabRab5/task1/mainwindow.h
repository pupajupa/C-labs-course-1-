#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QRandomGenerator>
#include <QMainWindow>
#include <queuefortask.h>
#include <myqueue.h>
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
void on_pushButton_clicked();

void on_push_clicked();

void on_pop_clicked();

void on_size_clicked();

void on_empty_clicked();

void on_back_clicked();

void on_front_clicked();

void on_sort_clicked();

private:
QueueForTask<int> queue;
Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
