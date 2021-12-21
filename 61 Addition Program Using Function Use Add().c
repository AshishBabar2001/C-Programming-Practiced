#include<stdio.h>
Add()
{
    int a,b,Sum;
    printf("\n Enter Two Number : ");
    scanf("%d %d",&a,&b);

    Sum = a + b;

    printf("Addition Is : %d",Sum);
}
main()
{
    Add();
    getch();
}
