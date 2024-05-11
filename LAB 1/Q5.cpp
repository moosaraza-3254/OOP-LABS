#include<iostream>
using namespace std;
int main()
{
	int *a=new int;
	*a=30;
	cout << "ADDRESS OF a= " << a << endl;
	cout << "ADDRESS OF a= " << *a << endl;
	delete a;
	return 0;
}
