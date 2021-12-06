#include<stdio.h>
main()
{
    int n,Cube,i;
    i = 1;

    while(i <= 3)
    {
        printf("\n\n Enter A Number : ");
        scanf("%d",&n);

        Cube = n*n*n;

        printf("\n Cube Of Given Number Is : %d",Cube);
        i = i + 1;
    }
    getch();

}
