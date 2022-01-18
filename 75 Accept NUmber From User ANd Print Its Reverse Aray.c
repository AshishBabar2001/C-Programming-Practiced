#include<stdio.h>
main()
{
    int Arr[5],i;

    printf("\n Enter 5 Elements : ");
    for(i = 0 ; i < 5 ; i++)
    {
       scanf("%d",&Arr[i]);
    }
    for(i = 4 ; i >= 0 ; i --)
    {
        printf("\n %d ",Arr[i]);
    }

}
