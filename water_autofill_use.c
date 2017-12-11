/*
Q9. A software module records the water contained in a tank. With every usage of water (entered by user in litres) by a house, it displays the water level after usage.
It displays the below message always.
CURRENT WATER LEVEL : xyz litres
Enter the Current Usage : <takes input from user>
When the Current water level goes below 25 litres, it refills the tank automatically and sets the Current Water Level to 1000 litres.
Can you write a program for this?
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    float l_cwl=1000 , l_cu;
    int l_a;

    do
    {
        printf("Enter your selection:\n1.Water Usage\n2.Exit\n ");
        scanf("%d",&l_a);
        switch(l_a)
        {
            case 1:
                {
                    if(l_cwl>25)
                    {
                        printf("\nThe Current Water Level-> %f",l_cwl);
                        printf("\nEnter the current usages:");
                        scanf("%f",&l_cu);
                        l_cwl=l_cwl-l_cu;
                        printf("\nThe Current Water Level -> %f\n",l_cwl);
                        break;
                    }
                    else
                    {
                        l_cwl=1000;
                        printf("The current water level is less than 25..... It's Refilling.\n");
                        break;
                    }
                }
            case 2:
                {
                    printf("Exiting...\n");
                    exit(0);
                    break;
                }
            default:
                {
                    printf("Invalid Input!!");
                    break;
                }
        }
    }while(l_a<=2);
}
