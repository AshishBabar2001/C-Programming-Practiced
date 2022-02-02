#include<stdio.h>
main()
{
    int arr1[5],arr2[5],arr3[5],i=0;
    printf("\n Enter 5 Element for first array : ");
    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\n Enter 5 Element for Second array : ");
    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&arr2[i]);
        arr3[i] = arr1[i] + arr2[i];
    }
    printf("\n Enter 5 Element for Third Array : ");
    for(i = 0 ; i < 5 ; i++)
    {
        printf(" %d",arr3[i]);
    }
}
