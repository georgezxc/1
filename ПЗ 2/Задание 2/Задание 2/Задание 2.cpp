#include "pch.h"
#include <iostream>
#include "math.h"

using namespace std;

int main()
{
	int n, d1, d2, d3, i; d1 = 0; d2 = 1;
	cout << "write number "; cin >> n;
	if (n < 0) cout << "change number\n";
	else {
		if (n == 0) cout << n; 
		else
			if (n == 1) cout << n - 1, n;
			else {
				cout << " 0 1";
				for (i = 2; i < n; i++) 
				{
					cout << " ", d3 = d1 + d2;
					cout << d3;
					d1 = d2;
					d2 = d3;
				}

				cout << endl;
			}

		int fac; i = 1; fac = 1;


		while (i < n) {
			fac = fac * ++i;
		}

		cout << "factorial = " << fac;

	}
}