#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "order.h"
MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);
}
bool checkNumber(QString);
MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_addTrain_clicked()
{
	if(ui->numberTrain->text().isEmpty() || ui->destination->text().isEmpty() || ui->freeSeets->text().isEmpty())
	{
		QMessageBox::warning(this,"Warning", "Заполните все поля");
		return;
	}
	if(!checkNumber(ui->numberTrain->text()) || !checkNumber( ui->freeSeets->text()))
	{
		QMessageBox::critical(this,"Error", "Введите корректные данные");
		return;
	}
	if(ui->numberTrain->text().toInt()<1 || ui->freeSeets->text().toInt()<1)
	{
		QMessageBox::critical(this,"Error", "Введите корректные данные");
		return;
	}
	Travels.addNode(ui->dateDepartment->date(),ui->destination->text(),ui->timeDepartment->time(),ui->freeSeets->text(),ui->numberTrain->text());
	ui->deleteButton->setEnabled(true);
	ui->showAll->setEnabled(true);
	ui->searchNumButton->setEnabled(true);
	ui->seachTimeButton->setEnabled(true);
	ui->dateDepartment->setDate(QDate(2023,01,01));
	ui->timeDepartment->setTime(QTime(0,0,0));
	ui->destination->clear();
	ui->freeSeets->clear();
	ui->numberTrain->clear();
	ui->memo->setText(Travels.toString());
}

bool checkNumber(QString string)
{
	bool flag = false;
	QString temp = "0123456789";
	for(int i = 0;i<string.size();i++)
	{
		for(int j = 0;j<temp.size();j++)
		{
			if(string[i]==temp[j])
			{
				flag =true;
				break;
			}
		}
		if(!flag)
		{
			return flag;
		}
	}
	return flag;
}

void MainWindow::on_showAll_clicked()
{
	ui->memo->setText(Travels.toString());
}

void MainWindow::on_deleteButton_clicked()
{
	if(ui->deleteLine->text().isEmpty())
	{
		QMessageBox::warning(this,"Warning", "Заполните поле удаления рейса");
		return;
	}
	Travels.deleteTravel(ui->deleteLine->text());
	ui->deleteButton->setEnabled(!Travels.isEmpty());
	ui->showAll->setEnabled(!Travels.isEmpty());
	ui->searchNumButton->setEnabled(!Travels.isEmpty());
	ui->seachTimeButton->setEnabled(!Travels.isEmpty());
	ui->memo->setText(Travels.toString());
	ui->deleteLine->clear();
}

void MainWindow::on_searchNumButton_clicked()
{
	if(ui->searchTrainNumberLine->text().isEmpty())
	{
		QMessageBox::warning(this,"Warning", "Заполните поле поиска номера поезда");
		return;
	}
	if(!checkNumber(ui->searchTrainNumberLine->text()))
	{
		QMessageBox::critical(this,"Error", "Введите корректные данные");
		return;
	}
	 ui->memo->setText(Travels.toString(ui->searchDateLine->date().toString(),ui->searchTrainNumberLine->text()));
	 ui->searchDateLine->setDate(QDate(2023,01,01));
	 ui->searchTrainNumberLine->clear();
}

void MainWindow::on_seachTimeButton_clicked()
{
	if(ui->searchDestinationLine->text().isEmpty())
	{
		QMessageBox::warning(this,"Warning", "Заполните поле поиска пункта назначения поезда");
		return;
	}
	ui->memo->setText(Travels.toTime(ui->searchTimeLine->time(),ui->searchDestinationLine->text()));
	ui->searchTimeLine->setTime(QTime(0,0,0));
	ui->searchDestinationLine->clear();
}

void MainWindow::on_action_triggered()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open txt"), "//", tr("txt files (*.txt)"));
	QFile file(fileName);
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
			return;
	QTextStream in(&file);
	if (in.atEnd()){
		QMessageBox::warning(this,"Предупреждение","Файл является пустым");
		return;
	}
	QString numTrains, timeTrains, freeSeets, destination,dateTrains;
	QTime time;
	QDate date;
	while(!in.atEnd())
	{
		in >> numTrains;
		if(!checkNumber(numTrains))
		{
			QMessageBox::critical(this,"Error","Неправильный формат файла(0< номер поезда < 9999)");
			return;
		}
		if(numTrains.toInt()<1)
		{
			QMessageBox::critical(this,"Error","Неправильный формат файла(0< число свободных мест < 999)");
			return;
		}
		if (numTrains.isEmpty())
		{
			ui->deleteButton->setEnabled(!Travels.isEmpty());
			ui->showAll->setEnabled(!Travels.isEmpty());
			ui->searchNumButton->setEnabled(!Travels.isEmpty());
			ui->seachTimeButton->setEnabled(!Travels.isEmpty());
			ui->memo->setText(Travels.toString());
			return;
		}
		in >> timeTrains;
		in >> freeSeets;
		if(!checkNumber(freeSeets))
		{
			QMessageBox::critical(this,"Error","Неправильный формат файла(0< число свободных мест < 999)");
			return;
		}
		if(freeSeets.toInt()<1)
		{
			QMessageBox::critical(this,"Error","Неправильный формат файла(0< число свободных мест < 999)");
			return;
		}
		in >> destination;
		in >> dateTrains;
		time = QTime::fromString(timeTrains,Qt::LocalDate);
		if(!time.isValid())
		{
			Travels.deleteAll();
			QMessageBox::critical(this,"Error","Неправильный формат файла(формат времени : hh:mm");
			return;
		}
		date = QDate::fromString(dateTrains,Qt::LocalDate);
		if(!date.isValid())
		{
			Travels.deleteAll();
			QMessageBox::critical(this,"Error","Неправильный формат файла(формат даты : dd.MM.yyyy)");
			return;
		}
		Travels.addNode(date,destination,time,freeSeets,numTrains);
	}
	ui->deleteButton->setEnabled(!Travels.isEmpty());
	ui->showAll->setEnabled(!Travels.isEmpty());
	ui->searchNumButton->setEnabled(!Travels.isEmpty());
	ui->seachTimeButton->setEnabled(!Travels.isEmpty());
	ui->memo->setText(Travels.toString());
}

void MainWindow::on_save_triggered()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Сохранение"), "//", tr("txt files (*.txt)"));
	QFile file(fileName);
	if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
			return;
	QTextStream out(&file);
	out << Travels.toString();
}
