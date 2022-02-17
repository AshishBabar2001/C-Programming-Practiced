#include<stdio.h>
main()
{
    char Name[20];
    printf("\n Enter Name : ");
    gets(Name);
    int i;
    for(i = 0 ; Name[i] != '\0' ; i++)
    {
        printf("\n %c",Name[i]);
    }
}
