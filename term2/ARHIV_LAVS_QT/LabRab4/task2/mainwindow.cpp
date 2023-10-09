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


void MainWindow::on_Astrlen_clicked()
{
	ui->textEdit->clear();
	//QString str;
	//str = ui->Astring->text().fromUtf8(a.c_str());
//	QByteArray abyte = str.toUtf8();
//	const char *ac_str =  abyte.constData();
//	char *ac_str_noconst = const_cast<char*>(ac_str);
//	a = ac_str_noconst;
	QString str = ui->Astring->text();
	a = str;
	//a = const_cast<char*>(ui->Astring->text().toUtf8().constData());
	ui->textEdit->append(QString::number(a.my_strlen(a.c_str())));
	ui->Astring->clear();
}

void MainWindow::on_Bstrlen_clicked()
{
	ui->textEdit->clear();
	QString str = ui->Bstring->text();
	b = str;
	ui->textEdit->append(QString::number(b.my_strlen(b.c_str())));
	ui->Bstring->clear();
}

void MainWindow::on_memcpy_clicked()
{
	ui->textEdit->clear();
	QString str1,str2;
	str1 = ui->Astring->text();
	str2 = ui->Bstring->text();
	a = str1;
	b = str2;
	if(ui->nCount->text().toUInt()>a.size()){
		QMessageBox::critical(this,"Error","Количество копируемых символов n больше чем длина строки а",QMessageBox::Ok);
		ui->Astring->clear();
		ui->Bstring->clear();
		ui->nCount->clear();
		return;
	}
	a.my_memcpy(a.c_str(),b.c_str(),ui->nCount->text().toInt());
	ui->textEdit->append(a.c_str());
	ui->Astring->clear();
	ui->Bstring->clear();
	ui->nCount->clear();
}

void MainWindow::on_strcmp_clicked()
{
	ui->textEdit->clear();
	QString str1 = ui->Astring->text();
	a = str1;
	QString str2 = ui->Bstring->text();
	b = str2;
	ui->textEdit->append(QString::number(a.my_strcmp(a.c_str(),b.c_str())));
	ui->Astring->clear();
	ui->Bstring->clear();
}

void MainWindow::on_strncpy_clicked()
{
	ui->textEdit->clear();
	QString str1 = ui->Astring->text();
	a = str1;
	QString str2 = ui->Bstring->text();
	b = str2;
	if(ui->nCount->text().size()==0 || ui->nCount->text().size()>b.size()){
		QMessageBox::warning(this,"Warning","Введите значение для n",QMessageBox::Ok);
		ui->Astring->clear();
		ui->Bstring->clear();
		ui->nCount->clear();
		return;
	}
	ui->textEdit->append(a.my_strncpy(a.c_str(),b.c_str(),ui->nCount->text().toUInt()));
	ui->Astring->clear();
	ui->Bstring->clear();
	ui->nCount->clear();
}

void MainWindow::on_strcpy_clicked()
{
	ui->textEdit->clear();
	QString str1 = ui->Astring->text();
	a = str1;
	QString str2 = ui->Bstring->text();
	b = str2;
	ui->textEdit->append(a.my_strcpy(a.c_str(),b.c_str()));
	ui->Astring->clear();
	ui->Bstring->clear();
}

void MainWindow::on_strncmp_clicked()
{
	ui->textEdit->clear();
	QString str1 = ui->Astring->text();
	a = str1;
	QString str2 = ui->Bstring->text();
	b = str2;
	if(ui->nCount->text().size()==0 || ui->nCount->text().toUInt()>b.size() || ui->nCount->text().toUInt()>a.size()){
		QMessageBox::warning(this,"Warning","Введите правильное значение для n",QMessageBox::Ok);
		ui->Astring->clear();
		ui->Bstring->clear();
		ui->nCount->clear();
		return;
	}
	ui->textEdit->append(QString::number(a.my_strncmp(a.c_str(),b.c_str(),ui->nCount->text().toUInt())));
	ui->Astring->clear();
	ui->Bstring->clear();
	ui->nCount->clear();
}

void MainWindow::on_memcmp_clicked()
{
	ui->textEdit->clear();
	QString str1 = ui->Astring->text();
	a = str1;
	QString str2 = ui->Bstring->text();
	b = str2;
	if(ui->nCount->text().size()==0 || ui->nCount->text().toUInt()>b.size() || ui->nCount->text().toUInt()>a.size()){
		QMessageBox::warning(this,"Warning","Введите правильное значение для n",QMessageBox::Ok);
		ui->Astring->clear();
		ui->Bstring->clear();
		ui->nCount->clear();
		return;
	}
	ui->textEdit->append(QString::number(a.my_memcmp(a.c_str(),b.c_str(),ui->nCount->text().toUInt())));
	ui->Astring->clear();
	ui->Bstring->clear();
	ui->nCount->clear();
}

void MainWindow::on_strxfrm_clicked()
{
	ui->textEdit->clear();
	QString str1 = ui->Astring->text();
	a = str1;
	QString str2 = ui->Bstring->text();
	b = str2;
	if(ui->nCount->text().size()==0 || ui->nCount->text().toUInt()>b.size() || ui->nCount->text().toUInt()>a.size()){
		QMessageBox::warning(this,"Warning","Введите правильное значение для n",QMessageBox::Ok);
		ui->Astring->clear();
		ui->Bstring->clear();
		ui->nCount->clear();
		return;
	}
	ui->textEdit->append(QString::number(a.my_strxfrm(a.c_str(),b.c_str(),ui->nCount->text().toUInt())));
	ui->Astring->clear();
	ui->Bstring->clear();
	ui->nCount->clear();
}

void MainWindow::on_memove_clicked()
{
	ui->textEdit->clear();
	QString str1 = ui->Astring->text();
	a = str1;
	QString str2 = ui->Bstring->text();
	b = str2;
	if(ui->nCount->text().size()==0 || ui->nCount->text().toUInt()>b.size() || ui->nCount->text().toUInt()>a.size()){
		QMessageBox::warning(this,"Warning","Введите правильное значение для n",QMessageBox::Ok);
		ui->Astring->clear();
		ui->Bstring->clear();
		ui->nCount->clear();
		return;
	}
	a.my_memmove(a.c_str(),b.c_str(),ui->nCount->text().toInt());
	ui->textEdit->append(a.c_str());
	ui->Astring->clear();
	ui->Bstring->clear();
	ui->nCount->clear();
}

void MainWindow::on_strcoll_clicked()
{
	ui->textEdit->clear();
	QString str1 = ui->Astring->text();
	a = str1;
	QString str2 = ui->Bstring->text();
	b = str2;
	ui->textEdit->append(QString::number(a.my_strcoll(a.c_str(),b.c_str())));
	ui->Astring->clear();
	ui->Bstring->clear();
}

void MainWindow::on_strerror_clicked()
{
	ui->textEdit->clear();
	if(ui->nCount->text().size()==0){
		QMessageBox::warning(this,"Warning","Введите правильное значение для n",QMessageBox::Ok);
		ui->nCount->clear();
		return;
	}
	ui->textEdit->append(a.my_strerror(ui->nCount->text().toInt()));
	ui->nCount->clear();
}
