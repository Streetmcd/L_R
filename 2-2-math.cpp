#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int num, num_rev; // num - исходное число, num_rev - исходное число с прочтением справа налево

	cout << "Введите трёхзначное число:" << endl;
	cin >> num;
	
	num_rev = (num % 100 / 10) * 10 + (num / 100) + (num % 10) * 100;
	cout << "Число, полученное при прочтении исходного числа справа налево = " << num_rev;
}
