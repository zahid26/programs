#include<stdio.h>
main()
{int a[5],*p,i;
printf("enter array\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
p=a;
printf("the array is");
for(i=0;i<5;i++)
{
printf(" %d",*p);
p++;
}
}
