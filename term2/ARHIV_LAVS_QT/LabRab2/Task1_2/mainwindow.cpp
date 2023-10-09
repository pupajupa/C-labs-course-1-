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


void MainWindow::on_addButton_clicked()
{
	if(ui->number->text().isEmpty() || ui->tarif->text().isEmpty() || ui->name->text().isEmpty() || ui->surname->text().isEmpty() || ui->fatherName->text().isEmpty() || ui->hours->text().isEmpty()){
		QMessageBox::warning(this,"Warning", "Заполните пожалуйста все поля");
		return;
	}
	if (workers.findWorker(ui->number->text()))
	{
		QMessageBox::warning(this,"Warning", "Сотрудник с таким табельным номером уже есть");
		return;
	}
	if( ui->number->text().toInt()<1 || ui->number->text().toInt()>999 || ui->hours->text().toInt()<1 || ui->number->text().toInt()>744 || ui->tarif->text().toInt()<1 || ui->tarif->text().toInt()>1000  )
	{
		QMessageBox::critical(this,"Error", "Введите корректные данные");
		return;
	}
	workers.Add(ui->surname->text(), ui->name->text(), ui->fatherName->text(), ui->number->text(), ui->hours->text(),ui->tarif->text(),0);
	ui->allDelete->setEnabled(true);
	ui->showAll->setEnabled(true);
	ui->oneDelete_2->setEnabled(true);
	ui->sverhWorkerSearch->setEnabled(true);
	ui->oneDelete->setEnabled(true);
	ui->buttonSalarySearch->setEnabled(true);
	ui->surnameSearchButton->setEnabled(true);
	ui->ButtonSearchHours->setEnabled(true);
	ui->textEdit->setText(workers.toString());
	ui->number->clear();
	ui->tarif->clear();
	ui->surname->clear();
	ui->name->clear();
	ui->fatherName->clear();
	ui->hours->clear();
}

void MainWindow::on_surnameSearchButton_clicked()
{
	if(workers.findSurname(ui->lineSurnameSearch->text()))
	{
	ui->textEdit->setText(workers.toString(ui->lineSurnameSearch->text()));
	}
	else
	{
		QMessageBox::warning(this,"Warning", "Сотрудники не найдены");
		return;
	}
	ui->lineSurnameSearch->clear();
}

void MainWindow::on_showAll_clicked()
{
	ui->textEdit->setText(workers.toString());
}

void MainWindow::on_allDelete_clicked()
{
	workers.deleteAll();
	ui->textEdit->clear();
	ui->allDelete->setEnabled(false);
	ui->oneDelete_2->setEnabled(false);
	ui->showAll->setEnabled(false);
	ui->sverhWorkerSearch->setEnabled(false);
	ui->oneDelete->setEnabled(false);
	ui->buttonSalarySearch->setEnabled(false);
	ui->surnameSearchButton->setEnabled(false);
	ui->ButtonSearchHours->setEnabled(false);
}


void MainWindow::on_buttonSalarySearch_clicked()
{
	if(workers.findSalary(ui->lineSalarySearch->text()))
	{
		ui->textEdit->setText(workers.searchSalary(ui->lineSalarySearch->text()));
	}
	else
	{
		QMessageBox::warning(this,"Warning", "Сотрудники не найдены");
		return;
	}
	ui->lineSalarySearch->clear();
}

void MainWindow::on_sverhWorkerSearch_clicked()
{
	if(workers.findSverh())
	{
		ui->textEdit->setText(workers.searchHours());
	}
	else
	{
		QMessageBox::warning(this,"Warning", "Сотрудники не найдены");
		return;
	}
}


void MainWindow::on_oneDelete_2_clicked()
{
	if(workers.findHours(ui->lineSearchHours->text()))
	{
		ui->textEdit->setText(workers.searchHours(ui->lineSearchHours->text()));
	}
	else
	{
		QMessageBox::warning(this,"Warning", "Сотрудники не найдены");
		return;
	}
	ui->lineSearchHours->clear();
}


void MainWindow::on_oneDelete_clicked()
{
	if (workers.findWorker(ui->lineDelete->text()))
	{
		workers.deleteWorker(ui->lineDelete->text());
	}
	else
	{
		QMessageBox::critical(this,"Error", "Сотрудник с таким табельным номером не найден");
		return;
	}
	ui->allDelete->setEnabled(!workers.isEmpty());
	ui->oneDelete_2->setEnabled(!workers.isEmpty());
	ui->showAll->setEnabled(!workers.isEmpty());
	ui->sverhWorkerSearch->setEnabled(!workers.isEmpty());
	ui->oneDelete->setEnabled(!workers.isEmpty());
	ui->buttonSalarySearch->setEnabled(!workers.isEmpty());
	ui->surnameSearchButton->setEnabled(!workers.isEmpty());
	ui->ButtonSearchHours->setEnabled(!workers.isEmpty());
	ui->textEdit->setText(workers.toString());
	ui->lineDelete->clear();
}

void MainWindow::on_exitForm_clicked()
{
	QApplication::exit();
}

void MainWindow::on_open_triggered()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Открытие"), "//", tr("txt files (*.txt)"));
	QFile file(fileName);
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
			return;
	QTextStream in(&file);
	if (in.atEnd()){
		QMessageBox::warning(this,"Warning","Файл пуст");
		return;
	}
	workers.deleteAll();
	ui->textEdit->clear();
	QString str1, str2, str3, str4,str5,str6;
	while(!in.atEnd())
	{
		in >> str1;
		if (str1.isEmpty())
		{
			ui->allDelete->setEnabled(!workers.isEmpty());
			ui->oneDelete_2->setEnabled(!workers.isEmpty());
			ui->showAll->setEnabled(!workers.isEmpty());
			ui->sverhWorkerSearch->setEnabled(!workers.isEmpty());
			ui->oneDelete->setEnabled(!workers.isEmpty());
			ui->buttonSalarySearch->setEnabled(!workers.isEmpty());
			ui->surnameSearchButton->setEnabled(!workers.isEmpty());
			ui->textEdit->setText(workers.toString());
			return;
		}
		in >> str2;
		in >> str3;
		in >> str4;
		in >> str5;
		in >> str6;
		if((str4.toInt()<1 || str4.toInt() > 1000) || (str5.toInt()<1 || str5.toInt() > 744)||(str6.toInt()<1 || str6.toInt() > 1000))
		{
			workers.deleteAll();
			QMessageBox::critical(this,"Error","Неправильный формат файлa");
			return;
		}
		workers.Add(str1, str2, str3, str4, str5,str6,0);
	}
	ui->allDelete->setEnabled(!workers.isEmpty());
	ui->oneDelete_2->setEnabled(!workers.isEmpty());
	ui->showAll->setEnabled(!workers.isEmpty());
	ui->sverhWorkerSearch->setEnabled(!workers.isEmpty());
	ui->oneDelete->setEnabled(!workers.isEmpty());
	ui->buttonSalarySearch->setEnabled(!workers.isEmpty());
	ui->surnameSearchButton->setEnabled(!workers.isEmpty());
	ui->textEdit->setText(workers.toString());
}

void MainWindow::on_save_triggered()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Сохранение"), "//", tr("txt files (*.txt)"));
	QFile file(fileName);
	if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
			return;
	QTextStream out(&file);
	QString str;
	str = workers.toString();
	out << str;
}
