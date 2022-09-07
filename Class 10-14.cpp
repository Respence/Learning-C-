// Class 10-14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void func_x(int&);
void main()
{
    int i = 1;
    cout << "before calling, i is ... " << i << "\n";
    func_x(i);
    cout << "after the function call, i is ... " << i << "\n";
}

void func_x(int& k)
{
    for (int i = 1; i <= 10; i++)
    {
        k = k * 2;
        cout << "k in function is now ..." << k << "\n";

    }
}


