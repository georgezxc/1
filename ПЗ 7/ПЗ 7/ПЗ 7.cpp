#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

struct Birth {
		int day;
		int month;
		int year;
	};

struct FIO {
	string lastName;
	string firstName;
	string secondName;
};


	struct student
	{
		FIO fio;
		Birth birthday;
		string groupOfBlood;
	};

void printArrayOfStudents(int n, student* students) {
	cout << "ФИО: " << setw(60) << "Дата рождения: " << setw(22) << "Группа крови: " << endl;
	for (int i = 0; i < n; i++) {
		cout << students[i].fio.lastName << " " << students[i].fio.firstName << " " << students[i].fio.secondName << setw(30);
		cout << students[i].birthday.day << "." << students[i].birthday.month << "." << students[i].birthday.year << setw(20);
		cout << students[i].groupOfBlood << endl;
	}
}

int age(int pd, int pm, int py, int bd, int bm, int by)
{
	int d, m, y;
	int md[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	y = py - by;
	if (pm < bm)
	{
		y--;
		m = 12 - (bm - pm);
	}
	else
	{
		m = pm - bm;
	}
	if (pd < bd)
	{
		m--;
		d = md[pm - 1] - (bd - pd);
	}
	else
	{
		d = pd - bd;
	}
	return y;
}

void printArrayOfStudentsInRequiredFormat(int n, student* students) {
	cout << "ФИО: " << setw(42) << "Возраст: " << setw(22) << "Группа крови: " << endl;
	for (int i = 0; i < n; i++) {
		cout << students[i].fio.lastName << " " << students[i].fio.firstName[0] << "." << students[i].fio.secondName[0] << "." << setw(30);
		cout << age(26, 12, 2021, students[i].birthday.day, students[i].birthday.month, students[i].birthday.year) << setw(20);
		cout << students[i].groupOfBlood << endl;
	}
}




int main() {
	setlocale(LC_ALL, "Russian");
	
	

	const int n = 7;
	student students[n] = {
		{ { "Смирнов", "Данила", "Алексеевич" }, { 13, 7, 2005 }, "3+" },
	    { { "Дерюгин", "Георгий", "Артёмович" }, { 5, 2, 2004 }, "1+" },
		{ { "Федоров", "Федор", "Афанасьевич" }, { 1, 9, 2003 }, "2-" },
	    { { "Сидоров", "Георгий", "Сергеевич" }, { 18, 1, 2004 }, "2+" },
	    { { "Аблогин", "Герман", "Валерьевич" }, { 26, 5, 2003 }, "1-" },
		{ { "Лебедев", "Всеволод", "Павлович" }, { 26, 5, 2003 }, "1-" },
	    { { "Ростова", "Ульяна", "Викторовна" }, { 23, 4, 2004 }, "1-" },
	};

	printArrayOfStudents(n, students);

	int count = 0;
	int index = -1;
	for (int i = 0; i < n - 1; ++i)
	{
		int k = 1;
		for (int j = i + 1; j < n; ++j) {
			if (students[i].fio.firstName == students[j].fio.firstName) k++;
			if (k <= count) continue;
			count = k;
			index = i;
		}
	}

	cout << endl << "Самое распространное имя это " << students[index].fio.firstName << ", " << "и оно было использовано " << count << " раза" << endl << endl;

	cout << "Сортировка по фамилии (по алфавиту): " << endl;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (students[i].fio.lastName.compare(students[j].fio.lastName) > 0)
			{
				student swap = students[i];
				students[i] = students[j];
				students[j] = swap;
			}
		}
	}

	
	 printArrayOfStudentsInRequiredFormat(n, students);

     double q = 0;

	for (int i = 0; i < n; i++) {
		q+=age(26, 12, 2021, students[i].birthday.day, students[i].birthday.month, students[i].birthday.year); 

	}
	
	cout << endl << "Средний возраст студентов: " << q/n << endl;


}