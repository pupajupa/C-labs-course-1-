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
	String a;
	delete ui;
}


void MainWindow::on_pushButton_clicked()
{
	QString text = ui->plainTextEdit->toPlainText();
	Parser f;
	QString res = f.parseVariablesOfTypes(text);
	QMessageBox::information(this,"Variables types",res,QMessageBox::Ok);
}

void MainWindow::on_pushButton_2_clicked()
{
	QString text = ui->plainTextEdit->toPlainText();
	Parser f;
	QString res = f.parseClasses(text);
	QMessageBox::information(this,"Number of classes,structs and arrays",res,QMessageBox::Ok);
}

void MainWindow::on_pushButton_3_clicked()
{
	QString text = ui->plainTextEdit->toPlainText();
	Parser f;
	QString res = f.parsePrototypes(text);
	QMessageBox::information(this,"Function prototypes",res,QMessageBox::Ok);
}

void MainWindow::on_pushButton_4_clicked()
{
	QString text = ui->plainTextEdit->toPlainText();
	Parser f;
	QString res = f.parseChange(text);
	QMessageBox::information(this,"Coordinate changes",res,QMessageBox::Ok);
}

void MainWindow::on_pushButton_5_clicked()
{
	QString text = ui->plainTextEdit->toPlainText();
	Parser f;
	QString res = f.parseLocal(text);
	QMessageBox::information(this,"Local variables",res,QMessageBox::Ok);
}

void MainWindow::on_pushButton_6_clicked()
{
	QString text = ui->plainTextEdit->toPlainText();
	Parser f;
	QString res = f.parseOverload(text);
	QMessageBox::information(this,"Override functions",res,QMessageBox::Ok);
}

void MainWindow::on_pushButton_7_clicked()
{
	QString text = ui->plainTextEdit->toPlainText();
	Parser f;
	QString res = f.parseBranch(text);
	QMessageBox::information(this,"Depth of branches",res,QMessageBox::Ok);
}

void MainWindow::on_pushButton_8_clicked()
{
	QString text = ui->plainTextEdit->toPlainText();
	Parser f;
	QString res = f.parseLogicErrors(text);
	QMessageBox::information(this,"Logical errors",res,QMessageBox::Ok);
}

void MainWindow::on_openFile_triggered()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Открытие"), "//", tr(".cpp or .h files (*.cpp)"));
	QFile file(fileName);
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
			return;
	QTextStream in(&file);
	if (in.atEnd()){
		QMessageBox::warning(this,"Warning","Файл пуст");
		return;
	}
	ui->plainTextEdit->clear();
	QString res;
	ui->plainTextEdit->setPlainText(in.readAll());
	file.close();
}
