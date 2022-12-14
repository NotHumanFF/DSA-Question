
#include<stdio.h>
#include<stdlib.h>

typedef struct nodetype{
	int info;
	struct nodetype *next;
	
	}node;

void insertatbeg(node**start,int item){
	node*ptr;
	ptr=(node*)malloc(sizeof(node));
	ptr->info = item;
	ptr->next=*start;
	*start=ptr;
}

void insertatend(node**start,int item)
{
	node *ptr,*last;
	ptr=(node*)malloc(sizeof(node));
	ptr->info=item;
	ptr->next=NULL;
	
	if(*start==NULL)
		*start=ptr;
		
	else
	{
	last=*start;
	while(last->next!=NULL)
		last=last->next;
	last->next=ptr;
	}
}



void displayinrev(node *start){
	if(start->next!=NULL)
		displayinrev(start->next);
		
	printf("%d ->",start->info);
	
}

void deleteatbeg(node**start){
	node*ptr;
	if(*start==NULL){
		printf("\n LL is Empty");
		return;
	}
	ptr=*start;
	*start=ptr->next;
	printf("\n Deleted Value = %d",ptr->info);
	free(ptr);
}

void deleteatend(node**start){
	node *ptr;
	node *last;
	if(*start==NULL){
		printf("\n LL is Empty");
		return;
	}
	
	if((*start)->next==NULL){
		ptr=*start;
		*start=ptr->next;
	}
	
	else{
		last=*start;
		while(last->next->next!=NULL)
			last=last->next;
		ptr=last->next;
		last->next=NULL;
		
	}
	
	printf("\n Deleted Value= %d",ptr->info);
	free(ptr);
	
}

void displayinrev(node *start){
	if(start->next!=NULL)
		displayinrev(start->next);
		
	printf("%d ->",start->info);
	
}
