#include<stdio.h>
main()
{
    int n;
    printf("\n Enter a Numbers : ");
    scanf("%d",&n);
    if(n > 0)
        printf("\n %d Is Positive Number",n);
    else if(n < 0)
        printf("\n %d Is Negative Number",n);
    else
        printf("\n %d Is Neutral Number",n);
    getch();
}
