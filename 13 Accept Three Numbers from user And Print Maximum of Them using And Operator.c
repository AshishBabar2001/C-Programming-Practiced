#include<stdio.h>
main()
{
    int n1,n2,n3;

    printf("\n Enter a Number : ");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1 > n2 && n1 > n3)
    {
        printf("\n Max Is n1 : %d",n1);
    }
    else if(n2 > n1 && n2 > n3)
    {
       printf("\n Max Is n2 : %d",n2);
    }
    else if(n3 > n1 && n3 > n2)
    {
        printf("\n Max Is n3 : %d",n3);
    }
    else
        {
            printf("\n All Numbers Are Equal");
        }
    getch();
}
