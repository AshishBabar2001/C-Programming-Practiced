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
    Add();
    Sub();
    Mul();
    Div();
    getch();
}
