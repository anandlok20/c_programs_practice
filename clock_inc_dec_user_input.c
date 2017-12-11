/*Q1. Create a terminal based clock which provides a menu to update (increment/decrement as per user input), seconds, minutes, hours,
 time in 24hrs/12hrs format and exit. Once time is updated, display the time in 24hours format or 12 hours format based on the current
 format selected by user. Default format is 12hrs format, and default time when the application starts should be 00:00 Hrs, repeat this by 
 showing the menu again. Exit the application when the user selects exit option in the menu.
 */
 //Author - Dhruv Prakash
 //only using switch and while
#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
    {
        int l_Hours=00, l_Minute=00,l_Seconds=00;
        printf("Select 1 for Increment\n Select 2 for Display\n Select 3 for Exit\n\n");
        printf("Enter Your Choice\n");
        int l_Choice;
        scanf("%d",&l_Choice);
        switch(l_Choice)
        {
            case 1 :printf("Select 1 for Hour\t Select 2 for Minute\t Select 3 for Second\n\n");
                    printf("Enter Your Choice\n");
                    int l_Choice2;
                    scanf("%d",&l_Choice2);
                switch(l_Choice2)
                {
                    case 1:l_Hours+=1;
                           while(l_Hours>23)
                           {
                               l_Hours-=23;
                           }
                           break;
                    case 2:l_Minute+=1;
                           while(l_Minute>59)
                           {
                               l_Minute-=59;
                               l_Hours++;
                               while(l_Hours>23)
                               {
                                   l_Hours-=23;
                               }
                           }
                           break;
                    case 3:l_Seconds+=1;
                           while(l_Seconds>59)
                           {
                               l_Seconds-=59;
                               l_Minute++;
                               while(l_Minute>59)
                               {
                                   l_Minute-=59;
                                   l_Hours++;
                                   while(l_Hours>23)
                                   {
                                       l_Hours-=23;
                                   }
                               }
                           }
                           break;
                    default : printf("invalid Option\n");
                              exit(0);
                }          
            case 2 : printf("The Time is %d:%d:%d\n",l_Hours,l_Minute,l_Seconds);
                     break;
            case 3 : exit(0);
            default : printf("Invalid Input\n");

        }
    }
    return 0;
}
