/*
Explore multidimensional arrays and create an application which can perform following mathematical operation for 2x2 and 3x3 matrices
	1) Addition
	2) Subtraction
	3) Multiplication
	4) Division
	5) Transpose
*/
#include<stdio.h>
#include<stdlib.h>

int l_select,l_firstMatrix[5][5],l_secondMatrix[5][5],l_rowLength,l_columnLength,l_i,l_j,l_k,l_tempMatrix1[5][5];;
	
void createMatrix(int l_tempMatrix[5][5],int l_rowLength,int l_columnLength);
void displayMatrix(int l_tempMatrix[5][5],int l_rowLength,int l_columnLength);
void addMatrix(int l_firstMatrix[5][5],int l_secondMatrix[5][5],int l_rowLength,int l_columnLength);
void subMatrix(int l_firstMatrix[5][5],int l_secondMatrix[5][5],int l_rowLength,int l_columnLength);
void mulMatrix(int l_firstMatrix[5][5],int l_secondMatrix[5][5],int l_rowLength,int l_columnLength);
void divMatrix(int l_firstMatrix[5][5],int l_secondMatrix[5][5],l_tempMatrix1[5][5],int l_rowLength,int l_columnLength);
void transMatrix(int l_firstMatrix[5][5],int l_rowLength,int l_columnLength);

int main()
{
	printf("Enter the size of Row and Column:\n");
	scanf("%d %d",&l_rowLength,&l_columnLength);
	if(l_rowLength!=l_columnLength)
	{
		printf("It's not a Square Matrix.\n");
		exit(0);
	}
	printf("Select from the below Matrix operation:\n1) Addition\n2) Subtraction\
	\n3) Multiplication\n4) Division\n5) Transpose\n6) Exit\n");
	scanf("%d",&l_select);
	switch(l_select)
	{
		case 1:
		{
			printf("Enter the 1st Matrix:\n");
			createMatrix(l_firstMatrix,l_rowLength,l_columnLength);
			displayMatrix(l_firstMatrix,l_rowLength,l_columnLength);
			printf("Enter the 2nd Matrix:\n");
			createMatrix(l_secondMatrix,l_rowLength,l_columnLength);
			displayMatrix(l_secondMatrix,l_rowLength,l_columnLength);
			addMatrix(l_firstMatrix,l_secondMatrix,l_rowLength,l_columnLength);
			break;
		}
		case 2:
		{
			printf("Enter the 1st Matrix:\n");
			createMatrix(l_firstMatrix,l_rowLength,l_columnLength);
			displayMatrix(l_firstMatrix,l_rowLength,l_columnLength);
			printf("Enter the 2nd Matrix:\n");
			createMatrix(l_secondMatrix,l_rowLength,l_columnLength);
			displayMatrix(l_secondMatrix,l_rowLength,l_columnLength);
			subMatrix(l_firstMatrix,l_secondMatrix,l_rowLength,l_columnLength);
			break;
		}
		case 3:
		{
			printf("Enter the 1st Matrix:\n");
			createMatrix(l_firstMatrix,l_rowLength,l_columnLength);
			displayMatrix(l_firstMatrix,l_rowLength,l_columnLength);
			printf("Enter the 2nd Matrix:\n");
			createMatrix(l_secondMatrix,l_rowLength,l_columnLength);
			displayMatrix(l_secondMatrix,l_rowLength,l_columnLength);
			mulMatrix(l_firstMatrix,l_secondMatrix,l_rowLength,l_columnLength);
			break;
		}
		case 4:
		{
			printf("Enter the 1st Matrix:\n");
			createMatrix(l_firstMatrix,l_rowLength,l_columnLength);
			displayMatrix(l_firstMatrix,l_rowLength,l_columnLength);
			printf("Enter the 2nd Matrix:\n");
			createMatrix(l_secondMatrix,l_rowLength,l_columnLength);
			displayMatrix(l_secondMatrix,l_rowLength,l_columnLength);
			divMatrix(l_firstMatrix,l_secondMatrix,l_tempMatrix1,l_rowLength,l_columnLength);
			break;
		}
		case 5:
		{
			printf("Enter the Matrix:\n");
			createMatrix(l_firstMatrix,l_rowLength,l_columnLength);
			displayMatrix(l_firstMatrix,l_rowLength,l_columnLength);
			transMatrix(l_firstMatrix,l_rowLength,l_columnLength);
			break;
		}
		case 6:
		{
			printf("Exiting....!!\n");
			exit(0);
		}
		default:
		{
			printf("Invalid Input.\n");
			break;
		}
	}		
	return 0;
}

void createMatrix(int l_tempMatrix[5][5],int l_rowLength,int l_columnLength)
{
	for(l_i=0;l_i<l_rowLength;l_i++)
	{
		for(l_j=0;l_j<l_columnLength;l_j++)
		{
			scanf("%d",&l_tempMatrix[l_i][l_j]);
		}
	}
}

void displayMatrix(int l_tempMatrix[5][5],int l_rowLength,int l_columnLength)
{
	for(l_i=0;l_i<l_rowLength;l_i++)
	{
		for(l_j=0;l_j<l_columnLength;l_j++)
		{
			printf(" %d ",l_tempMatrix[l_i][l_j]);
		}
		printf("\n");
	}
}

void addMatrix(int l_firstMatrix[5][5],int l_secondMatrix[5][5],int l_rowLength,int l_columnLength)
{
	int l_tempMatrix[5][5];
	for(l_i=0;l_i<l_rowLength;l_i++)
	{
		for(l_j=0;l_j<l_columnLength;l_j++)
		{
			l_tempMatrix[l_i][l_j]=l_firstMatrix[l_i][l_j]+l_secondMatrix[l_i][l_j];
		}
	}
	printf("The sum of the Matrix:\n");
	displayMatrix(l_tempMatrix,l_rowLength,l_columnLength);
}

void subMatrix(int l_firstMatrix[5][5],int l_secondMatrix[5][5],int l_rowLength,int l_columnLength)
{
	int l_tempMatrix[5][5];
	for(l_i=0;l_i<l_rowLength;l_i++)
	{
		for(l_j=0;l_j<l_columnLength;l_j++)
		{
			l_tempMatrix[l_i][l_j]=l_firstMatrix[l_i][l_j]-l_secondMatrix[l_i][l_j];
		}
	}
	printf("The diffrence of the Matrix:\n");
	displayMatrix(l_tempMatrix,l_rowLength,l_columnLength);
}

void mulMatrix(int l_firstMatrix[5][5],int l_secondMatrix[5][5],int l_rowLength,int l_columnLength)
{
	int l_result[5][5];
	for (l_i=0;l_i<l_rowLength;l_i++)
    {
        for (l_j=0;l_j<l_columnLength;l_j++)
        {
            l_result[l_i][l_j]=0;
            for (l_k=0;l_k<l_columnLength;l_k++)
			{
				l_result[l_i][l_j] +=l_firstMatrix[l_i][l_k]*l_secondMatrix[l_k][l_j];
			}   
        }
    }
	printf("The product of the Matrix:\n");
	displayMatrix(l_result,l_rowLength,l_columnLength);
}

void divMatrix(int l_firstMatrix[5][5],int l_secondMatrix[5][5],int l_tempMatrix1[5][5],int l_rowLength,int l_columnLength)
{
	int l_result[5][5];
	transMatrix(l_secondMatrix,l_rowLength,l_columnLength);
	mulMatrix(l_firstMatrix,);
	printf("The division of the Matrix:\n",l_tempMatrix);
	displayMatrix(l_result,l_rowLength,l_columnLength);
}

void transMatrix(int l_firstMatrix[5][5],int l_rowLength,int l_columnLength)
{
	for(l_i=0;l_i<l_rowLength;l_i++)
	{
		for(l_j=0;l_j<l_columnLength;l_j++)
		{
			l_tempMatrix[l_i][l_j]=l_firstMatrix[l_j][l_i];
		}
	}
	printf("The Transpose of the Matrix:\n");
	displayMatrix(l_tempMatrix,l_rowLength,l_columnLength);
}
