#include <stdio.h>

int main(int argc,char* argv[])
{
    (void)argc;
    (void)argv;

    long l_num, l_remainder, l_base = 1, l_binary = 0;

    printf("Enter a decimal integer:\n");
    scanf("%ld", &l_num);

    while (l_num > 0)
    {
        l_remainder = l_num % 2;
        l_binary = l_binary + l_remainder * l_base;
        l_num = l_num / 2;
        l_base = l_base * 10;
    }

    printf("Binary number: %ld\n", l_binary);

    return 0;
}
