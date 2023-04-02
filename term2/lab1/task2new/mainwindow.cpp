#include "mainwindow.h"
#include "ui_mainwindow.h"

Woman** appendixArr(Woman**,size_t);
Woman** deleteElem (Woman**,size_t,int**,int);
Man** appendixArr(Man**,size_t);
Man** deleteElem (Man**,size_t,int**,int);

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

Woman** appendixArr(Woman** arr,size_t size)
{
	Woman **temp = new Woman*[size+1];
	for(size_t i = 0;i<size;i++)
	{
		temp[i]=arr[i];
	}
	delete[]arr;
	return temp;
}

Man** deleteElem (Man** arr,size_t size,int a[100][2],int resize)
{
	size_t p = a[resize - 1][0]; //number object Man
	for(size_t i= p;i<size-1;i++)
	{
		arr[i]=arr[i+1];
	}
	return arr;
}

Woman** deleteElem(Woman** arr,size_t size,int a[100][2],int resize)
{
	size_t p = a[resize - 1][1]; //number object Man
	for(size_t i= p;i<size-1;i++)
	{
		arr[i]=arr[i+1];
	}
	return arr;
}

Man** appendixArr(Man** arr,size_t size)//size_t newSize add in parameter
{
	Man **temp = new Man*[size+1]; //newSize instead size + 1
	for(size_t i = 0;i<size;i++)
	{
		temp[i]=arr[i];
	}
	delete[]arr;
	return temp;
}

void MainWindow::on_addButton_clicked()
{
	bool m,f, flag = true;
    m = ui->male->checkState();
    f = ui->female->checkState();
    if(f && m)
        return;
    else if(!f && !m)
        return;
    else if(m)
	{
		for(size_t i = 0;i<mCount;i++)
		{
			if(men[i]->getNumber()==ui->numCount->value())
			{
				flag = false;
			}
		}
		for(size_t i = 0;i<wCount;i++)
		{
			if(women[i]->getNumber()==ui->numCount->value())
			{
				flag = false;
			}
		}
		if(!flag)
		{
			QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат введённых данных"),QMessageBox::Ok|QMessageBox::NoButton);
		}
		else
		{
		men[mCount]=new Man();
		men = appendixArr(men,mCount);
		men[mCount]=new Man(ui->numCount->value(),ui->name->text(),ui->age->value(),ui->height->value(),ui->weight->value(),ui->hobby->text(),ui->minAge->value(),
							 ui->maxAge->value(),ui->minHeight->value(),ui->maxHeight->value(),ui->minWeight->value(),ui->maxWeight->value());
		mCount++;
		ui->maleList->append(men[mCount-1]->Str());
    }
	}
    else if(f)
    {
		for(size_t i = 0;i<wCount;i++)
		{
			if(women[i]->getNumber()==ui->numCount->value())
			{
				flag = false;
			}
		}
		for(size_t i = 0;i<mCount;i++)
		{
			if(men[i]->getNumber()==ui->numCount->value())
			{
				flag = false;
			}
		}
		if(!flag)
		{
			QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат введённых данных"),QMessageBox::Ok|QMessageBox::NoButton);
		}
		else
		{
		women[wCount]=new Woman();
		women = appendixArr(women,wCount);
		women[wCount]=new Woman(ui->numCount->value(),ui->name->text(),ui->age->value(),ui->height->value(),ui->weight->value(),ui->hobby->text(),ui->minAge->value(),
							 ui->maxAge->value(),ui->minHeight->value(),ui->maxHeight->value(),ui->minWeight->value(),ui->maxWeight->value());
		wCount++;
		ui->femaleList->append(women[wCount - 1]->Str());
		}
	}
}

bool checkSex(QString string)
{
	 return string == "m" || string=="w";
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
				continue;
			}
			else
			{
				flag = false;
				return flag;
			}
		}
	}
	return flag;
}

void MainWindow::on_openButton_clicked()
{
	QString fileName = QFileDialog::getOpenFileName(this,
		tr("Открытие"), "//", tr("txt files (*.txt)"));
	QFile file(fileName);
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
			return;
	QTextStream in(&file);
	int  k = 0;
	QString result,temp;
	while(!in.atEnd())
	{
		in>>result;
		if(!checkSex(result))
		{
			QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат введённых данных(sex: m or w)"),QMessageBox::Ok|QMessageBox::NoButton);
			return;
		}
		else if(result=="m")
		{
			men = appendixArr(men,mCount);
			men[mCount]=new Man();
			if(k==0)
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный порядковый номер(0<number<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный порядковый номер(0<number<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					men[mCount]->setNumber(result.toInt());
					k++;
				}
			}
			if(k==1)
			{
				in>>result;
				men[mCount]->setName(result);
				k++;
			}
			if (k==2)
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат возраста(0<age<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат возраста(0<age<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					men[mCount]->setAge(result.toInt());
					k++;
				}
			}
			if (k==3)//Height
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат роста(0<height<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат роста(0<height<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					men[mCount]->setHight(result.toInt());
					k++;
				}
			}
			if (k==4)//Weight
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат веса(0<weight<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат веса(0<weight<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					men[mCount]->setWeigth(result.toInt());
					k++;
				}
			}
			if(k==5)//hobby
			{
				in>>result;
				k++;
			}
			if (k==6)//minAge
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат минимального возраста(0<min age<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат минимального возраста(0<min age<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					men[mCount]->setMinAge(result.toInt());
					k++;
				}
			}
			if (k==7)//maxAge
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат максимального возраста(0<max age<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат максимального возраста(0<max age<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					men[mCount]->setMaxAge(result.toInt());
					k++;
				}
			}
			if (k==8)//minHeight
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат минимального роста(0<min height<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат минимального роста(0<max height<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					men[mCount]->setMinHight(result.toInt());
					k++;
				}
			}
			if (k==9)//maxHeight
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат максимального роста(0<max height<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат максимального роста(0<max height<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					men[mCount]->setMaxHight(result.toInt());
					k++;
				}
			}
			if (k==10)//minWeight
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат минимального веса(0<min weight<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат минимального веса(0<min weight<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					men[mCount]->setMinWeight(result.toInt());
					k++;
				}
			}
			if (k==11)//max Weight
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат максимального веса(0<max weight<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат максимального веса(0<max weight<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					men[mCount]->setMaxWeight(result.toInt());
					k=0;
					for(size_t i = 0;i<wCount;i++)
					{
						if(men[mCount]->getNumber()==women[i]->getNumber())
						{
							QMessageBox::critical(0,tr("Ошибка"),tr("Неверный порядковый номер(number1 != number2)"),QMessageBox::Ok|QMessageBox::NoButton);
							return;
						}
					}
					for(size_t i = 0;i<mCount;i++)
					{
						if(men[mCount]->getNumber()==men[i]->getNumber())
						{
							QMessageBox::critical(0,tr("Ошибка"),tr("Неверный порядковый номер(number1 != number2)"),QMessageBox::Ok|QMessageBox::NoButton);
							return;
						}
					}
					mCount++;
					ui->maleList->append(men[mCount-1]->Str());
				}
			}
		}
		else if(result=="w")
		{
			women = appendixArr(women,wCount);
			women[wCount]=new Woman();
			if(k==0)
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный порядковый номер(0<number<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный порядковый номер(0<number<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					women[wCount]->setNumber(result.toInt());
					k++;
				}
			}
			if(k==1)
			{
				in>>result;
				women[wCount]->setName(result);
				k++;
			}
			if (k==2)
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат возраста(0<age<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат возраста(0<age<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					women[wCount]->setAge(result.toInt());
					k++;
				}
			}
			if (k==3)//Height
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат роста(0<height<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат роста(0<height<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					women[wCount]->setHight(result.toInt());
					k++;
				}
			}
			if (k==4)//Weight
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат веса(0<weight<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат веса(0<weight<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					women[wCount]->setWeigth(result.toInt());
					k++;
				}
			}
			if(k==5)//hobby
			{
				in>>result;
				women[wCount]->setHobby(result);
				k++;
			}
			if (k==6)//minAge
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат минимального возраста(0<min age<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат минимального возраста(0<min age<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					women[wCount]->setMinAge(result.toInt());
					k++;
				}
			}
			if (k==7)//maxAge
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат максимального возраста(0<max age<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат максимального возраста(0<max age<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					women[wCount]->setMaxAge(result.toInt());
					k++;
				}
			}
			if (k==8)//minHeight
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат минимального роста(0<min height<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат минимального роста(0<max height<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					women[wCount]->setMinHight(result.toInt());
					k++;
				}
			}
			if (k==9)//maxHeight
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат максимального роста(0<max height<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат максимального роста(0<max height<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					women[wCount]->setMaxHight(result.toInt());
					k++;
				}
			}
			if (k==10)//minWeight
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат минимального веса(0<min weight<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат минимального веса(0<min weight<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					women[wCount]->setMinWeight(result.toInt());
					k++;
				}
			}
			if (k==11)//max Weight
			{
				in>>result;
				if(checkNumber(result))
				{
					QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат максимального веса(0<max weight<200)"),QMessageBox::Ok|QMessageBox::NoButton);
					return;
				}
				else
				{
					if(result.toInt()<1 || result.toInt()>200)
					{
						QMessageBox::critical(0,tr("Ошибка"),tr("Неверный формат максимального веса(0<max weight<200)"),QMessageBox::Ok|QMessageBox::NoButton);
						return;
					}
					women[wCount]->setMaxWeight(result.toInt());
					k=0;
					for(size_t i = 0;i<mCount;i++)
					{
							if(men[i]->getNumber()==women[wCount]->getNumber())
							{
								QMessageBox::critical(0,tr("Ошибка"),tr("Неверный порядковый номер(number1 != number2))"),QMessageBox::Ok|QMessageBox::NoButton);
								return;
							}
					}
					for(size_t i = 0;i<wCount;i++)
					{
						if(women[wCount]->getNumber()==women[i]->getNumber())
						{
							QMessageBox::critical(0,tr("Ошибка"),tr("Неверный порядковый номер(number1 != number2)"),QMessageBox::Ok|QMessageBox::NoButton);
							return;
						}
					}
					wCount++;
					ui->femaleList->append(women[wCount-1]->Str());
				}
			}
		}
	}
	file.flush();
	file.close();
}

void MainWindow::on_sortButton_clicked()
{
	ui->candidateList->clear();
	paryCount=0;
	for(size_t i = 0;i<mCount;i++)
	{
		for(size_t j = 0;j<wCount;j++)
		{
			if(men[i]->getWeigth()>women[j]->getMinWeight() && men[i]->getWeigth()<women[j]->getMaxWeight()
					&& women[j]->getWeigth()>men[i]->getMinWeight()&&women[j]->getWeigth()<men[i]->getMaxWeight())
			{
				if(men[i]->getAge()>women[j]->getMinAge() && men[i]->getAge()<women[j]->getMaxAge()
						&& women[j]->getAge()>men[i]->getMinAge()&&women[j]->getAge()<men[i]->getMaxAge())
				{
					if(men[i]->getHight()>women[j]->getMinHight() && men[i]->getHight()<women[j]->getMaxHight()
							&& women[j]->getHight()>men[i]->getMinHight()&&women[j]->getHight()<men[i]->getMaxHight())
					{
						arr[paryCount][0]= (int) i;
						arr[paryCount][1]= (int)j;
						paryCount++;
						ui->candidateList->append("\tПара " + QString::number(paryCount) + ":");
						ui->candidateList->append(men[i]->Str());
						ui->candidateList->append(women[j]->Str());
						ui->candidateList->append("\n");
					}
				}
			}
		}
	}
}

void MainWindow::on_saveButton_clicked()
{
	QString fileName = QFileDialog::getOpenFileName(this,
		tr("Сохранение"), "//", tr("txt files (*.txt)"));
	QFile file(fileName);
	if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
			return;
	QTextStream out(&file);
	QString fList,mList,cList;
	fList = "\nСписок невест:\n";
	mList = "Список женихов:\n";
	cList = "\nСписок кандидатов:\n";
	out << mList ;
	out << ui->maleList->toPlainText() ;
	out << fList;
	out << ui->femaleList->toPlainText();
	out << cList;
	out << ui->candidateList->toPlainText();
	file.flush();
	file.close();
}

void MainWindow::on_exitButton_clicked()
{
	QApplication::exit();
}

void MainWindow::on_deleteButton_clicked()
{
	 int deleteRow = ui->lineDelete->text().toInt();
	 if(deleteRow<1 || deleteRow>200 || deleteRow>paryCount)
	 {
		 QMessageBox::critical(0,tr("Ошибка"),tr("Введите правильный номер пары для удаления"),QMessageBox::Ok|QMessageBox::NoButton);
		 return;
	 }
	 if(ui->candidateList->toPlainText()=="")
	 {
		 QMessageBox::critical(0,tr("Ошибка"),tr("Пар для удаления не найдено"),QMessageBox::Ok|QMessageBox::NoButton);
		 return;
	 }
	 men = deleteElem(men,mCount,arr,deleteRow);
	 mCount--;
	 women = deleteElem(women,wCount,arr,deleteRow);
	 wCount--;
	 int d0 = arr[deleteRow - 1][0];
	 int d1 = arr[deleteRow - 1][1];
	 for(int i = paryCount; i > 0; i--)
	 {
		 if ((arr[i][0] == d0) || (arr[i][1] == d1))
		 {
			 for(int j = i; j < paryCount - 1; j++)
			 {
				 arr[j][0] = arr[j+1][0];
				 arr[j][1] = arr[j+1][1];
			 }
			 paryCount--;
		 }
	 }
	 ui->candidateList->clear();
	 ui->maleList->clear();
	 ui->femaleList->clear();
	 for (int i = 0; i < paryCount; i++)
	 {
			 ui->candidateList->append("\tПара " + QString::number(i + 1) + ":");
			 ui->candidateList->append(men[arr[i][0]]->Str());
			 ui->candidateList->append(women[arr[i][1]]->Str());
	 }
	 for(size_t i = 0; i<mCount;i++)
	 {
		 ui->maleList->append(men[i]->Str());
	 }
	 for(size_t i = 0; i<wCount;i++)
	 {
		 ui->femaleList->append(women[i]->Str());
	 }

}
