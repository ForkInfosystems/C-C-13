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
            int i = 0,Cnt = 0;

            struct  Student Stud[Std_Count];

            printf("\n Accepting Student Details => \n");

            for(i = 0,Cnt = 1; i < Std_Count; i++, Cnt++)
            {
                            if(Cnt % 10 == 4 || Cnt % 10 == 5 ||Cnt % 10 == 6 ||Cnt % 10 == 7 ||Cnt % 10 == 8 ||Cnt % 10 == 9||Cnt % 10 == 0 || Cnt == 11 ||Cnt == 12 ||Cnt == 13)
                            {
                                                printf("\n Enter %dth Student Details => ", Cnt);
                                                printf("\n Enter Roll No : %d",i+101);

                                                printf("\n Enter Name : ");
                                                scanf(" %[^\n]",&Stud[i].Name);
                                                fflush(stdin);

                                                printf("\n Enter City : ");
                                                scanf(" %[^\n]",&Stud[i].City);
                                                fflush(stdin);

                                                printf("\n Enter Percentage : ");
                                                scanf("%f",&Stud[i].Per);

                                                printf("\n*********************$$$$$*********************\n");
                            }
                            else if(Cnt % 10 == 1)
                            {
                                                printf("\n Enter %dst Student Details => ", Cnt);
                                                printf("\n Enter Roll No : %d",i+101);

                                                printf("\n Enter Name : ");
                                                scanf(" %[^\n]",&Stud[i].Name);
                                                fflush(stdin);

                                                printf("\n Enter City : ");
                                                scanf(" %[^\n]",&Stud[i].City);
                                                fflush(stdin);

                                                printf("\n Enter Percentage : ");
                                                scanf("%f",&Stud[i].Per);

                                                printf("\n*********************$$$$$*********************\n");
                            }
                            else if(Cnt % 10 == 2)
                            {
                                                printf("\n Enter %dnd Student Details => ", Cnt);
                                                printf("\n Enter Roll No : %d",i+101);

                                                printf("\n Enter Name : ");
                                                scanf(" %[^\n]",&Stud[i].Name);
                                                fflush(stdin);

                                                printf("\n Enter City : ");
                                                scanf(" %[^\n]",&Stud[i].City);
                                                fflush(stdin);

                                                printf("\n Enter Percentage : ");
                                                scanf("%f",&Stud[i].Per);

                                                printf("\n*********************$$$$$*********************\n");
                            }
                            else if(Cnt % 10 == 3)
                            {
                                                printf("\n Enter %drd Student Details => ", Cnt);
                                                printf("\n Enter Roll No : %d",i+101);

                                                printf("\n Enter Name : ");
                                                scanf(" %[^\n]",&Stud[i].Name);
                                                fflush(stdin);

                                                printf("\n Enter City : ");
                                                scanf(" %[^\n]",&Stud[i].City);
                                                fflush(stdin);

                                                printf("\n Enter Percentage : ");
                                                scanf("%f",&Stud[i].Per);

                                                printf("\n*********************$$$$$*********************\n");
                            }
            }
            system("cls");
            printf("\n Displaying Student Details => \n");

            for(i = 0, Cnt = 1; i < Std_Count; i++,Cnt++)
            {
                             if(Cnt % 10 == 4 || Cnt % 10 == 5 ||Cnt % 10 == 6 ||Cnt % 10 == 7 ||Cnt % 10 == 8 ||Cnt % 10 == 9||Cnt % 10 == 0 || Cnt == 11 ||Cnt == 12 ||Cnt == 13)
                            {
                                                printf("\n %dth Student Details Given are => \n\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f.\n",i+101,Stud[i].Name,Stud[i].City,Stud[i].Per);
                            }
                            else if(Cnt % 10 == 1)
                            {
                                                printf("\n %dst Student Details Given are => \n\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f.\n",i+101,Stud[i].Name,Stud[i].City,Stud[i].Per);
                            }
                            else if(Cnt % 10 == 2)
                            {
                                                printf("\n %dnd Student Details Given are => \n\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f.\n",i+101,Stud[i].Name,Stud[i].City,Stud[i].Per);
                            }
                            else if(Cnt % 10 == 3)
                            {
                                                printf("\n %drd Student Details Given are => \n\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f.\n",i+101,Stud[i].Name,Stud[i].City,Stud[i].Per);
                            }
            }
            getch();
            return 0;
}
