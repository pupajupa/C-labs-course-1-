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


void MainWindow::on_addInVector_clicked()
{
	ui->showMedians->setEnabled(true);
	ui->clearVector->setEnabled(true);
	ui->aText->clear();
	if(ui->lineEdit->text().isEmpty()){
		QMessageBox::warning(this,"Предупреждение","Введите значение");
		return;
	}
	QString line = ui->lineEdit->text();
	if(!line.toInt()){
		QMessageBox::critical(this,"Ошибка","Вы ввели неверное значение");
		return;
	}
	int value = line.toInt();
	QString vec = "{ ";
	a.push_back(value);
	for(size_t i = 0;i<a.size();i++){
		vec+=QString::number(a[i])+" ";
	}
	vec+="}";
	ui->aText->setText(vec);
}

void MainWindow::on_clearVector_clicked()
{
	ui->aText->clear();
	ui->mediansText->clear();
	a.~Vector();
	if(medians.size()>0){
		medians.~Vector();
	}
	ui->showMedians->setEnabled(false);
	ui->clearVector->setEnabled(false);
}
void swap(int a,int b){
	int temp = a;
	a = b;
	b=temp;
}
void MainWindow::on_showMedians_clicked()
{
	ui->mediansText->clear();
	if(medians.size()>0){
		medians.~Vector();
	}
	int count = 0;
	int back = (a.size())%3;
	for(size_t i = 0;i<a.size();i++){
		++count;
		if(count == 3){
			int buf;
			if (a[i-2]>a[i-1])
			{
				buf=a[i-2];
				a[i-2]=a[i-1];
				a[i-1]=buf;
			}
			if (a[i-1]>a[i])
			{
				buf=a[i-1];
				a[i-1]=a[i];
				a[i]=buf;
			}
			if (a[i-2]>a[i-1])
			{
				buf=a[i-2];
				a[i-2]=a[i-1];
				a[i-1]=buf;
			}
			medians.push_back(a[i-1]);
			count = 0;
		}
	}
	if(back!=0){
		if(back==2){
			back = (a[a.size()-2]+a[a.size()-1])/2;
			medians.push_back(back);
		}
		else{
			back = a[a.size()-1];
			medians.push_back(back);
		}
	}
	QString vec = "{ ";
	for(size_t i = 0;i<medians.size();i++){
		vec+=QString::number(medians[i])+" ";
	}
	vec+="}";
	ui->mediansText->setText(vec);
}
