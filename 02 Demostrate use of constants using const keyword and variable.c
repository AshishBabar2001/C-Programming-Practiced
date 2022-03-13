#include<stdio.h>
main()
{
    float Area,Len,Breadth;
    float Half = 0.5;

    printf("\n Enter Lenght And Breadth : ");
    scanf("%f %f",&Len,&Breadth);

    Area = Half * Len * Breadth;

    printf("Area Of Triangle is : %f",Area);
}
