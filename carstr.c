#include<stdio.h>

int main()
{
int n,i;
char c[50];

printf("\n Enter the Length of the characters:\n");
scanf("%d",&n);
getchar();

printf("Enter the characters:\n");
for(i=0;i<n;i++)
{
scanf("%c",&c[i]);
getchar();
}
c[n]='\0';
printf("%s",c);

return 0;
}
