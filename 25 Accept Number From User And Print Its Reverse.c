#include<stdio.h>
main()
{
    int n,r;

    printf("\n Enter Two Numbers : ");
    scanf("%d",&n);

    printf("\n Reverse Number Is ");
    while(n > 0)
    {
        r = n % 10;
        printf("%d",r);
        n = n / 10;
    }
     getch();
}
