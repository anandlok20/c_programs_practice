/*
Q11. A civil engineer who lays tiles whenever called by customers, takes the measurements of the house and provides estimate. As he is a very good 
engineer, he gets a lot of orders in a day.One day, he meets his classmate and tells about his business. Although he is happy with his 
many customer visits, he mentions that he finds it always difficult to use calculator do provide estimates.His friend offers him help and tells
 him that he will develop a small C program to ease his task. The civil engineer provides the below requirements
a.	He wants to enter measurements that he takes of the house. The houses can have floor shapes of Rectangle, triangle or circle. Based on the shape,
 he wants to calculate the area.
b.	He wants to select the kind of tiles
-	Mosaic		- 100 Rs. Per sq. ft.
-	Vitrified tiles	- 200 Rs. Per sq. ft.
-	Marble		- 400 Rs. Per sq. ft.
-	Granite		- 300 Rs. Per sq. ft.
c.	Based on the tiles selection and the measurements corresponding to the shape of the floor, he wants the overall cost estimate to be displayed
Write the C program his friend would have written and provided to him.
Make appropriate assumptions, if any required details are missing.*/
#include<stdio.h>
int main()
{
    //This problem will be solved easier using function. But i am not using function because sir has not covered function in class
    int l_Shape,l_Tiles,l_TotalCost;
    printf("Enter the Shape of House\n Type 1 For Rectangle\n Type 2 For Triangle\n Type 3 for Circle\n\n");
    scanf("%d",&l_Shape);
    switch(1)
    {
        case 1 : printf("The Shape of the House is Rectangle\n");
                 printf("Enter the length and breadth of Rectangle\n");
                 int l_Length,l_Breadth;
                 scanf("%d %d",&l_Length,&l_Breadth);
                 int Area_of_Rectangle=l_Length*l_Breadth;
                 printf("Enter the Type of Tiles\n Type 1 for Mosaic\n Type 2 For Virtified Tiles\n Type 3 For Marble \n Type 4For Graphite\n\n");
                 scanf("%d",&l_Tiles);
                 if(l_Tiles==1)
                 {   
                    l_TotalCost=Area_of_Rectangle*100;
                 }
                 else if(l_Tiles==2)
                 {
                     l_TotalCost=Area_of_Rectangle*200;
                 }
                 else if(l_Tiles==3)
                 {
                     l_TotalCost=Area_of_Rectangle*400;
                 }
                 else if(l_Tiles==4)
                 {
                     l_TotalCost=Area_of_Rectangle*300;
                 }
                 else
                 {
                     printf("Enter the Correct value of Tile\n");
                 }
                 break;

        case 2 : printf("The Shape of the House is Triangle\n");
                 printf("Enter the Height and Base of Triangle\n");
                 int l_Height,l_Base;
                 int Area_of_Triangle=(l_Height*l_Base)/2;
                 printf("Enter the Type of Tiles\n Type 1 for Mosaic\n Type 2 For Virtified Tiles\n Type 3 For Marble \n Type 4For Graphite\n\n");
                 scanf("%d",&l_Tiles);
                 if(l_Tiles==1)
                 {   
                    l_TotalCost=Area_of_Triangle*100;
                 }
                 else if(l_Tiles==2)
                 {
                     l_TotalCost=Area_of_Triangle*200;
                 }
                 else if(l_Tiles==3)
                 {
                     l_TotalCost=Area_of_Triangle*400;
                 }
                 else if(l_Tiles==4)
                 {
                     l_TotalCost=Area_of_Triangle*300;
                 }
                 else
                 {
                     printf("Enter the Correct value of Tile\n");
                 }
                  break;
        case 3 : printf("The Shape of the House is Circle\n");
                 printf("Enter the radius of Circle\n");
                 int l_radius;
                 scanf("%d",&l_radius);
                 printf("Enter the Type of Tiles\n Type 1 for Mosaic\n Type 2 For Virtified Tiles\n Type 3 For Marble \n Type 4For Graphite\n\n");
                 scanf("%d",&l_Tiles);
                 int Area_of_Circle=3.14*l_radius*l_radius;
                 if(l_Tiles==1)
                 {   
                    l_TotalCost=Area_of_Circle*100;
                 }
                 else if(l_Tiles==2)
                 {
                     l_TotalCost=Area_of_Circle*200;
                 }
                 else if(l_Tiles==3)
                 {
                     l_TotalCost=Area_of_Circle*400;
                 }
                 else if(l_Tiles==4)
                 {
                     l_TotalCost=Area_of_Circle*300;
                 }
                 else
                 {
                     printf("Enter the Correct value of Tile\n");
                 }
                    break;
        default :printf("Enter the correct values for House Shape\n");
         }
    printf("Total Price Customer Have to Pay is %d",l_TotalCost);
    return 0;
}
