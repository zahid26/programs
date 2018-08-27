#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
 void create()
 {
 	node *ptr,*tail=NULL,*res;char o;
do{
 ptr=(struct node *)malloc(sizeof(struct node));
	if(head==NULL)
{
 head=ptr;
	tail=ptr;
	}
	else
	{tail->next=ptr;	tail=ptr;
	 tail->next=NULL;
	}
 	printf("enter no\n");
	 scanf("%d",&ptr->data);
	 printf("press y for other node or other key  to stop\n");
 	o=getch();
	}
	while(o=='y');
	
	}
	void display()
	{
		
		struct node  *temp;
		temp=head;
		printf("the list is\n");
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->next;
			
		}
	}

main()
{  

create();
display();
}



