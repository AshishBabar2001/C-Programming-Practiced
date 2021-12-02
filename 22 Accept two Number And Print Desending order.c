#include<stdio.h>
main()
{
    int n1,n2;

    printf("\n Enter Two Numbers : ");
    scanf("%d %d",&n1,&n2);
     while(n1 >= n2)
     {
         printf("\n %d",n1);
         n1 = n1 - 1;
     }
     getch();
}
