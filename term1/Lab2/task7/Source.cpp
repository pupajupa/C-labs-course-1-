//—оставить программу использу€ переключатель switch:
#include <iostream>

int main()
{
	double a, b, c, y;
	int N = 0;
	std::cin >> a >> b >> c >> N;
	switch (N)
	{
	case 2:
		y = b * c - a * a;
		break;
	case 3:
		y = a - b * c;
		break;
	case 7:
		y = a * a * a * a * a * a * a + c;
		break;
	case 56:
		y = b * c;
		break;
	default:
		y =  (a + b) * (a + b) * (a + b);
		break;
	}
	std::cout << y;
	return 0;

}