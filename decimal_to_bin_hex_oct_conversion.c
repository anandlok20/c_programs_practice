#include<stdio.h>
FILE *FP=NULL;
void main()
{
     int CH,NUM;
     void octal(int);
     void binary(int);
     void hexa(int);
     clrscr();
     printf("ENTER DECIMAL NUMBER TO BE CONVERTED : \n");
     scanf("%d",&NUM);
     printf("\nSELECT CONVERSION");
     printf("\n 1. DECIMAL TO BINARY\n");
     printf("\n 2. DECIMAL TO OCTAL\n");
     printf("\n 3. DECIMAL TO HEXADECIMAL\n");
     printf("\nENTER CHOICE HERE :");
     scanf("%d",&CH);
     switch(CH)
     {
       case 1 : binary(NUM);
        printf("\nOUPUT WRITTEN TO OUTPUT.TXT");
        break;
       case 2 : octal(NUM);
        printf("\nOUPUT WRITTEN TO OUTPUT.TXT");
        break;
       case 3 : hexa(NUM);
        printf("\nOUPUT WRITTEN TO OUTPUT.TXT");
        break;
       default :   printf("\nYOU HAVE ENTERED WRONG CHOICE !!!");
}

  getch();
}
void hexa(int Y)
{
     char HEXC[5];
     int NUM,I,LEN,HEXD[5];
     NUM=Y;
     LEN=0;
     while(Y>0)
     {
    HEXD[LEN]=Y%16;
    Y=Y/16;
    LEN++;
     };
     for(I=LEN-1;I>-1;I--)
     {
    if(HEXD[I]<10)
       HEXC[I]=HEXD[I]+48;
    else
       HEXC[I]=HEXD[I]+55;
     }
     if((FP=fopen("output.txt","a+t"))==NULL)
     {
    printf("FILE CAN'T BE OPENED OR CREATED\n");
    exit(0);
     }
     fprintf(FP,"\nCONVERTED BINARY EQUIVALENT VALUE OF %d IS \t",NUM);
     for(I=LEN-1;I>-1;I--)
     {
    fprintf(FP,"%c",HEXC[I]);
     }

}
void binary(int Y)
{
     int NUM,I,LEN,BIN[20];
     NUM=Y;
     LEN=0;
     while(Y>0)
     {
    BIN[LEN]=Y%2;
    Y=Y/2;
    LEN++;
     };
     if((FP=fopen("output.txt","a+t"))==NULL)
     {
    printf("FILE CAN'T BE OPENED OR CREATED\n");
    exit(0);
     }
     fprintf(FP,"\nCONVERTED BINARY EQUIVALENT VALUE OF %d IS \t",NUM);
     for(I=LEN-1;I>-1;I--)
     {
    fprintf(FP,"%d",BIN[I]);
     }

}
void octal(int Y)
{
     int NUM,I,LEN,OCT[5];
     NUM=Y;
     LEN=0;
     while(Y>0)
     {
    OCT[LEN]=Y%8;
    Y=Y/8;
    LEN++;
     };
     if((FP=fopen("output.txt","a+t"))==NULL)
     {
    printf("FILE CAN'T BE OPENED OR CREATED\n");
    exit(0);
     }
     fprintf(FP,"\nCONVERTED OCTAL EQUIVALENT VALUE OF %d IS \t",NUM);
     for(I=LEN-1;I>-1;I--)
     {
    fprintf(FP,"%d",OCT[I]);
     }
}