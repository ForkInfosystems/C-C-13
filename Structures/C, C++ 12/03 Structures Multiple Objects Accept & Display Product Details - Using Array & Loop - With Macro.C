#include<stdio.h>
#include<conio.h>
#include<cstdlib>

#define PCount 5

struct Product
{
            int P_Id;
            char P_Name[20];
            float P_P_Price;
            float P_S_Price;
};

int main()
{
            int i = 0;
            struct Product Prod[PCount];

            // Accept Product details
            printf("\n\n Accepting Product Details => \n");

            for(i = 0; i < PCount; i++)
            {
                        printf("\n Enter Product ID = ");
                        scanf("%d",&Prod[i].P_Id);

                        fflush(stdin);

                        printf("\n Enter Product Name = ");
                        gets(Prod[i].P_Name);

                        printf("\n Enter Product Sales Price = ");
                        scanf("%f",&Prod[i].P_S_Price);

                        printf("\n Enter Product Purchase Price = ");
                        scanf("%f",&Prod[i].P_P_Price);
            }

            getch();
            system("cls");
            printf("===============***********=================\n");

            // Display Product details
            printf("\n Display Product Details =>\n");

            for(i = 0; i < PCount; i++)
            {
                    printf("\n %d Product Details => ",i+1);

                    printf("\n ID = %d.", Prod[i].P_Id);
                    printf("\n Name = %s.", Prod[i].P_Name);
                    printf("\n Sales Price = %0.2f.", Prod[i].P_S_Price);
                    printf("\n Purchase Price = %0.2f.\n", Prod[i].P_P_Price);
            }

            printf("\n===============***********=================\n");

            getch();
            return 0;
}
