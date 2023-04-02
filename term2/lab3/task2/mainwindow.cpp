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
	ui->matrix->clear();
	ui->secMatrix->clear();
	pair<pair<int, int>, pair<int, int>> a;
	pair<Vector<int>, Vector<pair<int, double>>> para;
	pair<int, double> secPara;
	Vector<int> vec;
	Vector<pair<int, double>> secVec;
	Vector<pair<Vector<int>, Vector<pair<int, double>>>>v;
	for(int i =0;i<ui->spinPair->value();i++){
		int intValue = qrand()%100;
		double doubleValue = (qrand()%100)/50.4;
		secPara.first = intValue;
		secPara.second = doubleValue;
		secVec.push_back(secPara);
		vec.push_back(i+1);
		para.first = vec;
		para.second = secVec;
		v.push_back(para); //{{i},{intValue,doubleValue}};
	}
	for (auto p : v) {
		ui->matrix->clear();
		ui->secMatrix->clear();
			for (auto x : p.first) {
				 ui->matrix->setAlignment(Qt::AlignHCenter);
				 ui->matrix->append(QString::number(x) + " ");
			}
			for (auto x : p.second) {
				 ui->secMatrix->setAlignment(Qt::AlignHCenter);
				 ui->secMatrix->append("("+QString::number(x.first) + " , "  +   QString::number(x.second) + ") ");
			}
		}
}
