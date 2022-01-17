#include<stdio.h>
main()
{
    int Arr[5],i;
    for(i = 0 ;i < 5; i++)
    {
        printf("\n Enter Element : ");
        scanf("%d",&Arr[i]);
    }
    for(i = 0 ; i< 5 ; i++)
    {
        printf("\n %d",&Arr[i]);
    }
    getch();
}
