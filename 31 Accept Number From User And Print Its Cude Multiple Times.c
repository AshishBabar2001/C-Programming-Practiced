#include<stdio.h>
main()
{
    int n,Cube;
    char ch;
    ch = 'y';

    while(ch == 'y')
    {
        printf("\n\n Enter A Number : ");
        scanf("%d",&n);

        Cube = n*n*n;

        printf("\n Cube Of Given Number Is : %d",Cube);

        printf("\n Do you Want To Reverse This Process : ");
        scanf("%s",&ch);
    }
    getch();

}
