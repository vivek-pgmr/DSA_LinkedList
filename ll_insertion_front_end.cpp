#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

struct node *head;

/* 
Inserts a node in front of a singly linked list. 
*/
void insert_at_front(int data1){
	
	struct node *NewNode;
	NewNode=(struct node*) malloc(sizeof(struct node));
	
	NewNode->data=data1;
	NewNode->next=head;
	head=NewNode;
	
	cout<<"data inserted at front is : "<<data1<<endl;	
}
/* 
Inserts a node at end of a singly linked list. 
*/
void insert_at_end(int data2){
	
	struct node *NewNode,*temp;

	NewNode=(struct node*) malloc(sizeof(struct node));
	if(NewNode==NULL)
	cout<<"failed to allocate memory";
	
	NewNode->data=data2;
	NewNode->next=NULL;

	if(head==NULL)
	{
		head=NewNode;
	}	
	else
	{
		temp=(struct node *)head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		
		}	
		temp->next=NewNode;
	}
	
}

void print_ll(){

	while(head!=NULL)
	{
		cout<<head->data<<"=>";
		head=head->next;
	}
}
int main(){
	head=NULL;
	
	insert_at_front(10);
	insert_at_front(20);
	insert_at_front(30);

	print_ll();
	

	
	insert_at_end(40);
	insert_at_end(50);
	print_ll();
	return 0;
}
