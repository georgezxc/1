#include "pch.h"
#include <iostream>
#include "math.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int vis, sh, i, s, pl;
	cout << "введите высоту ";
	cin >> vis;
	cout << "введите ширину ";
	cin >> sh;
	while (s < vis)
	{

		while (i < sh)
		{
			cout << "*";
			++i;
		}
		i = 0;
		cout << endl;
		s = s + 1;

	}
	pl = vis * sh;
	cout << "площадь четырёхугольника равна - ";
	cout << pl;
	return 0;
}

