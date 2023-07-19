#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
            int RollNo;
            char Name[12];
            char City[8];
            float Per;
}s1 = {700, "HarryPotter", "America", 75.546};

int main( )
{
            struct  student  std3 = {15,"Ajit Khade","Sangli",61.49898};

            printf("\n Local Student Object Details Given are => \n\n\t Roll No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.3f.\n",std3.RollNo,std3.Name,std3.City,std3.Per);

            printf("\n Global Student Object Details Given are => \n\n\t Roll No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.3f.\n",s1.RollNo, s1.Name, s1.City, s1.Per);

            s1.RollNo = 21;
            strcpy(s1.Name,"Spider Man");
            s1.Per = 85.56498;

            getch();

            printf("\n Global Student Object Details Given are => \n\n\t Roll No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.3f.\n",s1.RollNo, s1.Name, s1.City, s1.Per);

            getch();
            return 0;
}
