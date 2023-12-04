#include<iostream>
using namespace std;

int main()
{
	
	int n , a , counter=1 ;
	
	
	cin>>n ;
	
	
	int arr[n][n];
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cin>>a ;
			arr[i][j]=a ;
			
		}
		
	}
	 
	
 int sprs[1000][3] ;
 
 
 	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			if(arr[i][j]!=0)
			{
				sprs[counter][0]=i+1 ;
				sprs[counter][1]=j+1 ;
				sprs[counter][2]=arr[i][j] ;
				counter++ ;
				
			}
			
		}
		
	}
		sprs[0][0]=n ;
		sprs[0][1]=n ;
		sprs[0][2]=counter-1 ;
	
    for(int i=0 ; i<=counter-1 ; i++)
	{
			cout<<endl<<sprs[i][0]<<"  "<<sprs[i][1]<<"  "<<sprs[i][2] ;
	}
	
	
}