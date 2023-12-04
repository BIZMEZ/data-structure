#include<iostream>
using namespace std;

int arr[5] ;
	
void insert(int object , int index)
{
	arr[index]=object ;
}

int find(int object)
{
	for(int i=0 ; i<5 ; i++)
	{
		if(arr[i]==object)
		{
		return i;
		}
		else
		{
			return -999999 ;
		}
    }
}

int deletee(int index)
{
	int a ;
	a=arr[index] ;
	arr[index]=0 ;
	return a;
}

int main()
{
	for(int i=0 ; i<4 ; i++)
	cin>>arr[i] ;
	
	insert(2,4);
	cout<<find(9);
	cout<<endl ;
	cout<<find(8);
	cout<<endl ;
	cout<<deletee(4);
	cout<<endl ;
	cout<<find(4);
}