#include "pch.h"
#include <iostream>
#include "math.h"
using namespace std;

int main()
{
    int n, i, k;
    bool isPrime = true;
    cout << "Write numbers ";
    cin >> n >> k; cout << endl;
    for (i = 2; i <= (sqrt(abs(n))); i++) 
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "first is PRIME\n";
    else
        cout << "first is NOT PRIME\n";
    for (i = 2; i <= (sqrt(abs(k))); i++) 
    {
        if (k % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "second is PRIME\n";
    else
        cout << "second is NOT PRIME\n";



    int n1, n2, max;
    n1 = n; 
    n2 = k;

    max = (n1 > n2) ? n1 : n2;

    do
    {
        if (max % n1 == 0 & max % n2 == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        else
            ++max;
    } while (true);

    return 0;



}
