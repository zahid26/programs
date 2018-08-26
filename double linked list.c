#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *prev,*next;
};
struct node *start;
struct node *temp;
struct node* create()
{
	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	return(ptr);
}
void insert()
{
	temp=create();
	printf("Enter info\n");
	scanf("%d",&temp->info);
	temp->prev=NULL;
	temp->next=NULL;
	if(start==NULL)
		start=temp;
	else
	{
		start->prev=temp;
		temp->next=start;
		start=temp;
	}
}
void delete()
{
	struct node *r;
	if(start==NULL)
	printf("List is Empty!\n");	
	else
	{
		r=start;
		start=start->next;
		start->prev=NULL;
		free(r);
	}
}
void view_list()
{
	struct node *t,*p;
	if(start==NULL)
	printf("List is Empty!\n");
	else
	{
		printf("tracing from end node\n");
		t=start;
		while(t!=NULL)
		{
			printf("%d\n",t->info);
			p=t;
			t=t->next;
		}
		printf("tracing from front node\n");
		while(p!=NULL)
		{
			printf("%d\n",p->info);
			p=p->prev;
		}
	}
	getch();
}
int menu()
{
	int choice;
	printf("\n...DOUBLY LINKED LIST...\n\n");
	printf("1. Insert node.\n");
	printf("2. Delete node.\n");
	printf("3. View list.\n");
	printf("4. Exit.\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	return (choice);
}
main()
{
	while(1)
	{	
		system("cls");
		switch(menu())
		{
			case 1:
				insert();
				break;
				case 2:
					delete();
					break;
					case 3:
						view_list();
						break;
						case 4:
							exit (0);
							break;
							default:
								printf("\nInvalid choice.\n");
								break;								
		}
	}
}
