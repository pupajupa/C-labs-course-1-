#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
void on_insert_clicked();

void on_show_map_clicked();

void on_size_clicked();

void on_erase_clicked();

void on_empty_clicked();

void on_clear_clicked();

void on_end_clicked();

private:
Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
