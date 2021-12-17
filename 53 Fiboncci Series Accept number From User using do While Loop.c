#include<stdio.h>
main()
{
    int n1,n2,n3,i,n;
    i=1;
    n1 = 1;
    n2 = 2;

    printf("\n Enter Number For Fibonacci Series : ");
    scanf("%d",&n);

    printf("\n 1 2 ");

    do
    {
        n3 = n1 + n2;
        printf("%d ",n3);
        n1 = n2;
        n2 = n3;
        i = i + 1;
    }while(i <= n);
    getch();
}
