#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

void chet(int rez) {
if (rez % 2 == 0)
	{
		cout << "Четное число " << endl;
	}
	else
	{
		cout << "Нечетное число " << endl;
	}


}

void proverO4ka(int h) {
	int a, b, c;
	a = h % 10;
	b = h / 10 % 10;
	c = h / 100;
	cout << (a + b + c) / 3.0 << endl;
}
void mmm(int month) {
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		cout << "Winter" << endl;
		break;
	case 3:
	case 4:
	case 5:
		cout << "Spring" << endl;
		break;
	case 6:
	case 7:
	case 8:
		cout << "Summer" << endl;
		break;
	case 9:
	case 10:
	case 11:
		cout << "Autumn" << endl;
		break;
	default:
		cout << "this is not right" << endl;
		break;
	}
}
void mMm(int Month) {
	switch (Month)
	{
	case 1:cout << "January" << endl;
		break;
	case 2:cout << "February" << endl;
		break;
	case 3:cout << "March" << endl;
		break;
	case 4:cout << "April" << endl;
		break;
	case 5:cout << "May" << endl;
		break;
	case 6:cout << "June" << endl;
		break;
	case 7:cout << "July" << endl;
		break;
	case 8:cout << "August" << endl;
		break;
	case 9:cout << "Septrember" << endl;
		break;
	case 10:cout << "October" << endl;
		break;
	case 11:cout << "November" << endl;
		break;
	case 12:cout << "December" << endl;
		break;
	default:
		cout << "this is not right" << endl;
		break;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int q;
	cout << "Введите число: " << endl;
	cin >> q;
	chet(q);
	proverO4ka(q);
      int month;
	cout << "Введите номер месяца " << endl;
	cin >> month;
	mmm(month);
      int Month;
	cout << "Enter the month number: ";
	cin >> Month;
	mMm(Month);
	return 0;
}

	
	
	

	
