// Exercise 8-5 More than one paramters in a function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double total_cost(int quantity, double unit_price);

int main()
{
    int q;
    double up;
    double total_price = 0;
    cout << "\n Please enter the quantity ...";
    cin >> q;
    cout << "\n enter the unit price ...";
    cin >> up;
    total_price = total_cost(q, up);
    cout << "The total prices is " << total_price << "\n";
    //cout << "\n The Total Price is " << total_cost(q, up) << "\n";
    return 0;
}
double total_cost(int quantity, double unit_price)
{
    double total = 0;
    total = quantity * unit_price;
    return total;
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
