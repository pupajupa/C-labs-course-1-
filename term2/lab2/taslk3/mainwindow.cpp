#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow){
	ui->setupUi(this);
	ui->plustable->setRowCount(15);
	QString arr[15]{"a/(b-c)*(d+e)","(a+b)*(c-d)/e","a-(b+c*d)/e","a/b-((c+d)*e)","a*(b-c+d)/e","(a+b)*(c-d)/e","a*(b-c)/(d+e)","a/b*(c+d))-e","(a+(b/c-d))*e)","a*(b+c)/(d-e)","a-(b/c*(d+e))","(a-b)/(c+d)*e",
				   "a/(b+c-d*e)","a*(b-c)/(d+e)","(a+b*c)/(d-e)"};
	ui->plustable->setColumnCount(1);
	for(int i = 0;i<15;i++){
		QTableWidgetItem* item = new QTableWidgetItem(arr[i]);
		ui->plustable->setItem(0, i, item);
		item->setFlags(Qt::ItemIsEditable);
	}
}

MainWindow::~MainWindow(){
	delete ui;
}

QString MainWindow::post(QString str){
	str.remove(' ');
	Stack stack;
	QString str1 = "";
	for (int i = 0; i < str.length(); i++) {
		if (str[i].isLetter()) { str1.push_back(str[i]); }
		else {
			if (str[i] == '(') {
				stack.push(str[i]);
				continue;
			}
			if (str[i] == ')') {
				str1.push_back((stack.prev(str[i])));
				continue;
			}
			str1.push_back(stack.prev(str[i]));
			stack.push(str[i]);
		}
	}
	str1.push_back(stack.last());
	return str1;
}
double MainWindow::oper(QChar operand)
{
	if (operand == 'a') {
		double text = ui->avalue->text().toDouble();
	}
	if (operand == 'b') {
		double k1 = ui->bvalue->text().toDouble();
	}

	if (operand == 'c') {
		double k2 = ui->cvalue->text().toDouble();
	}

	if (operand == 'd') {
		double k3 = ui->dvalue->text().toDouble();
	}

	if (operand == 'e') {
		double k4 = ui->evalue->text().toDouble();
	}
}

double MainWindow::ans(QString str)
{
	Operand stack;
	for (int i = 0; i < str.length(); i++) {
		if (str[i].isLetter()) {
			stack.push(oper(str[i]));
		}
		else {
			double value2 = stack.er();
			double value1 = stack.er();
			if (str[i] == '+')
				stack.push(value1 + value2);
			else if (str[i] == '/')
				stack.push(value1 / value2);
			else if (str[i] == '-')
				stack.push(value1 - value2);
			else if (str[i] == '*')
				stack.push(value1 * value2);
			else if (str[i] == '^') {
				stack.push(qPow(value1, value2));
			}
		}
	}
	auto ptr = double(stack.answer());
	return ptr;
}
void MainWindow::on_schit_clicked()
{
	QString stringe = ui->virazh->text();
	std::string numberStringe = stringe.toStdString();
	if (stringe.length() < 1) {
		QMessageBox::warning(this, "Ошибка", "Введите выражение ");
		ui->virazh->setText("");
		return;
	}
	if (numberStringe[0] == '1' || numberStringe[0] == '2' || numberStringe[0] == '3' || numberStringe[0] == '4' || numberStringe[0] == '5' ||
			numberStringe[0] == '6' || numberStringe[0] == '7' || numberStringe[0] == '8' || numberStringe[0] == '9') {
		QMessageBox::information(this, "Ошибка", "Введите верное значение ");
		ui->virazh->setText("");
		return;
	}
	else {
		if (numberStringe[0] == 'a' || numberStringe[0] == 'b' || numberStringe[0] == 'c' || numberStringe[0] == 'd' ||
				numberStringe[0] == 'e' || numberStringe[0] == '(' || numberStringe[0] == ')') {
			QString txt = post(ui->virazh->text());
			ui->postf->setText(txt);
			QString inf = QString::number(ans(txt));
			if (inf == "inf" || inf == "nan") {
				QMessageBox::information(this, "Ошибка", "Введите верное значение ");
			}
			else
				ui->res->setText(inf);
		}
	}
}


void MainWindow::on_newschit_clicked()
{
	QString k1 = "";
	QTableWidgetItem* item = ui->plustable->currentItem();
	if (!ui->plustable->currentItem()){
		QMessageBox::information(this, "Ошибка", "Выберите строку ");
		return;
	}
	k1 = item->text();
	QString text = post(k1);
	ui->postf->setText(text);
	QString a = QString::number(ans(text));
	if (a != "nan"){
		ui->res->setText(a);
	}
	else{
		ui->res->setText(QString::number(0));
	}
}
