#include<stdio.h>

// program to calculate sum of 4 digit no

void fsum(int);
int rsum(int);

int main()
{

	int num,ch,res;


	printf("\nEnter the 4 digit number\n");
	scanf("%d",&num);

	printf("\nEnter the choice:\n1.Using Loop\n2.Using recursion\n");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1 :fsum(num); 
			break;
		case 2 :res=rsum(num); 
				printf("%d\n",res);
			break;
		default:
			printf("\n Please select choice 1 or 2\n");
	}


	return 0;
}

void fsum(int num)
{
	int a,i,b=0,count=0;
	while(num!=0)
    {
        a=num%10;
        b=b+a;
        num=num/10;
        count++;
    }
    if(count==4)
    {
        printf("%d\n",b);
    }
    else
        printf("\nPlease select only 4 digit value\n");
}

int rsum(int num)
{
	static int a=0;
	int x;
	if(num!=0)
	{
		x=num%10;
		a=a+x;
		rsum(num/10);
	}
	return a;

//	return a=a+rsum(num/10)%10;
}
