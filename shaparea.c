#include<stdio.h>

void carea();
void rarea();
void sarea();

 int main()
{
int ch;
while(1)
{
printf("\nEnter your choice:\n1.Circle\n2.Rectangle\n3.Square\n4.Exit\n");
scanf("%d",&ch);
switch(ch)
{
	case 1:
		carea();
		break;
	case 2:
		rarea();
		break;
	case 3:
		sarea();
		break;
	case 4:return 0;
	default: printf("Invalid Option\n");
}
}
}

void carea()
{
int r;
float res;
printf("Enter the radius of circle\n");
scanf("%d",&r);
res=2*3.14*r;
printf("Area is: %.2f",res);
}

void rarea()
{
int l,b,res;
printf("Enter the length and breadth of rectangle\n");
scanf("%d %d",&l,&b);
res=l*b;
printf("Area is: %d",res);
}

void sarea()
{
int l,b,res;
printf("Enter the side length of square\n");
scanf("%d",&l);
res=l*l;
printf("Area is: %d",res);
}

