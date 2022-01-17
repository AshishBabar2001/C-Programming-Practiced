#include<stdio.h>
main()
{
    int Arr[5],i;
    for(i = 1; i <= 5; i++)
    {
        printf("\n Enter 5 Number ");
        scanf("%d",&Arr[i]);
    }
    for(i = 1; i <= 5; i++)
    {
        printf("\n %d",Arr[i]);
    }
    getch();
}
