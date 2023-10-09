#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);
}

MainWindow::~MainWindow()
{
	delete ui;
}

Deque<int> deque(100);
void MainWindow::on_pushback_clicked()
{
	ui->textEdit->clear();
	int k = ui->value->text().toInt();
	deque.push_back(k);
	ui->textEdit->setText(deque.show(deque));
}

void MainWindow::on_popback_clicked()
{
	if(deque.size()==0){
		QMessageBox::critical(this,"Error","Нет элементов для удаления",QMessageBox::Ok);
		return;
	}
	ui->textEdit->clear();
	deque.pop_back();
	ui->textEdit->setText(deque.show(deque));
}

void MainWindow::on_pushfront_clicked()
{
	ui->textEdit->clear();
	int k = ui->value->text().toInt();
	deque.push_front(k);
	ui->textEdit->setText(deque.show(deque));
}

void MainWindow::on_popfront_clicked()
{
	if(deque.size()==0){
		QMessageBox::critical(this,"Error","Нет элементов для удаления",QMessageBox::Ok);
		return;
	}
	ui->textEdit->clear();
	deque.pop_front();
	ui->textEdit->setText(deque.show(deque));
}

void MainWindow::on_clear_clicked()
{
	if(deque.size()==0){
		QMessageBox::critical(this,"Error","Нет элементов для удаления",QMessageBox::Ok);
		return;
	}
	ui->textEdit->clear();
	deque.clear();
	ui->textEdit->setText(deque.show(deque));
}

void MainWindow::on_empty_clicked()
{
	ui->textEdit->clear();
	if(deque.empty()){
		ui->textEdit->append("IS EMPTY");
	}
	else{
		ui->textEdit->append("IS NOT EMPTY");
	}
}

void MainWindow::on_size_clicked()
{
	ui->textEdit->clear();
	ui->textEdit->append("SIZE: ");
	ui->textEdit->append(QString::number(deque.size()));
}
