#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "MySet.h"
#include <QMessageBox>
#include <QString>
MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);
}
MySet<QString> a;
MainWindow::~MainWindow()
{
	delete ui;
}


void MainWindow::on_pushButton_clicked()
{
	if(ui->lineEdit->text().isEmpty()){
		QMessageBox::warning(this,"Warning","Please, enter key",QMessageBox::Ok);
		return;
	}
	if(ui->charLine->text().isEmpty()){
		QMessageBox::warning(this,"Warning","Please, enter information",QMessageBox::Ok);
		return;
	}
	QString value = ui->lineEdit->text();
	std::string s = ui->charLine->text().toStdString();
	char ss = s.at(0);
	a.Insert({value,ss});
}

void MainWindow::on_pushButton_4_clicked()
{
	ui->textEdit->clear();
	for(const auto& pair : a)
	{
		ui->textEdit->insertPlainText(pair.first + " -> " + pair.second + '\n');
	}
}

void MainWindow::on_find_clicked()
{
	ui->textEdit->clear();
	if(ui->findLine->text().isEmpty())
	{
		QMessageBox::warning(this, "Warning", "Please, enter value");
		return;
	}
	QString keyt = ui->findLine->text();
	auto it = a.Find(keyt);
	if(it != a.end())
	{
		QString res ="Element with key " + keyt + ": " + (*it).first + " -> " + (*it).second;
		ui->textEdit->append(res);
	}
	else
	{
		QMessageBox::warning(this, "Warning", "Not found.");
		return;
	}
}

void MainWindow::on_erase_clicked()
{
	if(ui->eraseLine->text().isEmpty())
	{
		QMessageBox::warning(this, "Warning", "Please, enter value");
		return;
	}
	bool erased = a.Erase(ui->eraseLine->text());
	if(erased)
	{
		QMessageBox::warning(this, "Success", "Erased.");
		return;
	}
	else
	{
		QMessageBox::warning(this, "Warning", "Not found.");
		return;
	}
}
