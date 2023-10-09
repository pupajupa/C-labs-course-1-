#include "mainwindow.h"
#include "ui_mainwindow.h"

#include"hashtable.h"
#include"hashtable.cpp"
#include <QMessageBox>
HashTable<std::string, int> table;
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

void MainWindow::on_pushButtonForInsert_clicked()
{
	if(ui->lineEditForKeyInsert->text().isEmpty() || ui->lineEditForValueInsert->text().isEmpty())
	{
		QMessageBox::warning(this, "Oops", "Your line is empty.");
		return;
	}
	std::string keyt = ui->lineEditForKeyInsert->text().toStdString();
	int val = ui->lineEditForValueInsert->text().toInt();
	table.insert(keyt, val);
}

void MainWindow::on_pushButtonForContains_clicked()
{
	if(ui->lineEditForContainsEnter->text().isEmpty())
	{
		QMessageBox::warning(this, "Oops", "Your line is empty.");
		return;
	}
	else
	{
		std::string keyt = ui->lineEditForContainsEnter->text().toStdString();
		ui->lineEditForContains_2->clear();
		ui->lineEditForContains_2->insert(QString::number(table.contains(keyt)));
	}
}

void MainWindow::on_pushButtonForShow_clicked()
{
	ui->textEditForShow->clear();
	for(const auto& bucket : table.getBuckets())
	{
		for (const auto& entry : bucket)
		{
			ui->textEditForShow->insertPlainText("Key: " + QString::fromStdString(entry.first) + ", Value: " + QString::number(entry.second) + '\n');
		}
	}
}

void MainWindow::on_pushButtonForClear_clicked()
{
		table.clear();
}
