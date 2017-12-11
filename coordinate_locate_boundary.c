//Q8. A module is required to be developed which when given a x,y coordinate checks if it lies inside a rectangular area
//covered by coordinates A(10,10) and B(100,100). Can you write a small module for this.

#include<stdio.h>

void main()
{
	int l_x, l_y;
	printf("Enter the coordinate -> ");
	scanf("%d %d",&l_x,&l_y);
	if(l_x>10 && l_x<100 && l_y>10 && l_y<100)
	{
		printf("coordinate point (%d,%d) is inside the rectangular area.",l_x,l_y);
	}
	else
	{
		printf("coordinate point (%d,%d) is outside the rectangular area.",l_x,l_y);
	}
}