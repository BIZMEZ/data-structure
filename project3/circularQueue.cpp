#include<iostream>
using namespace std;

int circularQueue[10] ;
int front=0 ;
int rear=-1 ;
	
class queue{ 
	public :
		
	bool isempty()
{
	if(rear==front)
	    return true;
	else
	    return false;
}

bool isfull()
{
	if( front==(rear+2)%10 )
	return true;
	else
	return false;
}

void enqueue(int object)
{
	if(!isfull())
	circularQueue[(++rear)%10]=object;
	else
	queue() ;
	
}

int dequeue(void)
{
	return (circularQueue[(front++)%10]) ;
}

int peek(void)
{
	return (circularQueue[front]) ;
}

void reversequeue()
{
	int temp;
    for(int i=0 ; i<(rear/2) ; i++)
    {
	    temp=circularQueue[front+i] ;
    	circularQueue[front+i]=circularQueue[rear-i] ;
    	circularQueue[rear-i]=temp ;
    }	
}
void ShowAll(int queue[])
{
	for(int i=0 ; i<10 ; i++)
	{
		cout<<"saf "<<i<<" is : "<<circularQueue[i]<<endl ;
	}
}

	
	};	

int main()
{
	queue ob1 ;
	
	ob1.enqueue(1) ;
	ob1.enqueue(2) ;
	ob1.enqueue(3) ;
	ob1.enqueue(4) ;
	ob1.enqueue(5) ;
	ob1.enqueue(6) ;
	ob1.enqueue(7) ;
	ob1.enqueue(8) ;
	ob1.enqueue(9) ;
	ob1.enqueue(10) ;
	
	
	ob1.ShowAll(circularQueue) ;
}