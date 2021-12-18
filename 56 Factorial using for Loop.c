#include<stdio.h>
main()
{
    int n,f;

    printf("\n Enter a Number : ");
    scanf("%d",&n);
    f=1;
    for(;n>0;n--)
    {
        f = f*n;
        printf("\n Factorial of %d : %d",n,f);
    }
    printf("\n\n Factorial Is : %d",f);
    getch();
}
