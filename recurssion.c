#include<stdio.h>
int fun(int n)
{
	if(n<=0)
	return 0;
	printf("%d\n",n);
	fun(n-1);
	fun(n-2);
	printf("%d\n",n);
}
main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	fun(n);
}
