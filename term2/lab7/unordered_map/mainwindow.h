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
void on_pushButtonForInsert_clicked();

void on_pushButtonForContains_clicked();

void on_pushButtonForShow_clicked();

void on_pushButtonForClear_clicked();

private:
Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
