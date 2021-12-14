#include<stdio.h>
main()
{
 int n,Cube,i;
 i = 1;
 char ch;
 ch = 'y';

 do
 {
    printf("\n Enter a Number : ");
    scanf("%d",&n);
    Cube = n*n*n;
    printf("\n Cube Is %d",Cube);

    printf("\n Do You Want To Repeat This Process : ");
    scanf("%s",&ch);
 }
while(ch == 'y');
}
