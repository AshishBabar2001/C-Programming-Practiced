#include<stdio.h>
main()
{
    int n,i = 1;
    printf("\n Enter A Number : ");
    scanf("%d",&n);

     while(i <= 10)
     {
         printf("\n %d",n*i);
         i = i+1;
     }
     getch();
}
