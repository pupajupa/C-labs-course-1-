#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"qcustomplot.h"
#include "hashtable.h"
MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	ui->widget->setGeometry(QRect(30, 30, 700, 500));
	ui->widget->addGraph();
	ui->widget->addGraph();
	ui->widget->xAxis->setLabel("Size");
	ui->widget->yAxis->setLabel("Collision");
	HashTable table(2048);
	HashTable table2(2048);
	QVector<double> x1, y1;
	QVector<double>x2, y2;
	for(int i = 0; i < 2048; i++)
	{
		table2.insertMod(i,"key" + QString::number(i).toStdString());
		table.insert(i,"key" + QString::number(i).toStdString());
		x2.push_back(i);
		y2.push_back(table2.countCollisions(table2));
		x1.push_back(i);
		y1.push_back(table.countCollisions(table));
	}
	ui->widget->graph(0)->setData(x1, y1);
	ui->widget->graph(0)->setLineStyle(QCPGraph::lsLine);
	ui->widget->graph(0)->setScatterStyle(QCPScatterStyle::ssDot);
	ui->widget->graph(0)->setPen(QPen(Qt::red));
	ui->widget->graph(0)->setBrush(QBrush(Qt::red));
	ui->widget->graph(1)->setData(x2, y2);
	ui->widget->graph(1)->setLineStyle(QCPGraph::lsLine);
	ui->widget->graph(1)->setScatterStyle(QCPScatterStyle::ssDot);
	ui->widget->graph(1)->setPen(QPen(Qt::blue));
	ui->widget->graph(1)->setBrush(QBrush(Qt::blue));
	ui->widget->xAxis->setRange(0, 2048);
	ui->widget->yAxis->setRange(0, 10);
	ui->widget->replot();
	ui->widget->legend->setVisible(true);
	ui->widget->graph(0)->setName("Universal HashTable");
		ui->widget->graph(1)->setName("Modular HashTable");
}

MainWindow::~MainWindow()
{
	delete ui;
}

