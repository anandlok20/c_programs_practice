/*
Q6. Create a database management application which can store following data about a student
		1. Name of the student
		2. Date of birth in DD/MM/YYYY format
		3. Current Course
		4. Roll number
		5. Day of Enrollment in DD/MM/YYYY
		
	Consider that college has a capacity of hundred students. Database admin should be able to add and delete entries in the database,
	input for deletion is student's roll no. Also it should be possible to print all the entries in the database in a single tabular 
	format and also query information of a student based on his roll number.
	
	Tabular format example -
	
	Name			DOB			Current Course 		Roll Number			Enrollment Date
	----			---			--------------		-----------			---------------
	Admin		19/9/1978			DBMS				AD01X1				14/5/2013
	
	Application must support modification of existing information of the student.
*/
#include<stdio.h>

void main()
{
	struct student
	{
		char sName[20];
		int bDate;
		int bMonth;
		int bYear;
		char currentCourse[20];
		int rollNo;
		int eDate;
		int eMonth;
		int eYear;		
	};
	
	struct student cStudent[100];
	
	int l_menuSelect,i=0;
	
	do
	{
		printf("****Student Database Management System****\n*:Select From The Below Menu:*\n1.Add Student Data\n2.Delete Student Data\n3.Search Student Data\n4.Show Student Data\n5.Exit\n");
		scanf("%d",&l_menuSelect);
		switch(l_menuSelect)
		{
			case 1:
			{
				printf("Enter the Student Detail\n");
				printf("Student Name:\n");
				scanf("%s",cStudent[i].sName);
				printf("Birth Date:\n");scanf("%d",&cStudent[i].bDate);
				printf("Birth Month:\n");scanf("%d",&cStudent[i].bMonth);
				printf("Birth Year:\n");scanf("%d",&cStudent[i].bYear);
				printf("Current Course:\n");scanf("%s",cStudent[i].currentCourse);
				printf("Roll No:\n");scanf("%d",&cStudent[i].rollNo);
				printf("Enrolment Date:\n");scanf("%d",&cStudent[i].eDate);
				printf("Enrolment Month:\n");scanf("%d",&cStudent[i].eMonth);
				printf("Enrolment Year:\n");scanf("%d",&cStudent[i].eYear);
				i++;
				break;
			}
			case 2:
			{
				int temp,h,flag=0;
				printf("Enter the Roll Number of the student:\n");
				scanf("%d",&temp);
				for(h=0;h<i;h++)
				{
					if(temp==cStudent[h].rollNo)
					{
						flag=1;
						printf("The %d Roll No Student %s Record is has been Deleted!!\n",temp,cStudent[h].sName);
						break;
					}
				}
				if(flag==0)
				{
					printf("Record Not Found with Roll No %d.\n",temp);
				}
				else
				{
					for(;h<i;h++)
					{
						cStudent[h]=cStudent[h+1];
					}
					i--;
				}
				break;
			}
			case 3:
			{
				int stemp,h,flag=0;
				printf("Enter the Roll Number of the student:\n");
				scanf("%d",&stemp);
				for(h=0;h<i;h++)
				{
					if(stemp==cStudent[h].rollNo)
					{
						flag=1;
						printf("The %d Roll No Student %s Record is has been Deleted!!\n",stemp,cStudent[h].sName);
						break;
					}
				}
				if(flag==0)
				{
					printf("Record Not Found with Roll No %d.\n",stemp);
				}
				else
				{
					printf("Student Name\tDate of Birth\tCurrent Course:\tRoll No:\tDate of Enrolment\t\n");
					printf("%s\t%d:/%d/%d\t%s\t%d\t%d/%d/%d\n",cStudent[h].sName,cStudent[h].bDate,cStudent[h].bMonth,cStudent[h].bYear,cStudent[h].currentCourse,cStudent[h].rollNo,cStudent[h].eDate,cStudent[h].eMonth,cStudent[h].eYear);
				}
				break;
			}
			case 4:
			{
				printf("Enter the Student Detail\n");
				printf("Student Name\tDate of Birth\tCurrent Course:\tRoll No:\tDate of Enrolment\t\n");
				for(int j=0;j<i;j++)
				{
					printf("%s\t%d:/%d/%d\t%s\t%d\t%d/%d/%d\n",cStudent[j].sName,cStudent[j].bDate,cStudent[j].bMonth,cStudent[j].bYear,cStudent[j].currentCourse,cStudent[j].rollNo,cStudent[j].eDate,cStudent[j].eMonth,cStudent[j].eYear);
				}
				break;
			}
			case 5: 
			{
				printf("Exiting....!!\n");
				exit(0);
			}
			default:
			{
				printf("Invalid Option Selection.!!\n");
				break;
			}
		}	
	} while(l_menuSelect<=6);
}