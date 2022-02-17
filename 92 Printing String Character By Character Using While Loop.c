#include<stdio.h>
main()
{
    char Name[20];

    printf("\n Enter Name : ");
    gets(Name);

    int i;
    i=0;
    while(Name[i] != '\0')
    {
        printf("\n %c",Name[i]);
        i++;
    }

}
