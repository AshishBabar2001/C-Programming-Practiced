#include<stdio.h>
main()
{
    int n;
    printf("Enter Number Of Array : ");
    scanf("%d",&n);

    int arr[n],Search_No,i,flag = 0;

    printf("\n Enter Array Element : ");
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0 ; i < n ; i++)
    {
        printf("\n Element Of Array : %d",arr[i]);
    }

    printf("\n Enter Number To Search Array Element : ");
    scanf("%d",&Search_No);

    for(i = 0 ; i < n ;i++)
    {
       if(arr[i] == Search_No)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("\n Number %d Is Present In Array At %d Position",Search_No,i+1);
    }
    else
    {
        printf("\n Number %d Is Not Found In Array",Search_No);
    }


}
