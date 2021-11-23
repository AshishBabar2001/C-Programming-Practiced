#include<stdio.h>
main()
{
    int n;
    printf("\n Enter A Number To Check It's Positive or Negative : ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("\n Number Is Positive ");
    }
    else
    {
        printf("\n Number Is Negative");
    }
    getch();
}
