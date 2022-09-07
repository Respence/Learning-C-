// Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Ask_For_Age()
{
    int age = 0;
    // declare for the return value, the data type must match the return type in the function head
    // The scope of variable age is within this function Ask_For_Age only  
    cout << "How old are you? ";
    cin >> age;
    return age;
}
int main()
{
    int i = 0; //variable i's scope is the main function
    cout << "function call example...\n";
    i = Ask_For_Age(); //Calling the function Ask_For_Age, which will return an integer value
    //The returned integer is then assigned to the variable i. Note that in the main function,
    // the variable age (declared in Ask_For_Age) is not recognized
    cout << '\n';
    return 0;
}

