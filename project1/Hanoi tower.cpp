 #include<iostream>
 using namespace std;
 
 void hanoi(int n , char first , char second , char third)
 {
   	if(n==1)
   	{
   		cout<<"Move Dick "<<n<<" from "<<first<<" To "<<third<<endl ;
   		return ;
	}
	hanoi(n-1 , first , third , second);
	cout<<"Move Dick "<<n<<" from "<<first<<" To "<<third<<endl ;
	hanoi(n-1 , second , first , third );
 }
 
 int main()
 {
 	int n ;
 	cout<<"enter number of disks : ";
 	cin>>n;
 	hanoi(n,'Start','Middle Stage','End') ;
 }