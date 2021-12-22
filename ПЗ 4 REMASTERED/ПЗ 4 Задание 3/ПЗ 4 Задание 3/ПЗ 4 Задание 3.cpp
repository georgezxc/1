#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int l, m, n;
	cout << "Введите l" << "\n";
	cin >> l;
	cout << "Введите m" << "\n";
	cin >> m;
	cout << "Введите n" << "\n";
	cin >> n;
	int** A = new int* [l];
	for (int i = 0; i < l; i++)
		A[i] = new int[m];
	int** B = new int* [m];
	for (int i = 0; i < m; i++)
		B[i] = new int[n];

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < m; j++) {
			A[i][j] = (rand() % 10) + 1;
			cout << setw(3) << A[i][j] << ' ';
		}
		cout << "\n";
	}
	cout << endl;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			B[i][j] = (rand() % 10) + 1;
			cout << setw(3) << B[i][j] << ' ';
		}
		cout << "\n";
	}
	cout << endl;

	cout << "A[l][m] * B[m][n] = " << "\n";

	int** C = new int* [l];
	for (int i = 0; i < l; i++)
		C[i] = new int[n];


	for (int i = 0; i < l; i++) {
		for (int j = 0; j < n; j++) {
			C[i][j] = 0;
			for (int k = 0; k < m; k++)
				C[i][j] += A[i][k] * B[k][j];
			cout << setw(3) << C[i][j] << ' ';
		}
		cout << endl;

	}
	cout << "\n";
}