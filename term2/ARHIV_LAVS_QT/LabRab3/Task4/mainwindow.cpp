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


void MainWindow::on_pushback_clicked()
{
	vec.push_back(ui->spinPush->value());
}

void MainWindow::on_show_clicked()
{
	ui->showText->clear();
	if(vec.size()==0){
			QMessageBox::information(this,"Информация","Вектор пуст");
			return;
		}
	QString res = "{";
	for(size_t i = 0;i<vec.size();i++){
		res+=QString::number(vec[i])+" ";
	}
	res+="}";
	ui->showText->setText(res);
}

void MainWindow::on_pushButton_clicked()
{
	if(vec.size()==0){
			QMessageBox::critical(this,"Ошибка","Нет элементов для удаления");
			return;
		}
	vec.pop_back();
	QMessageBox::information(this,"Информация","Элемент успешно удален.\nДля просмотра воспользуйтесь функцией <show_vector>");
}

void MainWindow::on_maxsize_clicked()
{
	ui->maxsizeLine->clear();
	ui->maxsizeLine->setText(QString::number(vec.max_size()));
}

void MainWindow::on_capacity_clicked()
{
	ui->capLine->clear();
	ui->capLine->setText(QString::number(vec.capacity()));
}

void MainWindow::on_size_clicked()
{
	ui->szLine->clear();
	ui->szLine->setText(QString::number(vec.size()));
}

void MainWindow::on_clear_clicked()
{
	if(vec.size()==0){
			QMessageBox::critical(this,"Ошибка","Нет элементов для очищения");
			return;
		}
	vec.clear();
	QMessageBox::information(this,"Информация","Вектор успешно очищен.\nДля просмотра воспользуйтесь функцией <size>");
}

void MainWindow::on_data_clicked()
{
	if(vec.size()==0){
			QMessageBox::critical(this,"Ошибка","Вектор пуст");
			return;
	}
	int* a = vec.data();
	int b = (int)a;
	ui->dataLine->clear();
	char* str = new char;
	str = itoa(b,str,16);
	ui->dataLine->setText(QString::fromStdString(str));
}

void MainWindow::on_back_clicked()
{
	if(vec.size()==0){
			QMessageBox::critical(this,"Ошибка","Вектор пуст");
			return;
	}
	int* a = vec.back();
	int b = (int)a;
	ui->backLine->clear();
	char* str = new char;
	str = itoa(b,str,16);
	ui->backLine->setText(QString::fromStdString(str));
}

void MainWindow::on_empty_clicked()
{
	ui->emptyLine->clear();
	if(vec.empty()){
		ui->emptyLine->setText("true");
	}
	else{
		ui->emptyLine->setText("false");
	}
}

void MainWindow::on_erase_clicked()
{
	if(vec.size()==0){
			QMessageBox::critical(this,"Ошибка","Нет элементов для удаления");
			return;
		}
	unsigned int a = ui->eraseSpin->value();
	if(a > vec.size()){
		QMessageBox::critical(this,"Ошибка","Вектор не имеет такого элемента");
		return;
	}
	vec.erase(a);
	QMessageBox::information(this,"Информация","Элемент успешно удален.\nДля просмотра воспользуйтесь функцией <show_vector>");
}

void MainWindow::on_front_clicked()
{
	if(vec.size()==0){
			QMessageBox::critical(this,"Ошибка","Вектор пуст");
			return;
	}
	int* a = vec.front();
	int b = (int)a;
	ui->frontLine->clear();
	char* str = new char;
	str = itoa(b,str,16);
	ui->frontLine->setText(QString::fromStdString(str));
}

void MainWindow::on_insert_clicked()
{
	unsigned int a = ui->eraseSpin->value();
	if(a > vec.size()){
		QMessageBox::critical(this,"Ошибка","Невозможно вставить элемент в заданную позицию");
		return;
	}
	size_t pos = ui->insertSpin->value();
	int value = ui->insertValue->value();
	vec.insert(vec.begin()+pos,value);
	ui->insertSpin->setValue(0);
	ui->insertValue->setValue(0);
	QMessageBox::information(this,"Информация","Элемент успешно вставлен.\nДля просмотра воспользуйтесь функцией <show_vector>");
}

void MainWindow::on_begin_clicked()
{
	if(vec.size()==0){
			QMessageBox::critical(this,"Ошибка","Вектор пуст");
			return;
	}
	auto it = vec.begin();
	int first = *it;
	ui->beginLine->clear();
	ui->beginLine->setText(QString::number(first));
}

void MainWindow::on_cbegin_clicked()
{
	if(vec.size()==0){
			QMessageBox::critical(this,"Ошибка","Вектор пуст");
			return;
	}
	auto it = vec.cbegin();
	const int first = *it;
	ui->cbeginLine->clear();
	ui->cbeginLine->setText(QString::number(first));
}

void MainWindow::on_rbegin_clicked()
{
	if(vec.size()==0){
			QMessageBox::critical(this,"Ошибка","Вектор пуст");
			return;
	}
	auto it = vec.rbegin();
	int first = *it;
	ui->rbeginLine->clear();
	ui->rbeginLine->setText(QString::number(first));
}

void MainWindow::on_end_clicked()
{
	if(vec.size()==0){
			QMessageBox::critical(this,"Ошибка","Вектор пуст");
			return;
	}
	auto it = vec.end() - 1;
	int first = *it;
	ui->endLine->clear();
	ui->endLine->setText(QString::number(first));
}

void MainWindow::on_cend_clicked()
{
	if(vec.size()==0){
			QMessageBox::critical(this,"Ошибка","Вектор пуст");
			return;
	}
	auto it = vec.cend() - 1;
	const int first = *it;
	ui->cendLine->clear();
	ui->cendLine->setText(QString::number(first));
}

void MainWindow::on_rend_clicked()
{
	if(vec.size()==0){
			QMessageBox::critical(this,"Ошибка","Вектор пуст");
			return;
	}
	auto it = vec.rend() + 1;
	int first = *it;
	ui->rendLine->clear();
	ui->rendLine->setText(QString::number(first));
}

void MainWindow::on_reserve_clicked()
{
	unsigned int reserv = ui->reserveSpin->value();
	if(reserv<=vec.capacity()){
		QMessageBox::critical(this,"Ошибка","Значение меньше(или равно) чем текущее");
		return;
	}
	vec.reserve(reserv);
	ui->reserveSpin->setValue(0);
	QMessageBox::information(this,"Информация","Память успешно зарезервирована.\nДля просмотра воспользуйтесь функцией <capacity>");
}

void MainWindow::on_resize_clicked()
{
	unsigned int resz = ui->resizeSpin->value();
	if(resz<=vec.size()){
		QMessageBox::critical(this,"Ошибка","Значение меньше(или равно) чем текущее");
		return;
	}
	vec.resize(resz);
	ui->resizeSpin->setValue(0);
	QMessageBox::information(this,"Информация","Новый размер вектора успешно определен.\nДля просмотра воспользуйтесь функцией <size>");
}

void MainWindow::on_emplaceback_clicked()
{
	vec.emplace_back(ui->emplacebackLine->value());
	QMessageBox::information(this,"Информация","Элемент успешно добавлен.\nДля просмотра воспользуйтесь функцией <show_vector>");
	ui->emplacebackLine->setValue(0);
}

void MainWindow::on_emplace_clicked()
{
	unsigned int pos = ui->emplacePos->value();
	unsigned int value = ui->emplaceValue->value();
	if(pos<0 || pos>vec.size()){
		QMessageBox::critical(this,"Ошибка","Данной позиции нет в векторе");
		return;
	}
	vec.emplace(pos,value);
	QMessageBox::information(this,"Информация","Элемент успешно добавлен.\nДля просмотра воспользуйтесь функцией <show_vector>");
	ui->emplacebackLine->setValue(0);
	ui->emplacePos->setValue(0);
	ui->emplaceValue->setValue(0);
}


void MainWindow::on_at_clicked()
{
	unsigned int value = ui->atSpin->value();
	if(value<0 || value>vec.size()-1){
		QMessageBox::critical(this,"Ошибка","Данной позиции нет в векторе");
		return;
	}
	int* a = vec.at(value);
	int b = (int)a;
	ui->atLine->clear();
	char* str = new char;
	str = itoa(b,str,16);
	ui->atLine->setText(QString::fromStdString(str));
}

void MainWindow::on_assign_clicked()
{
	unsigned int posBegin = ui->assignBegin->value();
	unsigned int posEnd = ui->assignEnd->value();
	if(vec.size()==0){
			QMessageBox::critical(this,"Ошибка","Вектор пуст");
			return;
	}
	if(posBegin>=vec.size()||posBegin>posEnd){
		QMessageBox::critical(this,"Ошибка","Значение начальной позиции не должно превышать значение конечной позиции");
		return;
	}
	if(posEnd>=vec.size()||posEnd<posBegin){
		QMessageBox::critical(this,"Ошибка","Значение начальной позиции не должно превышать значение конечной позиции");
		return;
	}
	Vector<int> secVec;
	secVec.assign(vec.begin()+posBegin,vec.begin()+posEnd+1);
	ui->showAssignText->clear();
	QString res = "{";
	for(size_t i = 0;i<secVec.size();i++){
		res+=QString::number(secVec[i])+" ";
	}
	res+="}";
	ui->showAssignText->setText(res);
	ui->assignEnd->setValue(0);
	ui->assignBegin->setValue(0);
}

void MainWindow::on_pushButton_2_clicked()
{
	if(vec.size()==0 ){
			QMessageBox::critical(this,"Ошибка","Вектор пуст");
			return;
	}
	if(sw.size()==0){
		QMessageBox::critical(this,"Ошибка","Вначале сгенерируйте вектор");
		return;
	}
	vec.swap(sw);
	QString res = "{";
	for(size_t i = 0;i<sw.size();i++){
		res+=QString::number(sw[i])+" ";
	}
	res+="}";
	ui->swapLine->setText(res);
	QMessageBox::information(this,"Информация","Элементы двух векторов успешно поменяны.\nДля просмотра воспользуйтесь функцией <show_vector>");
}

void MainWindow::on_swapGener_clicked()
{
	sw.~Vector();
	ui->swapLine->clear();
	for(int i = 0;i<5;i++){
		sw.push_back(8);
	}
	QString res = "{";
	for(size_t i = 0;i<sw.size();i++){
		res+=QString::number(sw[i])+" ";
	}
	res+="}";
	ui->swapLine->setText(res);
}
