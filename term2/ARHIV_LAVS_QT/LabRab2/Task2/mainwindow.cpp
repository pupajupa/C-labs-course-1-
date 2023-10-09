#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);
}

MainWindow::~MainWindow(){
	delete ui;
}

bool is_matching(QChar a, QChar b){
	return ((a == '{' && b == '}')||(a == '(' && b == ')')  || (a == '[' && b == ']'));
}

bool MainWindow::is_empty(QString string, int &row_count, int &col_count){
	Stack stacks;
	for (int i = 0; i < string.size(); ++i){
		++col_count;
		if (string[i] == '\n'){
			++row_count;
			col_count = 0;
		}
		if (string[i] == '(' || string[i] == '{' || string[i] == '['){
			QString stringe = string;
			QChar q = stringe[i];
			stacks.pushh(q, row_count, col_count);
		}
		else if (string[i] == ')' || string[i] == '}' || string[i] == ']'){
			if (stacks.isEmpty() || !is_matching(stacks.topp()->oper, string[i])){
				return false;
			}
			stacks.pop_elems();
		}
	}
	return stacks.isEmpty();
}

void MainWindow::on_pushButton_clicked(){
	QString line = ui->textEdit->toPlainText();
	if(line.size()==0){
		QMessageBox::critical(this, "Ошибка", "Введите код");
	}
	else if(!is_empty(line, row, col)){
		QMessageBox::critical(this, "Ошибка", "Некоректный код. Строка № " + QString::number(row) + "    Столбец №  " + QString::number(col));
		ui->textEdit->clear();
	}
	else{
		QMessageBox::information(this, "Good", "Ваш код корректный.");
		ui->textEdit->clear();
	}
	row = 1;
	col = 0;
}

void MainWindow::on_pushButton_2_clicked(){
	QString fileName = QFileDialog::getOpenFileName(this, tr("Открытие"), "//", tr("txt files (*.txt)"));
	QFile file(fileName);
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
			return;
	QTextStream in(&file);
	if (in.atEnd()){
		QMessageBox::warning(this,"Warning","Файл пуст");
		return;
	}
	QString line;
	line.clear();
	while(!in.atEnd()){
		in >> line;
	}
	ui->textEdit->setText(line);
}
