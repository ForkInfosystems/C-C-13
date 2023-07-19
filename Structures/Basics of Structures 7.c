#include<stdio.h>
#include<conio.h>
#include<string.h>

#define Size 15

struct student
{
            int RollNo;
            char Name[12];
            char City[8];
            float Per;
};

int main( )
{
            int i = 0;
            struct  student std[Size];

            // Accept Details of 3 Students

            for(i = 0; i < Size; i++)
            {
                    printf("\n Enter Roll No :");
                    scanf("%d",&std[i].RollNo);

                    fflush(stdin);

                    printf("\n Enter Name:");
                    scanf("%[^\n]",&std[i].Name);
                    fflush(stdin);

                    printf("\n Enter City :");
                    scanf("%[^\n]",&std[i].City);
                    fflush(stdin);

                    printf("\n Enter Percentage :");
                    scanf("%f",&std[i].Per);
            }

            for(i = 0; i < Size; i++)
            {
                    printf("\n %d Student Details Given are => \n\n\t Roll No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f.\n",i+1, std[i].RollNo,std[i].Name,std[i].City,std[i].Per);
            }

            getch();
            return 0;
}
