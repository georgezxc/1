#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int a;
    cout << "Amount of elements  ";
    cin >> a;
    double sr, s = 0;
    int* dynamicArray = new int[a];
    for (int i = 0; i < a; i++) {
        dynamicArray[i] = rand() % 20 - 10;
        s += dynamicArray[i];
    }
    for (int i = 0; i < a; i++) {
        cout << dynamicArray[i] << " ";
    }

    sr = s / a;
    cout << " \nSum of array elements  =  " << s << endl;
    cout << "Mean value of elements  =  " << sr << endl;
    delete[] dynamicArray;


    return 0;


}