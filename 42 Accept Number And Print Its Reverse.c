#include<stdio.h>
main()
{
    int n,Rev;

     printf("\n Enter a Number : ");
     scanf("%d",&n);

     printf("\n Reverse Number Is ");

     do
     {
         Rev = n % 10;
         printf("%d",Rev);
         n = n/ 10;
     }while(n > 0);
}
