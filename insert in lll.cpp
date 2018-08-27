#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct doubl
{
	int data;
	struct doubl *next;
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

}
else
{
	tail->next=ptr;
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
		printf("%d",temp->data);
		temp=temp->next;
	}
	
}
void insert()
{ int a,i=0;
struct doubl *prev,*p,*q,*o;
q=head;o=head;
	printf("enter the position at which to add node\n");
	scanf("%d",&a);
	p=(struct doubl*)malloc(sizeof(doubl));
	printf("enter value\n");
	scanf("%d",&p->data);
	for(i=1;i<a;i++)
	{
		prev=q;
		q=q->next;
	
	}
		p->next=q;
		prev->next=p;
	while(o!=NULL)
	{
		printf("%d",o->data);
		o=o->next;
	}
	
}
main()
{
	create();
	display();
	insert();
	
}











