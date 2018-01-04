//C Program to Accept two Integers and Check if they are Equal

#include <stdio.h>

int main(int argc,char* argv[])
{
    (void)argc;
    (void)argv;

    printf("Enter the 1st integer:\n");
    int l_val1,l_val2;
    scanf("%d",&l_val1);
    printf("Enter the 2nd integer:\n");
    scanf("%d",&l_val2);
    if(l_val1 > l_val2)
    {
        printf("%d is greater than %d\n",l_val1,l_val2);
    }
    else if(l_val1 < l_val2)
    {
        printf("%d is greater than %d\n",l_val2,l_val1);
    }
    else
    {
        printf("%d isequal to %d\n",l_val2,l_val1);
    }

    return 0;
}
