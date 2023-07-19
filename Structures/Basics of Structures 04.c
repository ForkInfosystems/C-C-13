#include<stdio.h>
#include<conio.h>
#define Std_Count  3

struct Student
{
            int RollNo;
            char Name[12];
            char City[8];
            float Per;
};

int main( )
{
            int i = 0;

            struct    Student    Stud[Std_Count];

            printf("\n Accepting Student Details => \n");

            for(i = 0; i <= (Std_Count - 1) ; i++)                          ///  Accepting Student Details
            {
                            printf("\n Enter %d Student Details => ", i + 1);
                            printf("\n Enter Roll No :");
                            scanf("%d",& Stud[i].RollNo);

                            printf("\n Enter Name:");
                            scanf(" %[^\n]",&Stud[i].Name);
                            fflush(stdin);

                            printf("\n Enter City :");
                            scanf(" %[^\n]",&Stud[i].City);
                            fflush(stdin);

                            printf("\n Enter Percentage :");
                            scanf("%f",&Stud[i].Per);

                            printf("\n*********************$$$$$*********************\n");
            }

            printf("\n Displaying Student Details => \n");

            for(i = 0; i < Std_Count; i++)                          /// Displaying Student Details
            {
                            printf("\n %d Student Details Given are => \n\n\t Roll No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f.\n",i + 1,Stud[i].RollNo,Stud[i].Name,Stud[i] .City,Stud[i].Per);
            }

            getch();
            return 0;
}
