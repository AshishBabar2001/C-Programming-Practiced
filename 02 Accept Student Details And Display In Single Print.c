#include<stdio.h>
main()
{
    int Roll_No;
    char Name,Course,City;

    printf("\n Enter Student Roll No. : ");
    scanf("%d",&Roll_No);
    printf("\n Enter Student Name : ");
    scanf("%c",&Name);
    printf("\n Enter Student Course : ");
    scanf("%c",&Course);
    printf("\n Enter Student City : ");
    scanf("%c",&City);

    printf("\n %d %c %c %c",Roll_No,Name,Course,City);

    getch();
}
