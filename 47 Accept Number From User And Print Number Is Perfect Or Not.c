#include<stdio.h>
main()
{
 int n,i,Sum;
 i = 1;
 Sum = 0;

 printf("\n Enter a Number : ");
 scanf("%d",&n);

 do
 {
     if(n % i == 0)
     {
         Sum = Sum + i;
     }
     i = i+ 1;
 }while(i <= n/2);

 if(Sum == n)
 {
     printf("\n Number Is Perfect.");
 }
 else
 {
     printf("\n Number Is Not Perfect.");
 }
}
