#include <stdio.h>

int main()
{
    int l_a,l_b,l_temp;
    printf("Enter two number(m and n) to swap\n");
    scanf("%d %d",&l_a,&l_b);
    l_temp=l_a;
    l_a=l_b;
    l_b=l_temp;
    printf("m = %d\tn = %d\n",l_a,l_b);

    return 0;
}
