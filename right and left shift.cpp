#include<stdio.h>
main()
{
	int i,a[5],temp;
	printf("Enter the elements of array for right shift\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);temp=a[4];
	}
	printf("Array before right shift= ");
for(i=0;i<5;i++)
{printf("%d ",a[i]);
}
for(i=4;i>=0;i--)
{
a[i+1]=a[i];
}a[0]=temp;
printf("\nArray after  right shift= ");
for(i=0;i<5;i++)
printf("%d ",a[i]);
printf("\n");
	printf("Enter the elements of array for left shift \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);temp=a[0];
	}
	printf("Array before left shift=");
for(i=0;i<5;i++)
{printf("%d ",a[i]);
}
for(i=1;i<5;i++)
{
a[i-1]=a[i];
}a[4]=temp;
printf("\nArray after  left shift=");
for(i=0;i<5;i++)
printf("%d ",a[i]);



	
}


	

