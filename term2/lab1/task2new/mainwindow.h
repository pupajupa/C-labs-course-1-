#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include "woman.h"
#include "man.h"

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
    void on_addButton_clicked();

	void on_openButton_clicked();

	void on_sortButton_clicked();

	void on_saveButton_clicked();

	void on_exitButton_clicked();

	void on_deleteButton_clicked();

	private:
	Ui::MainWindow *ui;
	size_t wCount = 0,mCount=0;
	int arr[100][2]{};
	int paryCount = 0;
	Man **men = new Man*[0];
	Woman **women = new Woman*[0];
	Person **persons = new Person*[0];
};
#endif // MAINWINDOW_H
