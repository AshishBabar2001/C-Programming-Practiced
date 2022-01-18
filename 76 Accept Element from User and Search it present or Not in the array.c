#include<stdio.h>
main()
{
    int Arr[5],i,no,flag;
    flag = 0;

    printf("\n Enter Array Element : ");

    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("\n Enter Number For Search Element : ");
    scanf("%d",&no);

    for(i = 0 ; i < 5 ; i++)
    {
        if(no == Arr[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag = 1)
    {
        printf("\n Entered Number %d Found In Location %d",no,i+1);
    }
    else
    {
        printf("\n Entered Number %d Is Not Found",no);
    }
    getch();
}
