#include<stdio.h>
main()
{
    int n,f;
    f = 1;
     printf("\n Enter a Number : ");
     scanf("%d",&n);

     do
     {
         f = f * n;
         n = n - 1;
     }while(n > 0);
     printf("\n Factorial Is %d",f);


}
