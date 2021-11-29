#include<stdio.h>
main()
{
    char ch;
    printf("\n Enter a Character to Verify it Between a-e : ");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'a' :
    case 'A' :
        printf("\n It Is a / A");
        break;

    case 'b' :
    case 'B' :
        printf("\n It Is b / B");
        break;

    case 'c' :
    case 'C' :
        printf("\n It Is c / C");
        break;

    case 'd' :
    case 'D' :
        printf("\n It Is d / D");
        break;

    case 'e' :
    case 'E' :
        printf("\n It Is e / E");
        break;

    default :
        printf("\n Invalid Number !!!");
    }

    getch();
}
