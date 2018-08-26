#include<stdio.h>
#include<stdlib.h>
#define size 10
int queue[size];
int front= -1,rear= -1;
int enque()
{
	if(front==-1)
	{
		front++;
		rear++;
	}
	else
	{
		if(rear<size-1)
		{
			rear++;
		}
		else
		{
			printf("Overflow!!!");
			getch();
			return(0);
		}
	}
	printf("Enter info\n");
	scanf("%d",&queue[rear]);
	printf("Element ENQUED...");
	getch();
}
void deque()
{
	if(front>-1 && front<size)
	{
		front++;
		printf("Element DEQUED...");
	}
	else
	{
		printf("Queue is Empty!");
	}
	getch();
}
void view_queue()
{
	int temp=front;
	if(front==-1 || temp==size)
	printf("Queue is Empty!");
	else
	{
		printf("The stored Queue is\n");
		while(temp!=size)
		{
			printf("-> %d",queue[temp]);
			temp++;
		}
	}
	getch();
}
int menu()
{
	int choice;
	printf("\n...QUEUE (Array Implementation)...\n\n");
	printf("1. Enque Element.\n");
	printf("2. Deque Element.\n");
	printf("3. View Queue.\n");
	printf("4. Exit.\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	return (choice);
}
main()
{
	while(1)
	{system("cls");
		switch(menu())
		{
			case 1:
				enque();
				break;
				case 2:
					deque();
					break;
					case 3:
						view_queue();
						break;
						case 4:
							exit (0);
							break;
							default:
								printf("\nInvalid choice.\n");
								getch();
		}
	}
}
