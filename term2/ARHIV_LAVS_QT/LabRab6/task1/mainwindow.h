#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <treefortask.h>
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
void on_addMassive_clicked();

void on_balanceButton_clicked();

void on_add_clicked();

void on_preord_clicked();

void on_search_clicked();

void on_remove_clicked();

void on_postorder_clicked();

void on_keyup_clicked();

private:
Ui::MainWindow *ui;
MyTree Treee;
};
#endif // MAINWINDOW_H
