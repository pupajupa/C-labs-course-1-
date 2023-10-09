#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
int sz = 8;
HashTable ht(sz);
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


void MainWindow::on_random_clicked()
{
	if(!ht.isEmpty()){
		ht.clear();
	}
	for(int i = 0; i < 8; i++)
	{
		int randomKey = rand() % 100;
		ht.put(randomKey,i);
	}
}

void MainWindow::on_clear_clicked()
{
	ui->memo->clear();
	if(ht.isEmpty()){
		QMessageBox::warning(this,"Warning","Hash table is clear");
		return;
	}
	else{
		ht.clear();
		sz = 0;
	}
}

void MainWindow::on_isEmpty_clicked()
{
	ui->memo->clear();
	if(ht.isEmpty()){
		ui->memo->append("IS EMPTY");
	}
	else{
		ui->memo->append("EMPTY");
	}
}

void MainWindow::on_getMinKey_clicked()
{
	ui->memo->clear();
	if(ht.isEmpty()){
		QMessageBox::warning(this,"Warning","Hash table is clear");
		return;
	}
	else{
		int k = ht.getMinKey();
		ui->memo->append(QString::number(k));
	}
}

void MainWindow::on_remove_clicked()
{
	if(ht.isEmpty()){
		QMessageBox::warning(this,"Warning","Hash table is clear");
		return;
	}
	int k = ui->lineEdit->text().toInt();
	ht.remove(k);
	QMessageBox::information(this,"OK","Removed succesful");
}

void MainWindow::on_show_clicked()
{
	ui->memo->clear();
	if(ht.isEmpty()){
		QMessageBox::warning(this,"Warning","Hash table is clear");
		return;
	}
	QString res = ht.show();
	ui->memo->setText(	res);
}

void MainWindow::on_insert_clicked()
{
	int key = ui->lineEdit->text().toInt();
	ht.put(key,rand()%100);
	QMessageBox::information(this,"OK","Inserted succesful");
}

void MainWindow::on_search_clicked()
{
	ui->memo->clear();
	if(ht.isEmpty()){
		QMessageBox::warning(this,"Warning","Hash table is clear");
		return;
	}
	int key = ui->lineEdit->text().toInt();
	if(ht.find(key)){
		ui->memo->append("key found");
	}
	else
	{
		QMessageBox::warning(this,"Warning","Key no found");
		return;
	}
}
