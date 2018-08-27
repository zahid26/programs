#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int Queue[5],front=-1, rare=-1;
void Enqueue()
{
	if(front==-1)
	{front++;rare++;
	}
	if(rare>4)
{
	printf("Queue is full"); return;
}
	else
	{
	printf("Enter data ");
	scanf("%d",&Queue[rare]);
	rare++;}
}
void Dequeue()
{
	if(front==-1)
	printf("queue is empty");
	else
{
	printf("element removed is %d",Queue[front]);
	++front;
}
if(rare=4)
{
	rare=(rare)%5;front=rare;
}
}

void view()
{ int i;
	if(front==-1)
	{
		printf("queue is empty \n");
	}
	else
	printf("queue  is ");
	{for(i=front;i<rare;i++)
	printf(" %d",Queue[i]);
	}
}
main()
{ int n;
	while(1)
	{
		printf("\nEnter 1 to insert \nEnter 2 to Remove \nEnter 3 to view \n");
		scanf("%d",&n);	
	switch(n)
	{
		case 1:Enqueue();
		break;
		case 2:Dequeue();
		break;
		case 3:view();
		break;
	}
}
}
