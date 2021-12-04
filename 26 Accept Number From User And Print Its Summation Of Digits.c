#include<stdio.h>
main()
{
    int n,r,Sum;
    Sum = 0;

    printf("\n Enter Two Numbers : ");
    scanf("%d",&n);

    while(n > 0)
    {
        r = n % 10;
        Sum = Sum + r;
        n = n / 10;
    }
    printf("\n Summation Of Digits Is : %d",Sum);

     getch();
}
