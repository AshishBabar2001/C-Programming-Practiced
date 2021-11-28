#include<stdio.h>
main()
{
    int n;
    printf("\n Enter a Number to Verify it Between 1-5 : ");
    scanf("%d",&n);

    switch(n)
    {
    case 1 :
        printf("\n It Is One");
        break;

    case 2:
        printf("\n It Is Two");
        break;

    case 3:
        printf("\n It Is Three");
        break;

    case 4:
        printf("\n It Is Four");
        break;

    case 5 :
        printf("\n It Is Five");
        break;

    default :
        printf("\n Invalid Number !!!");
    }

    getch();
}
