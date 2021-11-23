#include<stdio.h>
main()
{
    int n;
    printf("\n Enter A Number To Check It's Positive or Negative : ");
    scanf("%d",&n);
    if(n % 2 == 0)
    {
        printf("\n Number Is Even ");
    }
    else
    {
        printf("\n Number Is Odd");
    }
    getch();
}
