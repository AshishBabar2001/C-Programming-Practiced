#include<stdio.h>
main()
{
    int n;
    printf("\n Enter Number Of Array You Want To store : ");
    scanf("%d",&n);
    int arr1[n],arr2[n],arr3[n],i=0;
    printf("\n Enter %d Element for first array : ",n);
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\n Enter 5 Element for Second array : ");
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr2[i]);
        arr3[i] = arr1[i] + arr2[i];
    }
    printf("\n Enter 5 Element for Third Array : ");
    for(i = 0 ; i < n ; i++)
    {
        printf(" %d",arr3[i]);
    }
}
