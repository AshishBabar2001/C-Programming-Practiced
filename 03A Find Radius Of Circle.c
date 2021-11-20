#include<stdio.h>
main()
{
    int Radius,Area;
    printf("\n Enter Radius :- ");
    scanf("%d",&Radius);
    Area = 3.14 * Radius * Radius;
    printf("\n Area Of Circle %d : %d",Radius,Area);
    getch();
}
