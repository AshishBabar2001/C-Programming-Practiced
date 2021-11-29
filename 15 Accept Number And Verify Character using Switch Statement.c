#include<stdio.h>
main()
{
    char ch;
    printf("\n Enter a Character to Verify it Between a-e : ");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'a' :
        printf("\n It Is a");
        break;

    case 'b' :
        printf("\n It Is b");
        break;

    case 'c' :
        printf("\n It Is c");
        break;

    case 'd' :
        printf("\n It Is d");
        break;

    case 'e' :
        printf("\n It Is e");
        break;

    default :
        printf("\n Invalid Number !!!");
    }

    getch();
}
