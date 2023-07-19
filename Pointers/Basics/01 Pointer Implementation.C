#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo = 21, iNum = 55;
    int  *iPtr1 = &iNo;
    int  *iPtr2 = &iNum;

    printf("\n Value of iNo = %d", iNo);
    printf("\n Address of iNo = %d",&iNo);
    printf("\n Value of iNo Using its Pointer iPtr1 = %d",*iPtr1);
    printf("\n Address Of iNo Using iPtr1 = %d", iPtr1);
    printf("\n Address Of iPtr1 = %d",&iPtr1);

    printf("\n\n Value of iNum = %d", iNum);
    printf("\n Address of iNum = %d",&iNum);
    printf("\n Value of  Variable Using its Pointer iPtr2 = %d",*iPtr2);
    printf("\n Address Of Variable Using iPtr2 = %d", iPtr2);
    printf("\n Address Of iPtr2 = %d",&iPtr2);

    printf("\n\n Value = %d",&(*iPtr1));
    printf("\n\n Value = %d",&(*iPtr2));

    iNo = 101;

    printf("\n Value of iNo Using its Pointer iPtr1 = %d",*iPtr1);

    *iPtr1 = 500;

    getch();
    return 0;
}
