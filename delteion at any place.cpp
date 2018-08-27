#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
		int data;
		node *next;
};
struct node *head=NULL;
void create()
{
	char o;
	struct node * tail=NULL,*ptr;
	do{
			ptr=(node*)malloc(sizeof(node));
		if(head==NULL)
		{
			head=ptr;tail=ptr;
		}
		else
		{
			tail->next=ptr;
			tail=ptr;
			tail->next=NULL;
		}
			printf("enter no\n");
	 		scanf("%d",&ptr->data);
			printf("press y for next node\n");
			o=getch();
	}
	while(o=='y');
}
void display(node * temp)
{
		printf("the list is\n");
   	while(temp!=NULL)
{
		printf("%d",temp->data);
		temp=temp->next;
	}	
}
void delete1( node *p)
{
		int i=1,loc;
		node* u,*v,*y,*pre;
		y=p;
		printf("\nenter the node location to delete=");
		scanf("%d",&loc);
	if(loc==1)
	{
		p=p->next;
	while(p!=NULL)
		{
		printf("%d",p->data);
		p=p->next;
		}
	
	}
	else
	{
		for(i=1;i<loc;i++)
	{
		pre=p;
		p=p->next;
	}
 		pre->next=p->next;	printf("list after deletion is=");
	while(y!=NULL)
	{
		printf("%d",y->data);
		y=y->next;
	} 
	}
		free(p);
}
main()
{
	create();
	display(head);
	delete1(head);
	
	
	
}
