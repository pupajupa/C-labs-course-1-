#include "mainwindow.h"
#include "MyMap.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MyMap<int,QString> a;
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


void MainWindow::on_insert_clicked()
{
	if(ui->spinBox->text().isEmpty()){
		QMessageBox::warning(this,"Warning","Please, enter key",QMessageBox::Ok);
		return;
	}
	if(ui->lineEdit->text().isEmpty()){
		QMessageBox::warning(this,"Warning","Please, enter value",QMessageBox::Ok);
		return;
	}
	int key = ui->spinBox->value();
	QString value = ui->lineEdit->text();
	a.insert({key,value});
}

void MainWindow::on_show_map_clicked()
{
	ui->textEdit->clear();
	if(a.empty()){
		QMessageBox::information(this,"Information","Your map is empty.\nPlease, add elements.",QMessageBox::Ok);
		return;
	}
	for(auto i:a){
		QString res;
				res+= "{";
				res+=QString::number(i.first);
				res+=":" ;
				res+=i.second;
				res+="}";
		ui->textEdit->append(res);
	}
}

void MainWindow::on_size_clicked()
{
	ui->textEdit->clear();
	ui->textEdit->append("SIZE: " + QString::number(a.getSize()));
}

void MainWindow::on_erase_clicked()
{
	if(a.empty() && ui->keyForErase->text().isEmpty()){
		QMessageBox::warning(this,"Warning","Please, enter right key.",QMessageBox::Ok);
	}
	ui->textEdit->clear();
	int key = ui->keyForErase->text().toInt();
	a.erase(key);
}

void MainWindow::on_empty_clicked()
{
	ui->textEdit->clear();
	if(a.empty()){
		ui->textEdit->append("MAP IS EMPTY");
	}
	else{
		ui->textEdit->append("MAP IS NOT EMPTY");
	}
}

void MainWindow::on_clear_clicked()
{
	ui->textEdit->clear();
	a.clear();
	QMessageBox::information(this,"Info","Map is clear");
}

void MainWindow::on_end_clicked()
{

}
