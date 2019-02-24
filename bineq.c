#include<stdio.h>

int bineq(int);
int main()

{
int a;
printf("\nEnter the number to find binary equivalent\n");
scanf("%d",&a);
int c=bineq(a);
printf("\nBinary equivalent is %d\n",c );
return 0;
}

int bineq(int a){
int n;
if(a==0)
{
n=0;

}
else 
{
return (a%2+10*bineq(a/2));

}
}
