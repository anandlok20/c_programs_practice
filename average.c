#include <stdio.h>

void avg(int);
int main()
{

	int n;
	printf("\nEnter the no. of elements you want: ");
	scanf("%d",&n);
	avg(n);
	return 0;
}
void avg(int n)
{	int a[20];
	float b;
	printf("\n Enter the elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
        {
                b=b+a[i];
        }
	b=b/n;
	printf("\nAverage of %d numbers is  %.2f\n",n,b);
	 
}
