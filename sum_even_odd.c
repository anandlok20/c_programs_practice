//calculate the sum of odd and even no

#include <stdio.h>

int main(int argc,char* argv[])
{
    (void)argc;
    (void)argv;

    int l_a,l_b,l_even=0,l_odd=0;
    printf("Enter the range:\n");
    scanf("%d%d",&l_a,&l_b);
    printf("The numbers in the range are:\n");
    for(int l_index = l_a ; l_index <= l_b ; l_index++)
    {
        printf("%d ",l_index);
        if(l_index % 2 == 0)
        {
            l_even += l_index;
        }
        else
        {
            l_odd += l_index;
        }
    }
    printf("\nThe sum of even number : %d\nThe sum of odd number : %d\n",l_even,l_odd);

    return 0;
}
