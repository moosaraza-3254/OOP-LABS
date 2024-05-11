#include<iostream>
using namespace std;
int main()
{
	const int a=10;
	int const*ptr=&a;
	*ptr=12;
}
