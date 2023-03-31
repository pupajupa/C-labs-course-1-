/*Составить программу для решения уравнений трёх видов:
7.1 ax^4 + bx^2 + c = 0;
7.2 ax^4 + bx^3 + cx^2 + bx + a = 0
7.3 x^3 + px + q = 0*/

#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "Russian");
	long double a, b, c, x1, x2, x3, x4, p, q, D1, D2, D3, y, y1, y2, s, d;
	int N;
	std::cout << "Выберите тип уравнения:" << " \n" << "1.ax ^ 4 + bx ^ 2 + c = 0" << "\n" << "2.ax^4 + bx^3 + cx^2 + bx + a = 0" << "\n" << "3.x^3 + px + q = 0" << "\n";
	std::cin >> N;
	switch (N) {
	case 1:
		std::cout << "Введите a, b, c(в данной последовательности)" << "\n";
		std::cin >> a >> b >> c;
		// ax ^ 4 + bx ^ 2 + c = 0
		if (a == 0 && b == 0 && c == 0)
		{
			std::cout << "X= любое число";
		}
		else if (a == 0 && b == 0 && c != 0)
		{
			std::cout << "Нет решений";
		}
		else if (a == 0 && c == 0 && b != 0)
		{
			if (c >= 0) std::cout << "X=0";
			else if (c < 0) std::cout << "Нет корней";

		}
		else if (b == 0 && c == 0 && a != 0)
		{
			std::cout << "X=0";
		}
		else if (a == 0 && b != 0 && c != 0)
		{

			//bx ^ 2 + c = 0
			if (c > 0 && b > 0) { std::cout << "Нет решения"; }
			else if (c < 0 && b < 0) { std::cout << "Нет решения"; }
			else if (c < 0 && b>0) { std::cout << sqrt(-(c / b)) << "  " << -sqrt(-(c / b)); } //x=sqrt(c/b)
			else if (c > 0 && b < 0) { std::cout << -sqrt(-(c / b)) << "  " << sqrt(-(c / b)); }
		}
		else if (a != 0 && b == 0 && c != 0)
		{
			// ax ^ 4 + c = 0
			if (c > 0 && a > 0) { std::cout << "Нет решения"; }
			else if (c < 0 && a < 0) { std::cout << "Нет решения"; }
			else if (c < 0 && a > 0) { std::cout << "x1=" << pow((-(c / a)), 1 / 4) << "x2=" << -pow((-(c / a)), 1 / 4); } //x=sqrt(c/b)
			else if (c > 0 && a < 0) { std::cout << "x1=" << pow((-(c / a)), 1 / 4) << "x2=" << -pow((-(c / a)), 1 / 4); }
		}
		else if (a != 0 && b != 0 && c == 0)
		{
			//ax ^ 4 + bx ^ 2=0    (ax^2-b)=0
			// ax^2=b  x^2=b/a
			std::cout << "x1=" << b / a << "\n" << "x2=" << -b / a << "\n";
			std::cout << "x3=0 ";
		}
		else if (a != 0 && b != 0 && c != 0)
		{
			//x1 = pow(x, 2);
		//as^2+bs+c=0
			D1 = b * b - 4 * a * c;
			if (D1 > 0)
			{
				x1 = (-b + sqrt(D1)) / (2 * a);
				x2 = (-b - sqrt(D1)) / (2 * a);
				if (x1 >= 0 && x2 >= 0)
				{
					std::cout << "x1=" << sqrt(x1) << "\n" << "x2= " << sqrt(x2) << "\n" << "x3= " << -sqrt(x1) << "\n" << "x4=" << -sqrt(x2);
				}
				else if (x1 < 0 && x2 >= 0)
				{
					std::cout << "x1=" << sqrt(x2) << "\n" << "x2= " << -sqrt(x2) << "\n";
				}
				else if (x1 >= 0 && x2 < 0)
				{
					std::cout << "x1=" << sqrt(x1) << "\n" << "x2= " << -sqrt(x1) << "\n";
				}
				else if (x1 < 0 && x2 < 0)
				{
					std::cout << "Нет решений";
				}
			}
			else if (D1 == 0)
			{
				x1 = (-b) / 2 * a;
				if (x1 >= 0)
				{
					std::cout << "x1=" << sqrt(x1) << "\n" << "x2= " << -sqrt(x1);
				}
				else if (x1 < 0)
				{
					std::cout << "нет корней";
				}
			}
			else if (D1 < 0)
			{
				std::cout << " Нет корней";
			}
		}
		break;
	case 2:
	{
		std::cout << "Введите a, b, c(в данной последовательности)" << "\n";
		std::cin >> a >> b >> c;
		//y = (x1 + (1 / x1));
		//a*(y)^2 + b*y+  c-2a
		if (a == 0 && b == 0 && c == 0)
		{
			std::cout << "X = R";
		}
		else if (a != 0 && b == 0 && c == 0)
		{
			//ax^4+a=0
			std::cout << "Нет корней";
		}
		else if (a == 0 && b == 0 && c != 0) std::cout << "x1=0";
		else if (a != 0 && b == 0 && c != 0)
		{
			if (c > 0 && a > 0) std::cout << "Нет корней";
			if (c < 0 && a < 0) std::cout << "Нет корней";
			// ax^4+cx^2+a=0
			else if (c > 0 && a < 0)
			{
				D1 = c * c - 4 * a * a;
				if (D1 > 0)
				{
					y1 = -c + sqrt(D1) / (2 * a);
					y2 = -c - sqrt(D1) / (2 * a);
					if (y1 >= 0) std::cout << "x1=" << sqrt(y1);
					else std::cout << "x1 не существует";
					if (y2 >= 0) std::cout << "x2=" << sqrt(y2);
					else std::cout << "x2 не существует";
				}
				else if (D1 == 0)
				{
					y1 = -c / (2 * a);
					if (y1 >= 0) std::cout << "x1=" << sqrt(y1);
					else std::cout << "Нет корней";
				}
				else if (D1 < 0) std::cout << "Нет корней";
			}
			else if (c < 0 && a > 0)
			{
				D1 = c * c - 4 * a * a;
				if (D1 > 0)
				{
					y1 = -c + sqrt(D1) / (2 * a);
					y2 = -c - sqrt(D1) / (2 * a);
					if (y1 >= 0) std::cout << "x1=" << sqrt(y1);
					else std::cout << "x1 не существует";
					if (y2 >= 0) std::cout << "x2=" << sqrt(y2);
					else std::cout << "x2 не существует";
				}
				else if (D1 == 0)
				{
					y1 = -c / (2 * a);
					if (y1 >= 0) std::cout << "x1=" << sqrt(y1);
					else std::cout << "Нет корней";
				}
				else if (D1 < 0) std::cout << "Нет корней";
			}
		}
		else if (a == 0 && b != 0 && c != 0)
			//x(bx^2+cx+b)=0
		{
			std::cout << "x1=0" << "\n";
			D1 = c * c - 4 * b * b;
			if (D1 > 0)
			{
				x2 = (-c + sqrt(D1)) / (2 * b);
				x3 = (-c - sqrt(D1)) / (2 * b);
				std::cout << "x2=" << x3 << "\n" << "x3=" << x3;
			}
			else if (D1 < 0)
			{
				std::cout << "x2, x3 не существуют";
			}
			else if (D1 == 0)
			{
				std::cout << "x2= " << (-c / (2 * b));
			}
		}
		else if (a == 0 && b != 0 && c == 0)
		{
			//bx^3+bx=0 x(bx^2+b)=0
			std::cout << "x1=0";
		}
		else if (a != 0 && b != 0 && c == 0)
		{
			//ay^2+by-2a
			std::cout << "" << "\n";
			D1 = b * b - 4 * 2 * a * a;
			if (D1 > 0)
			{
				y1 = (-b + sqrt(D1)) / (2 * a);
				y2 = (-b - sqrt(D1)) / (2 * a);
				D2 = y1 * y1 - 4 * 1 * 1;
				if (D2 > 0)
				{
					x1 = (y1 + sqrt(D2)) / (2);
					x2 = (y1 - sqrt(D2)) / (2);
					std::cout << "x1=" << x1 << "\n" << "x2=" << x2 << "\n";
				}
				else if (D2 == 0)
				{
					std::cout << "x1=" << y1 / (2);
				}
				else if (D2 < 0)
				{
					std::cout << "x1, x2  Не существуют" << "\n";
				}
				D3 = y2 * y2 - 4 * 1 * 1;
				if (D3 > 0)
				{
					x3 = (y2 + sqrt(D3)) / (2);
					x4 = (y2 - sqrt(D3)) / (2);
					std::cout << "x3=" << x3 << "\n" << "x4=" << x4 << "\n";
				}
				else if (D3 == 0)
				{
					std::cout << "x3=" << y2 / (2);
				}
				else if (D3 < 0)
				{
					std::cout << "x4, x3  Не существуют";
				}
			}
			else if (D1 < 0)
			{
				std::cout << "нет корней";
			}
			else if (D1 == 0)
			{
				y1 = (-b / (2 * a));
				D2 = y1 * y1 - 4;
				if (D2 > 0)
				{
					x1 = (y1 + sqrt(D2)) / (2);
					x2 = (y1 - sqrt(D2)) / (2);
					std::cout << "x1=" << x1 << "\n" << "x2=" << x2 << "\n";
				}
				else if (D2 == 0)
				{
					std::cout << "x1=" << y1 / (2);
				}
				else if (D2 < 0)
				{
					std::cout << "x1, x2  Не существуют" << "\n";
				};
			}
		}
		else if (a != 0 && b != 0 && c != 0)
		{
			D1 = b * b - 4 * a * (c - 2 * a);
			if (D1 > 0)
			{
				y1 = (-b + powl(D1, 1.0 / 2)) / (2 * a);
				y2 = (-b - powl(D1, 1.0 / 2)) / (2 * a);
				//x^2-y1*x+1=0
				D2 = y1 * y1 - 4 * 1 * 1;
				if (D2 > 0)
				{
					x1 = (y1 + sqrt(D2)) / (2);
					x2 = (y1 - sqrt(D2)) / (2);
					std::cout << "x1=" << x1 << "\n" << "x2=" << x2 << "\n";
				}
				else if (D2 == 0)
				{
					std::cout << "x1=" << y1 / (2);
				}
				else if (D2 < 0)
				{
					std::cout << "x1, x2  Не существуют" << "\n";
				}
				D3 = y2 * y2 - 4 * 1 * 1;
				if (D3 > 0)
				{
					x3 = (y2 + sqrt(D3)) / (2);
					x4 = (y2 - sqrt(D3)) / (2);
					std::cout << "x3=" << x3 << "\n" << "x4=" << x4 << "\n";
				}
				else if (D3 == 0)
				{
					std::cout << "x3=" << y2 / (2);
				}
				else if (D3 < 0)
				{
					std::cout << "x4, x3  Не существуют";
				}
			}
			else if (D1 == 0)
			{
				y1 = -b / (2 * a);
				D2 = y1 * y1 - 4;
				if (D2 > 0)
				{
					x1 = (y1 + sqrt(D2)) / (2);
					x2 = (y1 - sqrt(D2)) / (2);
					std::cout << "x1=" << x1 << "\n" << "x2=" << x2 << "\n";
				}
				else if (D2 == 0)
				{
					std::cout << "x1=" << y1 / (2);
				}
				else if (D2 < 0)
				{
					std::cout << "x1, x2  Не существуют" << "\n";
				}
			}
			else if (D1 < 0) std::cout << "Нет корней";
		}
	}
	break;
	case 3:
		std::cout << "Введите p , q (в данной последовательности)" << "\n";
		std::cin >> p >> q;
		if (p == 0 && q == 0)
		{
			std::cout << "х = Любое чилсо";
		}
		else
		{
			D1 = pow(q / 2, 2) + pow(p / 3, 3);
			if (D1 < 0)
			{
				if (q > 0)
				{
					s = atan(sqrt(-D1) / (-q / 2)) + acos(-1);
					x1 = 2 * sqrt(-p / 3) * cos(s / 3);
					x2 = 2 * sqrt(-p / 3) * cos(s / 3 + (2 * acos(-1) / 3));
					x3 = 2 * sqrt(-p / 3) * cos(s / 3 + (4 * acos(-1) / 3));
					std::cout << "x1=" << x1 << "\n" << "x2=" << x2 << "\n" << "x3=" << x3;
				}
				else if (q < 0)
				{
					s = atan(sqrt(-D1) / (-q / 2));
					x1 = 2 * sqrt(-p / 3) * cos(s / 3);
					x2 = 2 * sqrt(-p / 3) * cos(s / 3 + (2 * acos(-1) / 3));
					x3 = 2 * sqrt(-p / 3) * cos(s / 3 + (4 * acos(-1) / 3));
					std::cout << "x1=" << x1 << "\n" << "x2=" << x2 << "\n" << "x3=" << x3;
				}
				else if (q == 0)
				{
					s = acos(-1) / 2;
					x1 = 2 * sqrt(-p / 3) * cos(s / 3);
					x2 = 2 * sqrt(-p / 3) * cos(s / 3 + (2 * acos(-1) / 3));
					x3 = 2 * sqrt(-p / 3) * cos(s / 3 + (4 * acos(-1) / 3));
					std::cout << "x1=" << x1 << "\n" << "x2=" << x2 << "\n" << "x3=" << x3;
				}
			}
			else if (D1 == 0)
			{
				x1 = (cbrt(-q / 2)) * 2;
				x2 = -cbrt(-q / 2);
				std::cout << "x1=" << x1 << "\n" << "x2=" << x2;
			}
			else if (D1 > 0)
			{
				x1 = cbrt(-q / 2 + sqrt(D1)) + cbrt(-q / 2 - sqrt(D1));
				std::cout << "x1=" << x1;
			}
		}
		break;
	default:
	{ std::cout << "Не выбран номер"; }
	break;
	return 0;
	}
}