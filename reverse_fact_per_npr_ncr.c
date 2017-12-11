/*
One of your friend who is a maths teacher, wants an application that can calculate
	a) Factorial
	b) Permutations
	c) Number of permutations possible
	d) Combinations
	e) Number of combinations possible
	
	So that he can verify the answers provided by students quickly. NOTE: Solve this using recursion
	Also print the operations performed in proper format, for example
	
	Factorial of number n! = n(n-1)(n-2)(n-3)...(n - (n-1))
	Permutations for n things taken r at time = n!/(n-r)! => display the above factorial notation for n! and (n-r)! with a division separator or 	with  ----------
	Do the same for other parts of the question
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int factorial(unsigned int l_var);
void permute(char *l_a, int l_l, int l_r);
void swap(char *x,char *y);
long npr( int l_n,int l_r);
int ncr( int l_n,int l_r);

int main()
{
	int l_select;
	do{
		printf("Select from the below operation:\n1) Factorial\n2) Permutations\
		\n3) Number of permutations possible\n4) Combinations\n5) Number of combinations possible\n6) Exit\n");
		scanf("%d",&l_select);
		switch(l_select)
		{
			case 1:
			{
				int l_var;
				printf("Enter the value for finding the factorial:\n");
				scanf("%d",&l_var);
				printf("Factorial of %d is %d\n", l_var, factorial(l_var));
				break;
			}
			case 2:
			{
				int l_n,l_r;
				printf("Enter value of n & r: \n");
				scanf("%d %d",&l_n,&l_r);
				if( l_n>= l_r)
				{
					printf("%d! -> %d\n", l_n, factorial(l_n));
					printf("%d! -> %d\n", l_r, factorial(l_r));
					printf("The Permutation of %dP%d  is %ld\n", l_n,l_r,npr(l_n,l_r));
				}
				else
				{
					printf("Wrong Input!!\n");
				}
				break;
			}
			case 3:
			{
				char l_str[10];
				printf("Enter a string:\n");
				scanf("%s",l_str);
				printf("The Permutations are:\n");
				int l_n = strlen(l_str);
				permute(l_str, 0, l_n-1);	
				break;			
			}
			case 4:
			{
				int l_n,l_r;
				printf("Enter the values of n & r:\n");
				scanf("%d %d",&l_n,&l_r);
				if(l_n>=l_r)
				{
					printf("%d! -> %d\n", l_n, factorial(l_n));
					printf("%d! -> %d\n", l_r, factorial(l_r));
					printf("The Combinations of %dC%d is %d\n", l_n,l_r,ncr(l_n,l_r));
				}
				else
				{
					printf("Wrong Input!!\n");
				}
				break;
			}
			case 5:
			{
				char l_str[10];
				printf("Enter a string:\n");
				scanf("%s",l_str);
				printf("The Combinations are:\n");
				int l_n = strlen(l_str);
				permute(l_str, 0, l_n-1);	
				break;					
			}
			case 6:
			{
				printf("Exiting....!!\n");
				exit(0);
			}
			default:
			{
				printf("Invalid Input.\n");
				break;
			}
		}		
	}while(l_select<=7);
	return 0;
}

int factorial(unsigned int l_var) {

   if(l_var <= 1) 
   {
		//printf("%d\n",l_var);
		return 1;
   }
   //printf("%d x ",l_var);
   return l_var * factorial(l_var - 1);
}

void permute(char *l_a, int l_l, int l_r)
{
	int l_i;
	if (l_l == l_r)
	{
	   printf("%s\n", l_a);
	}
	else
	{
		for (l_i = l_l; l_i <= l_r; l_i++)
		{
			swap((l_a+l_l), (l_a+l_i));
			permute(l_a, l_l+1, l_r);
			swap((l_a+l_l), (l_a+l_i));
		}
	}
}

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int ncr( int l_n, int l_r)
{
	return( factorial(l_n) / (factorial(l_r) * factorial(l_n-l_r))) ;
}

long npr( int l_n , int l_r)
{
	return( factorial(l_n) / factorial(l_n-l_r));
}