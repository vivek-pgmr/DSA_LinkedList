#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};



void insert(node** ptrhead,int data,int n){

	struct node *temp,*temp1;
	temp=(struct node *) malloc(sizeof(node));
	temp->data=data;
	
	if(n==1){
		*ptrhead=temp;
		temp->next=NULL;
	}
	else{
		temp1=(struct node*) malloc(sizeof(node));
		temp1=*ptrhead;
		for(int i=1;i<n-1;i++){
			temp1=temp1->next;		
		}			
		temp->next=temp1->next;
		temp1->next=temp;
	}
	//return head;
}

void print_ll(node* head){

	while(head!=NULL)
	{
		cout<<head->data<<"=>";
		head=head->next;
	}
}
int main(){
	node* head=NULL;
	insert(&head,10,1);
	insert(&head,20,2);
	insert(&head,30,3);
	
	
	print_ll(head);
	return 0;
}
