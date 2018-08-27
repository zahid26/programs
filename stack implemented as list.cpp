#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct stack
{
	int data;
	struct stack *next;
};
struct stack *head=NULL,*tail=NULL,*prev,*z,*p;
void push()
{struct stack *ptr;char o;
		ptr=(struct stack*)malloc(sizeof(struct stack));
		if(head==NULL)
		{
			tail=ptr;
			head=ptr;
			head->next=NULL;
	
		}
		else 
		{
			prev=tail;
		    ptr->next=tail;
	    	tail=ptr;	
	    	z=p=tail;
		}
	     	printf("enter data=");
	    	scanf("%d",&tail->data);
	
}
void pop()
{

	
if(head==NULL||p==NULL)
       printf("Stack is Empty \n");
else 
{ 
     printf("node poped is %d",p->data);
   //p=p->next;
	}  free(tail);
     z=p;
}
	
void view()
{
	
	
if(head==NULL||NULL)
     printf("stack is Empty\n");	
else 
{

	printf("the stack is\n");
while(z!=NULL)
   {
    printf("%d ",z->data);
    z=z->next;

}
}
}
main()
{ int item;

while(1)
{
	printf("\nenter 1 to push...\nEnter 2 to pop....\nEnter 3 to view...\n");
	scanf("%d",&item);
switch(item)
{
	case 1:push();
	break;
    case 2:pop();
    break;
    case 3:view();
}

}
}

