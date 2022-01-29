#include<stdio.h>
main()
{
    int Arr[5],Sum,Avg,i;

    printf("\n Enter 5 Number : ");

    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&Arr[i]);
        Sum = Sum + Arr[i];
    }
    Avg = Sum / 5;

    printf("\n Summation is : %d",Sum);
    printf("\n Average Is : %d",Avg);
}
