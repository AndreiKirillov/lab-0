#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello World!" << endl << "������� ������:";
	char ch;
	cin >> ch;
	cout << "�������� ������:" << ch;
	return 0;
}