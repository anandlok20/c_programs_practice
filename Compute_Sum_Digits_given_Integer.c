//C Program to Compute the Sum of Digits in a given Integer

#include <stdio.h>

int main(int argc,char* argv[])
{
    (void)argc;
    (void)argv;

    int l_elements[10],l_n,l_result=0;

    printf("Enter the no of element you want to enter:\n");
    scanf("%d",&l_n);
    printf("Enter the elements:\n");
    for(int l_index=0;l_index<l_n;l_index++)
    {
        scanf("%d",&l_elements[l_index]);
        l_result += l_elements[l_index];
    }
    printf("The Result is: %d\n",l_result);

    return 0;
}
