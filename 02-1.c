#include <stdio.h>
#include <locale.h>
#include <cmath>

int main() {
	setlocale(LC_ALL, "Rus");
	float a, b, c, P; // a, b - катеты, c - гипотенуза, P - периметр

	printf("Введите стороны a и b:\n");
	scanf_s("%f %f", &a, &b);

	c = sqrt(a * a + b * b);
	P = a + b + c;

	printf("Гипотенуза = %f\n", c);
	printf("Периметр = %f", P);
}
