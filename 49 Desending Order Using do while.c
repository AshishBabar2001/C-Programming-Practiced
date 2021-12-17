#include<stdio.h>
main()
{
    int n1,n2;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&n1,&n2);

    do
    {
        printf("\n %d",n1);
        n1 = n1 - 1;
    }while(n1>=n2);
    getch();
}
