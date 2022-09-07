
#include <iostream>
#define n 10
using namespace std;

int initialize_array(int score[], int size)
{
    for (int i = 0; i < n; i++)
        score[i] = 0;
    return score[n];
}

int calc_avg(int score[], int size)
{
    int average;
    int sum=0;
    for (int i = 0; i < n;++i)
    {
        sum = sum + score[i];
    }
    average = sum / n;
    return average;
}

int main()
{
    int const size = n;
    int score[n];
    double average;
    bool found;
    int key;
    initialize_array(score, size);
    average = calc_avg(score, size);
    cout << "the average is " << average<< "\n";
    cout << "enter a key for searching...";
    cin >> key;
    found = false;
    found = linear_search(score, size, key);
    insertion_sort(score, size);
    found = false;
    found = binary_search(score, size, key);
    if (found == true)
        cout << "the item is found";
    else
        cout << "the item cannot be found";
    return 0;
}

