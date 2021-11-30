#include<stdio.h>
main()
{
    int n1,n2,Result,Choice;

    printf("\n ............Menu............");
    printf("\n 1. Addition.");
    printf("\n 1. SUbstraction.");
    printf("\n 1. Multiplication.");
    printf("\n 1. Division.");

    printf("\n Enter Your Choice : ");
    scanf("%d",&Choice);

    if(Choice >= 1 && Choice <= 4)
    {
    printf("\n Enter Two Numbers : ");
    scanf("%d %d",&n1,&n2);

        switch(Choice)
    {
    case 1 :
        Result = n1 + n2;
        printf("\n Addition Of Two Number Is : %d",Result);
        break;
    case 2 :
        Result = n1 - n2;
        printf("\n Substraction Of Two Number Is : %d",Result);
        break;
    case 3 :
        Result = n1 * n2;
        printf("\n Multiplication Of Two Number Is : %d",Result);
        break;
    case 4 :
        if(n2 > 0)
        {
            Result = n1 / n2;
            printf("\n Addition Of Two Number Is : %d",Result);
            break;
        }
        else
        {
            printf("\n You Cannot Divided By Zero");
        }
    default:
        printf("\n Invalid Choice....!!!");
    }

    }
    getch();
}
