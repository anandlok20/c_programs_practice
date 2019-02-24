#include <stdio.h>

void mul2(int);
int main()
{

        int n;
        printf("\nEnter the no. of elements you want: ");
        scanf("%d",&n);
        mul2(n);
        return 0;
}
void mul2(int n)
{       int a[20] ;
        
        printf("\n Enter the elements\n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
	printf("\n------------------------\nAfter multiplication by 2\n");
        for(int i=0;i<n;i++)
        {
               
      	       printf("%d\n",2*a[i]);
	}

}

