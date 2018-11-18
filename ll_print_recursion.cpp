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

void print_fwd(node* ptrhead){
	if(ptrhead==NULL)
	{	
		return;
	}
	
	cout<<ptrhead->data<<"=>";
	ptrhead=ptrhead->next;
	print_fwd(ptrhead);
	return;
}
void print_rev(node* ptrhead){
	if(ptrhead==NULL)
	{	
		return;
	}
	
	
	
	print_rev(ptrhead->next);
	cout<<ptrhead->data<<"=>";
	return;

}
int main(){
	struct node* head=NULL;
	insert(&head,10,1);
	insert(&head,20,2);
	insert(&head,30,3);
	print_fwd(head);
	cout<<"\n";
	print_rev(head);
	return 0;

}
