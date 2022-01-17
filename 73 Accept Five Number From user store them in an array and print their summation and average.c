#include<stdio.h>
main()
{
    int i,Sum,Avg,Arr[5];
    Sum = 0;

    printf("Enter 5 Elements : ");

    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&Arr[i]);
        Sum = Sum + Arr[i];
    }
    Avg = Sum / 5;

    printf("\n Summation Is : %d",Sum);
    printf("\n Average Is : %d",Avg);
    getch();

}
