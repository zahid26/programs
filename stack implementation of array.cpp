#include<stdio.h>
#include<stdlib.h>
int i,stack[5],top=-1;
void push()
{ 
int item;	++top;
if(top!=5)
{

	printf("enter element to push\n");
	scanf("%d",&item);
	stack[top]=item;	
}
else 
    printf("stack full");
}
	int pop()
	{
	
	printf("element poped is %d",stack[top--]);
	}
	void view()
	{ 
	if(top==-1)
	printf("stack is empty\n");
	else
	{printf("the stack is  ");
		for(i=top;i>=0;i--)
	printf("%d ",stack[i]);
	}
	
}
main()
{   int temp;
   while(1)
	{
	printf("\nEnter 1 to push\nEnter 2 to pop \nEnter 3 to view\n");
	scanf("%d",&temp);

	switch(temp)
	{
		case 1:push();
		break;
		case 2:pop();
		break;
		case 3:view();
		break;
;	}
	
}
}

