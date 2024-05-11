#include<iostream>
using namespace std;
void deletearr( int *arr, int&size ){
	int index=0;
	cout << "ENTER THE INDEX OF ELEMENT YOU WANT TO DELETE: ";
	cin >> index ;
	bool swap = false;
	for(int i=0;i<size;i++){
		if(i==index)
		{
		swap =true;	
		}
		
		if(swap)
		{
				*(arr+i)=*(arr+i+1);
		}
	}
	size--;
	cout << "NEW ARRAY: ";
	for(int i=0;i<size;i++){
		cout << *(arr+i);
	}
}
	void add(int *arr, int &size)
	{
		int element=0;
		int count=0;
		cout << "ENTER THE ELEMENT YOU WANT TO ADD: ";
		cin >> element;
		int *arr2=new int[size+1];
		for(int i=0;i<size;i++)
		{
			arr2[i]=arr[i];
		}
		
		*(arr2+size)=element;
		
			for(int i=0;i<=size;i++)
		{
			cout<<arr2[i]<<" ";
		}
		
		delete[]arr;
		arr=0;
		arr=arr2;
		arr2=0;
	}
	void resize(int *&arr, int &size)
	{
		cout << "ENTER THE SIZE: ";
		int size2=0;
		cin >> size2;
	int *arr2=new int[size2];
	
	for(int i=0;i<size;i++){
		*(arr2+i)=*(arr+i);
	}
		
		delete[]arr;
		arr=arr2;
		arr2=0;
		
		cout << "RESIZED ARRAY: ";
		for(int i=0;i<size2;i++){
			cout << arr[i] <<" "<< endl;
		}
		size=size2;
    }
	
	

int main()
{
	int *ptr=0;
	
	int size;
	
	cout << "ENTER THE SIZE OF THE ARRAY: " ;
	
	cin >> size;
	
	ptr=new int[size];
	
	for(int i=0;i<size;i++){
		
		cout << "ENTER VALUE " << endl;
		
		cin >> *(ptr+i);
		
	}
	cout << "REAL ARRAY: ";
	for(int i=0;i<size;i++){
		
		cout << *(ptr+i) << " ";
	}
	deletearr(ptr,size);
	add(ptr,size);
	resize(ptr,size);
}
