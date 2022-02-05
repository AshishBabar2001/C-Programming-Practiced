#include<stdio.h>
main()
{
    int arr[100][100],i,j,Rows,Cols;
    printf("\n Enter Elements of Rows and Cols : ");
    scanf("%d %d",&Rows,&Cols);
    printf("\n Enter Elements For %d * %d Matrix : ",Rows,Cols);

    for(i=0 ; i<Rows ; i++)
    {
        for(j=0 ; j<Cols ; j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("\n Matrix : \n");
    for(i=0 ; i<Rows ; i++)
    {
        for(j=0 ; j<Cols ; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}
