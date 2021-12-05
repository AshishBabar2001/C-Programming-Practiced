#include<stdio.h>
main()
{
    int n,n1,r,Sum;
    Sum = 0;

    printf("\n Enter a Numbers : ");
    scanf("%d",&n);

    n1 = n;

    while(n > 0)
    {
        r = n % 10;
        Sum = Sum + (r*r*r);
        n = n / 10;
    }
    if(n1 == Sum)
        printf("\n It IS An Armstrong Number");
    else
        printf("\n It Is Not Armstrong Number");

     getch();
}
