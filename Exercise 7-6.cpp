// Exercise 7-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <time.h>
#include <iostream>
using namespace std;

int main()
{
    unsigned int m, n;
    srand(time(0));
    m = 3 + rand() % (2);
    n = 1 + rand() % (3);
    cout << "\n A random number m from 3 to 6 is " << m;
    cout << "\n A random number n from 1 to 5 is " << n;
    cout << "\n";
    int i = 0, sum = 0, j = 0, product = 1;
    for (i = 1;i <= m;i++)
    {
        sum += i;
    }
    for (j = 1;j <= n;j++)
    {
        product *= j;
    }
    cout << "\n The summation of m is " << sum;
    cout << "\n The product of n is " << product;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
