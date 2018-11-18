#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};



node* insert(node* head,int data,int n){

	struct node *temp,*temp1;
	temp=(struct node *) malloc(sizeof(node));
	temp->data=data;
	
	if(n==1){
		head=temp;
		temp->next=NULL;
	}
	else{
		temp1=(struct node*) malloc(sizeof(node));
		temp1=head;
		for(int i=1;i<n-1;i++){
			temp1=temp1->next;		
		}			
		temp->next=temp1->next;
		temp1->next=temp;
	}
	return head;
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
	head=insert(head,10,1);
	head=insert(head,20,2);
	head=insert(head,30,3);
	
	
	print_ll(head);
	return 0;
}
