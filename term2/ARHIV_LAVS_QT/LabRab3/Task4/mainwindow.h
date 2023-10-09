#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDebug>
#include <QMainWindow>
#include <Vector.cpp>
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
void on_pushback_clicked();

void on_show_clicked();

void on_pushButton_clicked();

void on_maxsize_clicked();

void on_capacity_clicked();

void on_size_clicked();

void on_clear_clicked();

void on_data_clicked();

void on_back_clicked();

void on_empty_clicked();

void on_erase_clicked();

void on_front_clicked();

void on_insert_clicked();

void on_begin_clicked();

void on_cbegin_clicked();

void on_rbegin_clicked();

void on_end_clicked();

void on_cend_clicked();

void on_rend_clicked();

void on_reserve_clicked();

void on_resize_clicked();

void on_emplaceback_clicked();

void on_emplace_clicked();

void on_at_clicked();

void on_assign_clicked();

void on_pushButton_2_clicked();

void on_swapGener_clicked();

private:
Vector<int> vec;
Vector<int> sw;
Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
