// Exercise 8-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double  integerPower(int base, int exponent);

int main()
{
    int b;
    int exp;
    double answer = 0;
    cout << "\n Please enter a number: ";
    cin >> b;
    cout << "\n Enter an exponent for " << b << ": ";
    cin >> exp;
    answer = integerPower(b, exp);
    cout<< "\n " << b << " to the power of " << exp << " is " << answer;
    return 0;
}
double integerPower(int base, int exponent)
{
    int ans = 1;
    for (int i = 1; i <= exponent;i++)
    {
        ans = ans * base;
        
    }
    return ans;
}
