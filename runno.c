#include<stdio.h>

int runno(int);
int main()
{
int a;
printf("\nEnter the no. to find running no.\n");
scanf("%d",&a);
printf("\nRunning no. is %d\n",runno(a));
return 0;

}
runno(a)
{
if(a<=1)
{
	return a;
}
else 
return a+runno(a-1);
}
