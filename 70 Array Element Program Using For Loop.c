#include<stdio.h>

main ()
{
    int Arr[3],i;

    printf("Enter An Array : ");

    for(i=0;i<3;i++)
    {
        scanf("%d",&Arr[i]);
    }

    for(i=0;i<3;i++)
    {
        printf("\n Enterd Array Is %d",Arr[i]);
    }
    getch();
}
