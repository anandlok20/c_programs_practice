//To check the no is even or odd
//even no has remainder 0 and odd as remainder 1

#include <stdio.h>

void f_check_even_odd(int f_val)
{
    if(f_val % 2 ==0)
    {
        printf("%d is an EVEN Integer.\n",f_val);
    }
    else
    {
        printf("%d is a ODD Integer.\n",f_val);
    }
}

int main(int argc,char* argv[])
{
    (void)argc;
    (void)argv;

    int l_val;
    printf("Enter the integer:\n");
    scanf("%d",&l_val);
//    if(l_val % 2 ==0)
//    {
//        printf("%d is an EVEN Integer.\n",l_val);
//    }
//    else
//    {
//        printf("%d is a ODD Integer.\n",l_val);
//    }

    //using function
    f_check_even_odd(l_val);

    return 0;
}
