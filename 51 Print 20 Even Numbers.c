#include<stdio.h>
main()
{
    int i;
    i=1;

    do
    {
        if(i % 2 == 0)
        {
            printf("\n %d",i);
        }
        i= i + 1;
    }while(i<=20);
    getch();
}
