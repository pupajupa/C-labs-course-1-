#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <stack.h>
#include <operand.h>
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
	void on_schit_clicked();

	void on_newschit_clicked();


private:
    Ui::MainWindow *ui;
	QString post(QString str);
	double oper(QChar operand);
	double ans(QString str);
	bool IsCorrect(QString std);
};
#endif // MAINWINDOW_H
