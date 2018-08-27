#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* left,*right;
};
struct node *root=NULL,*temp,*temp1,*ptr;char o;
void create()
{

do{

	ptr=(struct node*)malloc(sizeof(struct node));
	printf("enter data "); scanf("%d",&ptr->data);
	if(root==NULL)
	{
	root=ptr; temp=ptr;
	temp1=ptr; }
	else
	{
	if(ptr->data<root->data)
	{
	if (ptr->data<temp->data)
	{
	temp->left=ptr;
	temp=ptr;
	ptr->left=NULL;ptr->right=NULL;
			}
		
	else
			{
	temp->right=ptr;
	temp=ptr;
	ptr->left=NULL;ptr->right=NULL;
		}
		}
	else
		{
	if (ptr->data>=temp1->data)
  { temp1->right=ptr;
	temp1=ptr;
	ptr->left=NULL;ptr->right=NULL;
	
			}

	else
	{temp1->left=ptr;
	temp1=ptr;
	ptr->left=NULL;ptr->right=NULL;	
		}
		}
		}
	printf("enter y to con.\n");
	o=getch();
	}
   while(o=='y');
}
void display(struct node* p)
{  if(p==root)
   printf("the tree is  ");
   if(p)
 { printf(" %d",p->data);
   display(p->left);	
   display(p->right);
	}
	return;
}
void search(struct node* m)
{ int q;
	printf("enter to find ");
    scanf("%d",&q);
	if(q==m->data)
	printf("element found  %d",m->data);

    else
{ 
	while(m!=NULL)
	{
	if(q<m->data)
	m=m->left;      
	if(q>m->data)
	m=m->right;
	else
	{
	if(m->data==q)
	printf("The element %d is present in tree ",m->data);
	else
	printf("data %d not found in tree",q);
	break;
}
		}
	}
}
	
void insert(struct node* o)
{ 
	struct node*in,*u,*v;
	in=(struct node*)malloc(sizeof(struct node));
	printf("\nenter node you want to insert ");
	scanf("%d",&in->data);
	while(o!=NULL)
{ 
	if(in->data<o->data)
   { 
   u=o; o=o->left;  
	 }  
   else if(in->data>=o->data)
{
   u=o; o=o->right;	
}
}

  if(u->data<in->data)
{
  u->right=in;
  in->left=NULL;in->right=NULL;
  printf("the node inserted is %d ",in->data) ;}
  else
  {
  u->left=in;in->left=NULL;in->right=NULL;
  printf("the node inserted is %d ",in->data) ;
}
}	
	
	
int main()
{
	
	printf("\n .............................. MENU FOR Binary Search Tree.....................................\n\n");
	int i;
	while(1)
	{
	printf("\nEnter 1 to create\nEnter 2 to display\nEnter 3 to search\nEnter 4 to insert")	;	
	scanf("%d",&i);
	switch(i)
	{
	case 1:create();
	break;
	case 2:display(root);
	break;
	case 3:search(root);
	break;
	case 4:insert(root);	
	//case 5:quit();
}
}
}
