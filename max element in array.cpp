#include<stdio.h>
main()
{
	int i,A[5],max,min;
	printf("enter the no.s of array \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&A[i]);
		max=A[0];min=A[0];
	}
	for(i=1;i<5;i++)
	{
		if(A[i]>max)
		max=A[i];
		if(A[i]<min)
		min=A[i];
	}
	printf("max is %d",max);
	printf("\n min is %d",min);
}
