// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/*int main()
{
	double* p1, v2=0.5;
	int *p2, *p3, v1=5;


	p1 = &v2;
	p2 = &v1;

	return 0;
}*/

/*int main()
{
	int i, * p;
	cout << "enter an integer...\n";
	cin >> i;
	p = &i;
	cout << "\n the pointer p points to is ..." << *p << "\n";
	return 0;
}*/

/*int main()
{
	int* p1, * p2, i = 1, j = 2;

}*/

/*void cube(int*);
int main()
{
	int n;
	cout << "enter an integer...\n";
	cin >> n;
	cout << "\n the cube of " << n << " is ...";
	cube(&n);
	cout < '\n';
	return 0;
}

void cube(int* number)
{
	*number = *number * *number * *number;
}*/

struct Node
{
	int data;           //change data type to char for letters
	Node* p_to_a_node;
};

//Task 2: In the main function, create 3 nodes, with data 1, 2, 3, then "link" them together.

//Finally, using the link to print out all nodes’ data.

/*int main()
{
	Node n1, n2, n3, * t;
	n1.data = 1;             // can replace 1 with 'letter'
	n2.data = 2;
	n3.data = 3;
	n1.p_to_a_node = &n2;
	n2.p_to_a_node = &n3;
	n3.p_to_a_node = &n1;
	t = &n1;
	for (int i = 1; i <= 4; i++)
	{
		cout << t->data << " ";
		t = t->p_to_a_node;
	}
	return 0;
}*/

int* fun(int[], int);
int main()
{
	int A[5] = { 1, 2, 3, 4, 5 };
	cout << *fun(A, 5);
	return 0;
}

int* fun(int A[], int s)
{
	int B[5] = { 0, 0, 0, 0, 0 };
	for (int i = 0; i < s; i++)
	{
		B[i] = A[i];
	}
	return B;
}

