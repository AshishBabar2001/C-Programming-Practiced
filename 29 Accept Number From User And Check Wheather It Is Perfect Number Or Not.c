#include<stdio.h>
main()
{
    int n,i,Sum;
    i = 1;
    Sum = 0;

    printf("\n Enter a Numbers : ");
    scanf("%d",&n);

    while(i<= n/2)
    {
        if(n % i == 0)
        {
            Sum = Sum + i;
        }
        i = i + 1;
    }
    if(Sum == n)
        printf("\n Given Number Is Perfect");
    else
        printf("\n Given Number Is Not Perfect");

     getch();
}
