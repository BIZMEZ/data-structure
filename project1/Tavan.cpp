#include<iostream>
using namespace std;

int Tavan(int a, int b)
{
  if(b==0)
  { 
     return 1;
   }
   else
   {
   	return Tavan(a,b-1)*a ;
	   }	
}

int main()
{
	 int a , b;
  	cin>>a>>b;
 	cout<<Tavan(a,b);
}