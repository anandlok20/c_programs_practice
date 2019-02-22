#include<stdio.h>

int fib(int);

int main()
{

	int a,i;

	printf("\nEnter a value\n");
	scanf("%d",&a);
	if(a<0)
	{
		printf("Value can not be negative\n");
		return 0;
	}
	for(i=0;i<a;i++)
	{
		printf("%d  ",fib(i));
	}
	return 0;
}

int fib(int num)
{
	if(num==0)
	{
		return 0;
	}
	else if(num==1)
	{
		return 1;
	}
	else
	{
		return fib(num-1)+fib(num-2);
	}
}
