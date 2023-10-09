#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <deque.h>
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
void on_pushback_clicked();

void on_popback_clicked();

void on_pushfront_clicked();

void on_popfront_clicked();

void on_clear_clicked();

void on_empty_clicked();

void on_size_clicked();

private:
Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
