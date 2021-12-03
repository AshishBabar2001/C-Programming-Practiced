#include<stdio.h>
main()
{
    int n,f;
    f = 1;

    printf("\n Enter Two Numbers : ");
    scanf("%d",&n);

    while(n > 0)
    {
        f = f * n;
        n = n - 1;
    }
    printf("\n Factorial Is : %d",f);
     getch();
}
