
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c, rez;
	cout << "������� ����������� �����:" << endl;
	cin >> rez;
	if (rez % 2 == 0)
	{
		cout << "��� ������ �����: " << endl;
	}
	else
	{
		cout << "��� �������� �����: " << endl;
	}

	a = rez % 10;
	b = rez / 10 % 10;
	c = rez / 100;
	cout << (a + b + c) / 3.0 << endl;

	system("pause");
	return 0;
}

