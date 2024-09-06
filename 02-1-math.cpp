#include <iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "Rus");
	float a, b, c, P; // a, b - катеты, c - гипотенуза, P - периметр

	cout << "Введите стороны a и b:" << endl;
	cin >> a >> b;
	
	c = sqrt(a * a + b * b);
	P = a + b + c;
	
	cout << "Гипотенуза = " << c << endl;
	cout << "Периметр = " << P << endl;
}
