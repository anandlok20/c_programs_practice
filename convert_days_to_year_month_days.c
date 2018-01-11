//C Program to Convert a Given Number of Days in terms of Years, Weeks & Days

#include <stdio.h>

int main()
{
    unsigned int l_year,l_month,l_days,l_days_input;

    printf("Enter the no of Days:\n");
    scanf("%u",&l_days_input);

    l_year = l_days_input / 365;
    int l_temp = l_days_input % 365;
    l_month = l_temp / 30;
    l_days = l_days_input - ((l_month * 30)+(l_year * 365));

    printf("year -> %u month -> %u days -> %u\n",l_year,l_month,l_days);
    return 0;
}
