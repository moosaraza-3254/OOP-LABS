#include<iostream>
using namespace std;
int main()
{
	int a=20;
	int b=10;
	int *ptr1=&a;
	int *ptr2=&b;
	int sum=*ptr1+*ptr2;
	int subtraction=*ptr1-*ptr2;
	cout << "SUM= " << sum << endl;
	cout << "SUBTRACTION= " << subtraction << endl;
	return 0;
	
}
