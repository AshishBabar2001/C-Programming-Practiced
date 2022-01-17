#include<stdio.h>
main()
{
    int arr[5],i;
    printf("\n Enter Element : ");

    for(i = 0 ; i <= 5 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0 ; i <= 5 ; i++)
    {
        printf("\n %d",arr[i]);
    }
}
