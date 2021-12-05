#include<stdio.h>
main()
{
    int n,i,flag;
    i = 2;
    flag = 0;

    printf("\n Enter a Numbers : ");
    scanf("%d",&n);

    while(i<= n/2)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
        i = i + 1;
    }
    if(flag == 0)
        printf("\n Given Number Is Prime");
    else
        printf("\n Given Number Is Not Prime");

     getch();
}
