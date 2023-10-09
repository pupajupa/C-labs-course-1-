#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
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


void MainWindow::on_addMassive_clicked()
{
	Treee.clear();
	for(int i = 0; i < ui->table->rowCount(); i++)
	{
		std::string data = ui->table->item(i, 0)->text().toStdString();
		int key = ui->table->item(i, 1)->text().toInt();
		Treee.add(data,key);
	}
}

void MainWindow::on_balanceButton_clicked()
{
		Treee.balance();
}

void MainWindow::on_add_clicked()
{
	if(ui->dataInAdd->text().isEmpty() || ui->keyInAdd->text().isEmpty())
	{
		 QMessageBox::warning(this, "Warning", "Line edit is clear.");
		 return;
	}
	std::string data = ui->dataInAdd->text().toStdString();
	int key = ui->keyInAdd->text().toInt();
	Treee.add(Treee.receiveRoot(),key,data);
}
void addNode(QTreeWidgetItem* p, Node* n)
{
	if(n == nullptr)
		return;
	QTreeWidgetItem* item = new QTreeWidgetItem(p);
	item->setText(0, QString::number(n->key));
	item->setText(1, QString::fromStdString(n->data));
	addNode(item, n->left);
	addNode(item, n->right);
}

void MainWindow::on_preord_clicked()
{
		 for(int i = 0; i < ui->tree->topLevelItemCount(); i++)
		 {
			QTreeWidgetItem* item = ui->tree->topLevelItem(i);
			while(item->childCount() > 0)
			{
				QTreeWidgetItem* child = item->takeChild(0);
				delete child;
			}
			delete item;
		}
		ui->tree->clear();
		QTreeWidgetItem* root = new QTreeWidgetItem(ui->tree);
		root->setText(0, "Root");
		addNode(root, Treee.receiveRoot());
		ui->tree->expandAll(); //развернуть все узлы
}

void MainWindow::on_search_clicked()
{
	ui->memo->clear();
	if(ui->keyInSearchOrRemove->text().isEmpty())
	{
		QMessageBox::warning(this, "Warning", "Line edit is clear.");
		return;
	}
	int key = ui->keyInSearchOrRemove->text().toInt();
	ui->memo->append(QString::fromStdString(Treee.searchNode(key)));
}

void MainWindow::on_remove_clicked()
{
	if(ui->keyInSearchOrRemove->text().isEmpty())
	{
		QMessageBox::warning(this, "Warning", "Line edit is clear.");
		return;
	}
		int key = ui->keyInSearchOrRemove->text().toInt();
		Treee.remove(key);
}
void adReverse(Node* n,QTreeWidgetItem* p)
{
	if(n == nullptr)
		return;
	QTreeWidgetItem* i = new QTreeWidgetItem(p);
	i->setText(0, QString::number(n->key));
	i->setText(1, QString::fromStdString(n->data));
	adReverse(n->right,i) ;
	adReverse(n->left,i);
}
void MainWindow::on_postorder_clicked()
{
	for(int i = 0; i < ui->tree->topLevelItemCount(); i++)
	{
		QTreeWidgetItem* it = ui->tree->topLevelItem(i);
		while(it->childCount() > 0)
		{
			QTreeWidgetItem* child = it->takeChild(0);
			delete child;
		}
		delete it;
	}
	ui->tree->clear();
	QTreeWidgetItem* r = new QTreeWidgetItem(ui->tree);
	r->setText(0, "Root");
	adReverse(Treee.receiveRoot(),r);
	ui->tree->expandAll();
}
void adInorder(QTreeWidgetItem* p, Node* n)
{
	if(n == nullptr)
		return;
	adInorder(p, n->left);
	QTreeWidgetItem* i = new QTreeWidgetItem(p);
	i->setText(0, QString::number(n->key));
	i->setText(1, QString::fromStdString(n->data));
	adInorder(p, n->right);
}
void MainWindow::on_keyup_clicked()
{
	for(int i = 0; i < ui->tree->topLevelItemCount(); i++)
	{
		QTreeWidgetItem* it = ui->tree->topLevelItem(i);
		while(it->childCount() > 0)
		{
			QTreeWidgetItem* child = it->takeChild(0);
			delete child;
		}
		delete it;
	}
	ui->tree->clear();
	QTreeWidgetItem* r = new QTreeWidgetItem(ui->tree);
	r->setText(0, "Root");
	adInorder(r, Treee.receiveRoot());
	ui->tree->expandAll();
}
