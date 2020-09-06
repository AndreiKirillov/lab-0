#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello World!" << endl << "Введите символ:";
	char ch;
	cin >> ch;
	cout << "Введённый символ:" << ch;
	return 0;
}