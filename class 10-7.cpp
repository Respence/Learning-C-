// class 10-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Ask_For_Age() //Function head
{
    int age = 0;
    // declare for the return value, the data type must match the return type in the function head
    // The scope of variable age is within this function Ask_For_Age only  

    cout << "How old are you? ";
    cin >> age;
    return age;
}
void DisplayAge(int k);

int main()
{
    int i = 0; //variable i's scope is the main function
    cout << "function call example...\n";
    i = Ask_For_Age(); //Calling the function Ask_For_Age, which will return an integer value
    DisplayAge(i);
    cout << '\n';
    return 0;
}

void DisplayAge(int k)
{
}
