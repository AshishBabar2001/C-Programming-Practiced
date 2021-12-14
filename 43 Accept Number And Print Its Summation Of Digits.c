#include<stdio.h>
main()
{
    int n,Rev,Sum;
    Sum = 0;

     printf("\n Enter a Number : ");
     scanf("%d",&n);

     do
     {
         Rev = n % 10;
         Sum = Sum + Rev;
         n = n/ 10;
     }while(n > 0);

     printf("\n summation Of Given Number Is : %d",Sum);
}
