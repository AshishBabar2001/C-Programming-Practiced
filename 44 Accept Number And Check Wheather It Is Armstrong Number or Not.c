#include<stdio.h>
main()
{
    int n,n1,r,Sum;
    Sum = 0;

     printf("\n Enter a Number : ");
     scanf("%d",&n);

     n1 = n;

     do
     {
         r = n % 10;
         Sum = Sum + (r*r*r);
         n = n/ 10;
     }while(n > 0);
     if(n1 == Sum)
        printf("\n Number Is Armstrong ");
     else
        printf("\n Number Is Not Armstrong");
}
