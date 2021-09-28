#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
    int desit, i, dvoich;
    i = 2;
    cout << "write number ";
    cin >> desit;
    int dvo[200];
    int t = 0;
    while (desit > 1)
    {
        dvoich = desit % i;
        dvo[t] = dvoich;
        desit /= i;
        t++;
    }
    t--;
    cout << "result - ";
    cout << 1;
    while (t >= 0)
    {
        cout << dvo[t];
        t--;
    }
    cout << endl;
    return 0;
}
