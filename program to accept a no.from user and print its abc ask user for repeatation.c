#include<stdio.h>
main()
{
    int n,cube;
    char ch;
    do
        {
        printf("\n Enter a number :");
        scanf("%d",&n);
        cube=n*n*n;
        printf("%d",cube);
        printf("\n Do you want to repeat it :");
        scanf("%d",&ch);
        }
        while(ch=='y');

}
