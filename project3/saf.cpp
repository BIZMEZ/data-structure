#include<iostream>
using namespace std;

int saf[10] ;
int front=0 ;
int rear=0 ;
	
	
bool isempty()
{
	if(front==rear)
	    return true;
	else
	    return false;
}

bool isfull()
{
	if(rear-front==9)
	return true;
	else
	return false;
}

void enqueue(int object)
{
	if(rear!=10)
	saf[rear++]=object;
	else
	cout<<"queue is full" ;
}

int dequeue(void)
{
	int a=saf[front] ;
	
	for(int i=front+1 ; i<=rear ; i++)
	{
		saf[i]=saf[i-1] ;
	}
	return a;
}

int peek(void)
{
	return (saf[front]) ;
}

void reversequeue()
{
	int temp;
    for(int i=0 ; i<(rear/2) ; i++)
    {
	    temp=saf[front+i] ;
    	saf[front+i]=saf[rear-i] ;
    	saf[rear-i]=temp ;
    }	
}