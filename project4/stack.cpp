#include<iostream>
using namespace std;

int satck[10];
int top= -1;

void push(int object)
{
	if(top!=9)
	stack[++top]=object ;
	else
	cout<<"your stack is full" ;
}

int pop()
{
	return(stack[top--]) ;
}

peek()
{
	return(stack[top]) ;
}

bool isempty()
{
	if(top==(-1))
	return true;
	else
	return false ;
}