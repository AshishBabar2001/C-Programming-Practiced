#include<stdio.h>
#define PI 3.14

main()
{
    int r,Area;

    printf("\n Enter Radius of Circle : ");
    scanf("%d",&r);

    Area = PI*r*r;

    printf("\n Area Of Circle is : %d ",Area);
}
