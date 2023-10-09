#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_pushButton_clicked()
{
	QueueForTask<int> q;
	ui->textEdit->clear();
	ui->lineEdit->clear();
	QRandomGenerator generator;
	for (int i = 0; i < 14; ++i) {
		int a = rand()%100;
			; // генерируем случайное число от 0 до 100 и записываем в массив
		q.pushFront(a);
	}
	queue = q;
	QString res = queue.toString(queue);
	ui->lineEdit->setText(res);
}

void MainWindow::on_push_clicked()
{
	ui->textEdit->clear();
	queue.pushFront(ui->valuePush->value());
	ui->textEdit->setText(queue.toString(queue));
}

void MainWindow::on_pop_clicked()
{
	ui->textEdit->clear();
	queue.popFront();
	ui->textEdit->setText(queue.toString(queue));
}

void MainWindow::on_size_clicked()
{
	ui->textEdit->clear();
	queue.popFront();
	ui->textEdit->append("Size: ");
	ui->textEdit->append(QString::number(queue.size()+1));
}

void MainWindow::on_empty_clicked()
{
	ui->textEdit->clear();
	if(queue.empty()){
		ui->textEdit->setText("IS EMPTY");
	}
	else{
		ui->textEdit->setText("IS NOT EMPTY");
	}
}

void MainWindow::on_back_clicked()
{
	ui->textEdit->clear();
	ui->textEdit->setText(QString::number(queue.back()));
}

void MainWindow::on_front_clicked()
{
	ui->textEdit->clear();
	ui->textEdit->setText(QString::number(queue.front()));
}

void MainWindow::on_sort_clicked()
{
	ui->textEdit->clear();
	queue.Sort();
	ui->textEdit->setText(queue.toString(queue));
}
