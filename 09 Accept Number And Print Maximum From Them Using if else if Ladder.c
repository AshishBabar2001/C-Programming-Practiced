#include<stdio.h>
main()
{
    int n1,n2;
    printf("\n Enter Two Numbers : ");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
        printf("\n Max Is n1 : %d",n1);
    else if(n2>n1)
        printf("\n Max Is n2 : %d",n2);
    else
        printf("\n Boths Are Equal");
    getch();
}
