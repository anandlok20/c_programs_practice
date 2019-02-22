#include<stdio.h>
#include<math.h>

void check(int,int,int);
void froot(int,int,int);

int main()
{

	int a,b,c;

	printf("\nEnter the value a, b and c of the equation(ax^2+bx+c=0)\n");
	scanf("%d%d%d",&a,&b,&c);

	check(a,b,c);

	return 0;
}

void check(int a,int b,int c)
{
	int x;

	x=(b*b)-(4*a*c);
	printf("%d",x);
	if(x>0)
	{
		printf("\nTwo Roots\n");
		froot(a,b,x);
	}
	else if(x<0)
	{
		printf("\nNo Roots\n");
	}
	else
	{
		printf("\nEqual Roots\n");
		froot(a,b,x);
	}
}

void froot(int a,int b,int x)
{
	float r1=0,r2=0;

	r1=((-b)+sqrt(x))/(2*a);
	r2=((-b)-sqrt(x))/(2*a);
	printf("%.2f\n%.2f",r1,r2);

}
