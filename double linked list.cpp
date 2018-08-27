#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct doubl
{
	int data;
	struct doubl *next,*prev;
};
struct doubl *head=NULL,*tail;
void create()
{
struct doubl*ptr;char o;int n=1;
printf("Enter the elements of list\n");

do
{
ptr=(struct doubl *)malloc(sizeof(struct doubl));
if(head==NULL)
{
	head=ptr;tail=ptr;
	head->prev=NULL;
}
else
{
	tail->next=ptr;
	ptr->prev=tail;
	tail=ptr;
	tail->next=NULL;
}
printf("Enter data of node%d=",n);scanf("%d",&ptr->data);
printf("press y to continue\n");
o=getch();
n++;
}
while(o=='y');

}
void display()
{
	struct doubl *temp;
	temp=head;
	printf("the list is\n");
	while(temp!=NULL)
	{
		printf(" %d",temp->data);
		temp=temp->next;
	}
	printf("\nthe reverse list is\n");
	while(tail!=NULL)
	{
		printf(" %d",tail->data);
		tail=tail->prev;
	}
	
	
}
main()
{
	create();
	display();
}



