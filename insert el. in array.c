#include<stdio.h>
main()
{  int a[5],i,x,y;
	printf("enter the integer elements of Array \n");
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
		}
	printf("\n the Array you entered is \n");
	for(i=0;i<5;i++)
	{
	printf(" %d",a[i]);
	}
	printf("\n Enter the no. to insert \n");  // insertion by shifting elements of array
	scanf("%d",&x);
	printf("\n Enter the position where no. has to be inserted \n");
	scanf("%d",&y);y--;
	for(i=3;i>=y;i--)
	{
	a[i+1]=a[i];
		a[i]=x;
	}for(i=0;i<5;i++)
	printf("%d",a[i]);
}
