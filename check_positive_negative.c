//check the number is positive or negative

#include <stdio.h>

int main(int argc,char* argv[])
{
    (void)argc;
    (void)argv;

    int l_val;

    printf("Enter a number:\n");
    scanf("%d",&l_val);
    if(0 < l_val)
    {
        printf("%d is Positive number.\n",l_val);
    }
    else if(0 > l_val)
    {
        printf("%d is Negative number.\n",l_val);
    }
    else
    {
        printf("The number is 0\n");
    }


    return 0;
}
