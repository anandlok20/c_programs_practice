#include<stdio.h>

int sort(int[],int);

int main()
{
int a[10],i,n;
printf("\nEnter the length of an array.\n");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
sort(a,n);
return 0;
}

int sort(int a[],int n)
{
int i,temp=0;
for(i=0;i<n;i++)
{	for(int j=0;j<n;j++)
{
	if (a[j]>a[i])
	{
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
		
	}
	
}}

for(int i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
}

