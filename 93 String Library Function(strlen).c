#include<stdio.h>
main()
{
    char Nm[20];
    int i;
    i = 0;
    printf("\n Enter Name : ");
    gets(Nm);

    i = strlen(Nm);

    printf("%d",i);
}
