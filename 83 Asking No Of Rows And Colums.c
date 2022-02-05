#include<stdio.h>
main()
{
    int arr[4][3],i,j;
    printf("\n Enter Elements for 4*3 Matrix : ");
    for(i=0 ; i<4 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}
