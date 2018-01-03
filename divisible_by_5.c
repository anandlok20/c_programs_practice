// divisible by 5

#include <stdio.h>

int main(int argc,char* argv[])
{
    (void)argc;
    (void)argv;

    int l_a,l_b;
    printf("Enter the range:\n");
    scanf("%d%d",&l_a,&l_b);
    printf("The numbers divisible by 5 in the range are:\n");
    for(int l_index = l_a ; l_index <= l_b ; l_index++)
    {
        if(l_index % 5 == 0)
        {
            printf("%d/5 = %d\n",l_index,(l_index/5));
        }
//        else
//        {
//            printf("%d is not divisible by 5.\n",l_index);
//        }
    }

    return 0;
}
