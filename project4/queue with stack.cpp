#include<iostream>
using namespace std;

int queue[10];
int top= -1 ;
int front=0 ;

void push(int object)
{
	if(top!=9)
	queue[++top]=object ;
	else
	cout<<"your queue is full" ;
}

int pop()
{
	return(queue[front++]) ;
}
void enqueue(int object)
{
	push(object);
}

int dequeue(void)
{
	int deletedItem;
	deletedItem=pop() ;
	for(int i=front ; i<=top ; i++)
	{
		queue[i-1]=queue[i] ;
	}
	front-=1;
	top-=1;
	return deletedItem ;
}

void ShowAll(int queue[])
{
	for(int i=front ; i<top+1 ; i++)
	{
		cout<<"queue "<<i+1<<" is : "<<queue[i]<<endl ;
	}
}


int main()
{
	enqueue(1) ;
	enqueue(2) ;
	enqueue(3) ;
	enqueue(4) ;
	enqueue(5) ;
	dequeue();
	dequeue();
	enqueue(6) ;
	enqueue(7) ;
	enqueue(8) ;
	enqueue(9) ;
	enqueue(10) ;
	
	
	ShowAll(queue);
}