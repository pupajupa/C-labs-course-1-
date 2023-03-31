
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void info();
bool natFormNumIsCorrect(string, bool&, long&, double&);
void getOnesComplement(const string&, const string&, const bool, string&, const int, const int);
void getBinaryIntPart(long, string&);
void getBinaryFractPart(double, string&, const int iterCount = 10);
void getOnesComplementSum(const string&, const string&, string&, double&);
bool repeat();
int intCheck();

int main()
{
	setlocale(LC_ALL, "Russian");
	do {
		info();
		string inputNum1;
		string inputNum2;
		bool num1IsCorrect(false);
		bool num2IsCorrect(false);
		bool num1IsNegative(false);
		bool num2IsNegative(false);
		long intPart1(0);
		long intPart2(0);
		double fractPart1(0.0);
		double fractPart2(0.0);
		string binIntPartStr1;
		string binIntPartStr2;
		string binFractPartStr1;
		string binFractPartStr2;
		int binIntPartStrMaxSize(0);
		int binFractPartStrMaxSize(0);
		string onesComplement1;
		string onesComplement2;
		string onesComplementSum;
		double natSum(0.0);

		cout << "   Input 1st number in natural form" << endl; 
		cin >> inputNum1;
		num1IsCorrect = natFormNumIsCorrect(inputNum1, num1IsNegative, intPart1, fractPart1);
		if (num1IsCorrect == true)
		{
			cout << endl << "   Input 2nd number in natural form" << endl;
			cin >> inputNum2;
			num2IsCorrect = natFormNumIsCorrect(inputNum2, num2IsNegative, intPart2, fractPart2);
			if (num2IsCorrect == true)
			{
				getBinaryIntPart(intPart1, binIntPartStr1);
				getBinaryFractPart(fractPart1, binFractPartStr1);

				getBinaryIntPart(intPart2, binIntPartStr2);
				getBinaryFractPart(fractPart2, binFractPartStr2);

				binIntPartStrMaxSize = max(binIntPartStr1.size(), binIntPartStr2.size()) + 1; 
				binFractPartStrMaxSize = max(binFractPartStr1.size(), binFractPartStr2.size()); 
				getOnesComplement(binIntPartStr1, binFractPartStr1, num1IsNegative, onesComplement1, binIntPartStrMaxSize, binFractPartStrMaxSize);
				getOnesComplement(binIntPartStr2, binFractPartStr2, num2IsNegative, onesComplement2, binIntPartStrMaxSize, binFractPartStrMaxSize);

				cout << endl << "   Ones' complement of 1st number:" << endl << onesComplement1 << endl << endl;
				cout << endl << "   Ones' complement of 2nd number:" << endl << onesComplement2 << endl << endl;

				getOnesComplementSum(onesComplement1, onesComplement2, onesComplementSum, natSum);
				cout << endl << "   Ones' complement sum:" << endl << onesComplementSum << endl << endl;
				cout << endl << "   Sum in natural form:" << endl << natSum << endl << endl;
			}
			else
			{
				cout << endl << "   2nd number in natural form is incorrect!" << endl << endl;
			}
		}
		else
		{
			cout << endl << "   1st number in natural form is incorrect!" << endl << endl;
		}
	}
	while (repeat());
	return 0;
}

inline void info()
{
	std::cout << "јнтихович ћаксим ¬икторович, группа 253505" << std::endl;
	std::cout << "«адание 2" << std::endl;
	std::cout << "¬ариант 4" << std::endl << std::endl;
	std::cout << "Ќайдите сумму двоичных чисел, заданных в естественной форме." << std::endl;
	std::cout << "—ложение выполните в обратном коде.ќтвет выразите в пр€мом коде." << std::endl << std::endl;
}

bool natFormNumIsCorrect(string inputNum, bool& isNegative, long& intPart, double& fractPart)
{
	bool isCorrect(false);

	int inputNumSymbsCount = inputNum.size();
	if (inputNumSymbsCount != 0)
	{
		isNegative = (inputNum[0] == '-');
		if (isNegative == true)
		{
			(void)inputNum.erase(inputNum.begin());
			--inputNumSymbsCount;
		}

		if (inputNumSymbsCount != 0)
		{
			const string setOfNums = "0123456789";
			string intPartStr;
			string fractPartStr = "0.";

			int symbInd = setOfNums.find(inputNum[0]);
			if (symbInd != -1)
			{
				isCorrect = true;
				intPartStr.push_back(inputNum[0]);

				bool pointDetected(false);
				for (int i = 1; i < inputNumSymbsCount; ++i)
				{
					if (pointDetected == false)
					{
						pointDetected = (inputNum[i] == '.');
						if (pointDetected == true)
						{
							continue;
						}
					}

					symbInd = setOfNums.find(inputNum[i]);
					if (symbInd != -1)
					{
						if (pointDetected == true)
						{
							fractPartStr.push_back(inputNum[i]);
						}
						else
						{
							intPartStr.push_back(inputNum[i]);
						}
					}
					else
					{
						isCorrect = false;
						break;
					}
				}

				if (isCorrect == true)
				{
					intPart = atol(intPartStr.c_str()); //если всЄ хорошо, то строку целой части загон€ем в переменную long
					fractPart = 0.0;
					const int fractPartStrSize = fractPartStr.size();
					if (fractPartStrSize > 2)
					{
						fractPart = atof(fractPartStr.c_str()); //если в строку дробной части что-то было долеплено после точки, то загон€ем в переменную double
					}
				}
			}
		}
	}

	return isCorrect;
}

void getBinaryIntPart(long intPart, string& binIntPartStr)
{
	binIntPartStr.clear();

	if (intPart == 0)
	{
		binIntPartStr.push_back('0'); //если 0, то получаем тоже 0
	}
	else
	{
		int moduloVal(0); //остаток от делени€
		while (intPart != 1)
		{
			moduloVal = intPart % 2;
			if (moduloVal == 0)
			{
				(void)binIntPartStr.insert(binIntPartStr.begin(), '0');
			}
			else
			{
				(void)binIntPartStr.insert(binIntPartStr.begin(), '1');
			}
			intPart /= 2;
		}
		(void)binIntPartStr.insert(binIntPartStr.begin(), '1');
	}
}

void getBinaryFractPart(double fractPart, string& binFractPartStr, const int iterCount)
{
	binFractPartStr.clear();

	if (fractPart != 0.0)
	{
		int intVal(0);
		for (int i = 0; i < iterCount; ++i)
		{
			fractPart *= 2.0;
			intVal = static_cast<int>(fractPart);
			if (intVal == 0)
			{
				binFractPartStr.push_back('0');
			}
			else
			{
				binFractPartStr.push_back('1');
				fractPart -= static_cast<double>(intVal);
				if (fractPart == 0.0)
				{
					break;
				}
			}
		}
	}
}

void getOnesComplement(const string& binIntPartStr, const string& binFractPartStr, const bool numIsNegative, string& onesComplement, const int binIntPartStrMaxSize, const int binFractPartStrMaxSize)
{
	onesComplement.clear();

	onesComplement.push_back('0');
	onesComplement.push_back(',');
	const int zerosInIntCount = binIntPartStrMaxSize - binIntPartStr.size();
	for (int i = 0; i < zerosInIntCount; ++i)
	{
		onesComplement.push_back('0');
	}
	onesComplement.append(binIntPartStr);
	if (binFractPartStrMaxSize != 0)
	{
		onesComplement.push_back('.'); //если дробь не пуста€, то кидаем точку и следом дробную часть
		onesComplement.append(binFractPartStr);
		const int zerosInFractCount = binFractPartStrMaxSize - binFractPartStr.size();
		for (int i = 0; i < zerosInFractCount; ++i)
		{
			onesComplement.push_back('0');
		}
	}

	if (numIsNegative == true)
	{
		const int onesComplementSize = onesComplement.size();
		for (int i = 0; i < onesComplementSize; ++i)
		{
			if (onesComplement[i] == '0')
			{
				onesComplement[i] = '1';
			}
			else
			{
				if (onesComplement[i] == '1')
				{
					onesComplement[i] = '0';
				}
			}
		}
	}
}

/*
—читаем сумму обратных кодов.
const string & onesComplement1 Ч 1-й код
const string & onesComplement2 Ч 2-й
*/
void getOnesComplementSum(const string& onesComplement1, const string& onesComplement2, string& onesComplementSum, double& natSum)
{
	onesComplementSum.clear();

	int addVal(0);
	bool isDot(false); //проверка на точку дроби
	bool isComma(false); //проверка на зап€тую знакового бита
	const int symbsCount = onesComplement1.size();
	int dotInd(symbsCount); //запомним тут индекс точки дроби, если дроби нету, то предпологаем равным размеру кода
	for (int i = symbsCount - 1; i > -1; --i) //сложение ведЄм с конца, т.е. с последнего бита дроби
	{
		isDot = (onesComplement1[i] == '.');
		isComma = (onesComplement1[i] == ',');
		if (isDot == true || isComma == true)
		{
			if (isDot == true)
			{
				dotInd = i;
			}
			(void)onesComplementSum.insert(onesComplementSum.begin(), onesComplement1[i]);
		}
		else
		{
			if (onesComplement1[i] == '0')
			{
				if (onesComplement2[i] == '0')
				{
					if (addVal == 0)
					{
						(void)onesComplementSum.insert(onesComplementSum.begin(), '0'); //если первый 0, и второй 0, и добавочной знвчение 0, то записываем 0, или сокращенно 0 + 0 + 0 = 0
					}
					else
					{
						(void)onesComplementSum.insert(onesComplementSum.begin(), '1'); //0 + 0 + 1 = 1, занул€ем добавочное
						addVal = 0;
					}
				}
				else
				{
					if (addVal == 0)
					{
						(void)onesComplementSum.insert(onesComplementSum.begin(), '1');
					}
					else
					{
						(void)onesComplementSum.insert(onesComplementSum.begin(), '0'); //0 + 1 + 1 = 0 и 1 переноситс€ дальше, т.е. 1 в addVal оставл€ем
					}
				}
			}
			else
			{
				if (onesComplement2[i] == '0')
				{
					if (addVal == 0)
					{
						(void)onesComplementSum.insert(onesComplementSum.begin(), '1');
					}
					else
					{
						(void)onesComplementSum.insert(onesComplementSum.begin(), '0'); //1 + 0 + 1 = 0 и 1 переноситс€ дальше 
					}
				}
				else
				{
					if (addVal == 0)
					{
						(void)onesComplementSum.insert(onesComplementSum.begin(), '0'); //1 + 1 + 0 = 0 и 1 переноситс€ дальше, т.е. в addVal загон€ем 1
						addVal = 1;
					}
					else
					{
						(void)onesComplementSum.insert(onesComplementSum.begin(), '1');
					}
				}
			}
		}
	}

	if (addVal == 1)
	{
		for (int i = symbsCount - 1; i > 1; --i)
		{
			if (i != dotInd)
			{
				if (onesComplementSum[i] == '0')
				{
					onesComplementSum[i] = '1';
					break;
				}
				else
				{
					onesComplementSum[i] = '0';
				}
			}
		}
	}

	natSum = 0.0; //считаем естественную сумму
	const bool sumIsNegative = (onesComplementSum[0] == '1'); //если 1, значит число отрицательное, иначе положительное
	int povVal(0);
	for (int i = dotInd - 1; i > 1; --i)
	{
		if (sumIsNegative == true)
		{
			if (onesComplementSum[i] == '0')
			{
				natSum -= pow(2.0, povVal);
			}
		}
		else
		{
			if (onesComplementSum[i] == '1')
			{
				natSum += pow(2.0, povVal);
			}
		}
		++povVal;
	}
	povVal = -1;
	for (int i = dotInd + 1; i < symbsCount; ++i)
	{
		if (sumIsNegative == true)
		{
			if (onesComplementSum[i] == '0')
			{
				natSum -= pow(2.0, povVal);
			}
		}
		else
		{
			if (onesComplementSum[i] == '1')
			{
				natSum += pow(2.0, povVal);
			}
		}
		--povVal;
	}
}

bool repeat()
{
	std::cout << "\n   ’отите продолжить ?\n" << "1 - ƒа\t0 - Ќет\n";
	int q = intCheck();
	if (q == 1)
	{
		system("cls");
		return true;
	}
}

int intCheck()
{
	int x;
	while (scanf_s("%d", &x) != 1 || x < 0 || x > 1 || getchar() != '\n')    //O(n)
	{
		printf("Error\n");
		rewind(stdin);
	}
	return x;
}