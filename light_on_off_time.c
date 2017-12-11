/*
Q10. Implement a module to switch on the lights when it turns dark and off in the morning. Based on the current time entered by user in hhmm format,
 display the status of light to the user. 0600 to 1900 is day. 1901 to 0559 is night.*/
#include<stdio.h>

int main()
{
    int l_Hour, l_Minute;
    printf("Enter the time in Hour\n");
    scanf("%d",&l_Hour);
    printf("Enter the time in Minute\n");
    scanf("%d",&l_Minute);
    if(((0<=l_Hour)&&(l_Hour<=23)) &&((0<=l_Minute)&&(l_Minute<=59)))
    {
            if(((06<=l_Hour)&&(l_Hour<=16))&&((00<=l_Minute)&&(l_Minute<=59)))
            {
                 printf("Light is OFF\n");
            }
            else
            {
                printf("Light is ON\n");
            }
     }
    else
    {
        printf("Enter the time in correct format\n");
       }
    return 0;
}



