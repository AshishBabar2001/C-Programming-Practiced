#include<stdio.h>
main()
{
    int i,n;
    i=1;
    printf("\n Enter a Number : ");
    scanf("%d",&n);

    do
    {
        printf("\n %d",n*i);
        i= i + 1;
    }while(i<=10);
    getch();
}
