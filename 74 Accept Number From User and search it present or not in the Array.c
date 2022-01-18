#include<stdio.h>
main()
{
    int Arr[5],i,no,flag;
    flag=0;

    printf("\n Enter Array Element : ");

    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&Arr[i]);
    }
    printf("\n Enter Element To Serach : ");
    scanf("%d",&no);

    for(i = 0 ; i < 5 ; i++)
    {
        if(no == Arr[i]);
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("\n Number %d Is Found in Array at Position %d",no,i+1);
    }
    else
    {
        printf("\n Number %d is Not Found In Array ");
    }
    getch();
}
