#include<iostream>
using namespace std;
int modifyFunction(int* a){
	if(*a%2==0){
		*a=(*a)*2;
	}
	else{
		*a++;
	}
	return *a;
}







int main()
{
	int a=10;
	cout << "BEFORE MODIFY: " << a << endl;
//	int *ptr=&a;
//	cout << "ADDRESS OF INTEGER VARIABLE: " << ptr << endl;
//	cout << "VALUE OF INTEGER VARIABLE: " << *ptr << endl;
	int modify=modifyFunction(&a);
	cout << "MODIFY VALUE: " << modify << endl;
	return 0;
}
