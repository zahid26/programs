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
		if(tail==NULL)
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

void display() 
{node * temp;
temp=head;
	printf("the list is\n");
	while(temp!=NULL)
{
	printf("%d",temp->data);
	temp=temp->next;
	}	
}

void search()
{node *xy;
xy=head;
	int temp,count=0;
	printf("\nEnter the no. to find=");
	scanf("%d",&temp);	
	
	
	while(xy!=NULL)
	{
	if(xy->data==temp)
	{	
	    xy=xy->next;
	++count;
		printf("\nelement found in node %d",count);

		}
	else 
	{	xy=xy->next;
		++count;
		//printf("\nelement not found in node %d",count);	
		}
	}
}

main()
{
	create();
	display();
	search();
}

