#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
void on_addInVector_clicked();

void on_clearVector_clicked();

void on_showMedians_clicked();

private:
Ui::MainWindow *ui;
Vector <int> a;
Vector <int> medians;
};
#endif // MAINWINDOW_H
