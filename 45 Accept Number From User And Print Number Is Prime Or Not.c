#include<stdio.h>
main()
{
 int n,i,flag;
 i = 2;
 flag = 0;

 printf("\n Enter a Number : ");
 scanf("%d",&n);

 do
 {
     if(n % i == 0)
     {
         flag = 1;
         break;
     }i = i+ 1;
 }while(i <= n/2);

 if(flag == 0)
 {
     printf("\n Number Is Prime.");
 }
 else
 {
     printf("\n Number Is Not Prime.");
 }
}
