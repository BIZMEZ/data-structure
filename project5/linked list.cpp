#include <iostream>
 
using namespace std;
 
//Declare node 
struct Node{
    int num;
    Node *link;
};
 
//Starting (Head) node
Node *head=NULL;
 
//Insert node at start
void insert_Node(int n)
{
    Node *new_node=new Node;
    new_node->num=n;
    new_node->link=NULL;
    
    if(head!=NULL)
    {
	
    	Node *temp = head;
   		 while(temp->link!=NULL){
     	   temp=temp->link;
   		 }
    
    	temp->link=new_node;
    }
    else
    	head=new_node;
    
    //new_node->link=head;
    
}
 
//Display all nodes
void display_all_nodes(){
	cout<<"The list contains the data entered:\n";
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->num<<" ";
        temp=temp->link;
    }
    cout<<endl;
}
 
int main(){
    insert_Node(1);
    insert_Node(3);
    insert_Node(5);
    insert_Node(7);
    insert_Node(9);
    insert_Node(11);
    display_all_nodes();
    return 0;
}
