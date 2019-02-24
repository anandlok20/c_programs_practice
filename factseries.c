#include<stdio.h>

int factseries(int);
int main()
{
int a;
printf("\n Enter the no. to find out factorial series\nupto that no.");
scanf("%d",&a);
for(int i=1;i<=a;i++)
{
printf("\n%d",factseries(i));
}
printf("\n-------------------------------------------\n");
return 0;
}
int factseries(int a)
{
if (a==0)
{
return 1;
}
else
return a*factseries(a-1);

}

