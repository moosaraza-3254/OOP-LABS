#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *ptr=&a;//DECLARING A POINTER VARIABLE
	cout << "ADDRESS OF a= " << ptr << endl;//FOR PRINTING ADRESS
	cout << "VALUE OF a= " << *ptr << endl;//DEREFRENCING THE POINTER 
	return 0;
}
