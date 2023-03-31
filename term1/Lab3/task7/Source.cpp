#include<iostream>
#include<cmath> 
const double PI = acos(-1.0);
long double prived(long double X);
long double prived2(long double X);
long double step(long double a, long double b);
long double kor(long double a);
long double myfabsl(long double X);
long double sinx(long double X);
long double cosx(long double X);
long double lnx(long double X);
int main()
{
	setlocale(LC_ALL, "Russian");
	long double x, y, min;
	bool isIncorrect;
	do
	{
		isIncorrect = false;
		std::cout << "Введите x" << '\n';
		std::cin >> x;
		if (std::cin.fail()) {
			isIncorrect = true;
			std::cout << "Ошибка. Введите корректное число" << '\n';
			std::cin.clear();
			while (std::cin.get() != '\n');
		}
	} while (isIncorrect);
	y = x;
	if (x > 2 * PI)
		x = prived(x);
	else
		x = prived2(x);
	if (y == 0)
	{
		std::cout << "sin(x) = " << sinx(x) << "\n";
		std::cout << "cos (x) = " << cosx(x) << "\n";
		std::cout << "ln (x) = error" << "\n";
	}
	else
	{
		std::cout << "sin(x) = " << sinx(x) << "  libSinx = " << sin(x) << "\n";
		std::cout << "cos (x) = " << cosx(x) << "  libCosx = " << cos(x) << "\n";
		std::cout << "ln (x) = " << lnx(y) << "  libLnx = " << log(fabsl(x)) << "\n";
		min = sinx(x);
		if (cosx(x) < min) {
			min = cosx(x);
		}
		if (lnx(x) < min) {
			min = lnx(x);
		}
		std::cout << "Min: " << min;
	}
	return 0;
}
long double prived(long double X)
{
	long double t;
	t = X / (2.0 * PI);
	t = roundl(t);
	X -= t * 2 * PI;
	return X;
}

long double prived2(long double X)
{
	long double t;
	t = X / (2.0 * PI);
	t = roundl(t);
	X += t * 2 * PI;
	return X;
}


long double step(long double a, long double b)
{
	long double r = 1;
	if (b == 0) return 1;
	else if (b > 0)
	{
		for (int c = 0; c < b; c++)
			r *= a;
	}
	else if (b < 0)
	{
		for (int c = 0; c > b; c--)
			r *= a;

		r = 1 / r;
	}
	return r;
}

long double kor(long double a)
{
	long double b = 0.5;
	for (int i = 0; i < 50; i++)
	{
		b = b / 2 + a / (2 * b);
	}
	return b;
}

long double myfabsl(long double X)
{
	return (X > 0 ? X : -X);
}

long double sinx(long double X)
{
	long double answ = X;
	long double factorial = 6, num = 4;
	long double powl = -X * X * X;
	for (int i = 0; i < 30; i++)
	{
		answ += powl / factorial;
		factorial *= num * (num + 1);
		num += 2;
		powl *= -X * X;
	}
	return answ;
}

long double cosx(long double X)
{
	long double answ = 1, factorial = 2, num = 3;
	long double powl = -X * X;
	for (int i = 0; i < 30; i++)
	{
		answ += powl / factorial;
		factorial *= num * (num + 1);
		num += 2;
		powl *= -X * X;
	}
	return answ;
}

long double lnx(long double X)
{
	long double LN2 = 0.693147180559945309417232121458176568, znak = 0;
	const long double e = 1e-9;
	const long double a = LN2;
	int k = 0;
	if (X < 1e-1)
	{
		X = X / X / X;
		znak = 1;
	}
	while (X >= 2.0)
	{
		X /= 2.0;
		k++;
	}
	X -= 1.;
	long double s = 0;
	int n = 1;
	long double an = X;
	while (abs(an) > e) {
		s += an;
		++n;
		an *= -X * (n - 1) / n;
	}
	s += k * a;
	if (znak == 1) {
		s = -s;
	}
	return s;
}