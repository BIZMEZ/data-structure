#include<iostream>
using namespace std;

int Tarkib(int r , int n)
{
	if(r==0 || r==n)
	 return 1;
	 
	if(r==(n-1) || r==1)
	  return n ;
	  
	  return ( Tarkib(r-1 , n-1) + Tarkib(r , n-1) ); 
}


int main()
{
	int r , n ;

	cout<<endl<<"enter r: " ;
	cin>>r;
	cout<<endl<<"enter n: " ;
	cin>>n ;
	cout<<endl<<endl<<"C("<<n<<","<<r<<") = " ;
	cout<<Tarkib(r,n) ;

}