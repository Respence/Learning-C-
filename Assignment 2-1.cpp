// Assignment 2-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>   // for setprecision for the final answers to round the decimal point
using namespace std;

int main()
{
    double a = 88.67, b = 0.0675, c = 0.20;  //setting the values of the meal, tax, and tip
    double y = 0, x = 0, z = 0, w = 0;    // y:cost of tax, x:cost of total after tax, z:cost of tip, w:final cost
    y = a * b;           // equation calculating the cost of the tax
    x = a + y;           //    ''         ''     total of meal after tax
    z = x * c;           //    ''         ''     the cost of tip
    w = z + x;           //    ''         ''     the final cost
    cout << "\n The cost of the meal is $" << a;
    cout << "\n The cost of tax is $" << setprecision(3) << y;
    cout << "\n The cost of the tip is $" << setprecision(4) << z;
    cout << "\n The final cost of the meal is $" << setprecision(5) << w;   //promt giving the final cost of the meal
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
