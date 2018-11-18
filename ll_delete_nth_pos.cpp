#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

struct node *head;

void insert(int data,int n){

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
}

void delete_(int n){

	struct node *temp,*temp1;
	//temp=(struct node *) malloc(sizeof(node));
	temp1=(struct node *) malloc(sizeof(node));
	temp=head;
	if(n==1)
	{
		head=temp->next;
		free(temp);
		return;
	}
	else{	
		for(int i=0;i<n-2;i++){
			temp=temp->next;	
		}
		//temp now points to (n-1)th position
		temp1=temp->next;
		temp->next=temp1->next;
		free(temp1);
		return;
		//print_ll();
	}

}
//Always use temp in print function
void print_ll(){
struct node *temp;//*temp1;
	
	  temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"=>";
		temp=temp->next;
	}
	cout<<"\n";
}
int main(){
	head=NULL;
	insert(10,1);
	insert(20,2);
	insert(30,3);
	insert(200,2);
	insert(500,5);
	
	
	print_ll();
	delete_(1);
	print_ll();
	return 0;
}
