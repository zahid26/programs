#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
   struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*head1=NULL;
void create()
{ struct node *ptr,*tail=NULL,*ptr1,*tail1=NULL;char v1, v;
printf("enter the elements of list-1\n");
	do
{
	ptr=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
{
	head=ptr;tail=ptr;
	head->next=NULL;
}	
else
{
	tail->next=ptr;
	tail=ptr;tail->next=NULL;
}
	printf("enter data=");
	scanf("%d",&tail->data);
	 printf("press y for othe node or other key  to stop\n");
 	v=getch();
	}
while(v=='y');
	printf("\nenter the elements of list-2\n");
	do
{
	ptr1=(struct node*)malloc(sizeof(struct node));
	if(head1==NULL)
{
	head1=ptr1;tail1=ptr1;
	head1->next=NULL;
}	
else
{
	tail1->next=ptr1;
	tail1=ptr1;tail1->next=NULL;
}
	printf("enter data=");
	scanf("%d",&tail1->data);
	 printf("press y for othe node or other key  to stop\n");
 	v1=getch();
	}
while(v1=='y');
}

void concat()
{
struct node *a,*b,*c;
a=head;b=head;
	while(a->next!=NULL)
	{
	a=a->next;
}
a->next=head1;

	while(b!=NULL)
	{
		printf("%d",b->data);
		b=b->next;
	}
}
main()
{
 create();
concat();

}

