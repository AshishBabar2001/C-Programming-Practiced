#include<stdio.h>
Add()
{
    int N1,N2,Sum;

    printf("\n\nEnter Two Number : ");
    scanf("%d %d",&N1,&N2);

    Sum = N1 + N2;

    printf("\n Sum Is : %d",Sum);
}
Sub()
{
    int N1,N2,Sub;

    printf("\n\nEnter Two Number : ");
    scanf("%d %d",&N1,&N2);

    Sub = N1 - N2;

    printf("\n Sub Is : %d",Sub);
}
Mul()
{
    int N1,N2,Mul;

    printf("\n\nEnter Two Number : ");
    scanf("%d %d",&N1,&N2);

    Mul = N1 * N2;

    printf("\n Mul Is : %d",Mul);
}
Div()
{
    int N1,N2,Div;

    printf("\n\nEnter Two Number :  ");
    scanf("%d %d",&N1,&N2);

    Div = N1 / N2;

    printf("\n Div Is : %d",Div);
}
main()
{
    int choice;

    printf("\n Enter Your Choice..........\n 1]Addition. \n 2]Substraction. \n 3]Multiplication. \n 4]Division.");

    printf("\n Enter Your Choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1 :
        Add();
        break;
    case 2 :
        Sub();
        break;
    case 3 :
        Mul();
        break;
    case 4 :
        Div();
        break;
    default :
        printf("\n Invalid Choice ");
    }
    getch();
}
