#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

struct node* insert(node* ptrhead,int data,int n){

	struct node *temp,*temp1;
	temp=(struct node *) malloc(sizeof(node));
	temp->data=data;
	
	if(n==1){
		ptrhead=temp;
		temp->next=NULL;
	}
	else{
		temp1=(struct node*) malloc(sizeof(node));
		temp1=ptrhead;
		for(int i=1;i<n-1;i++){
			temp1=temp1->next;		
		}			
		temp->next=temp1->next;
		temp1->next=temp;
	}
	return ptrhead;
}

struct node* reverse(node* ptrhead){
	struct node *curr,*prev,*next;
	prev=NULL;
	curr=ptrhead;
	while(curr!=NULL){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	ptrhead=prev;

return ptrhead;
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


int main(){
	struct node* head=NULL;
	head=insert(head,10,1);
	head=insert(head,20,2);
	head=insert(head,30,3);
	print_fwd(head);
	head=reverse(head);
	cout<<"\n";
	print_fwd(head);
	return 0;

}
