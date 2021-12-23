#include<Stdio.h>
Add (int n1,int n2)
{
    int Sum;
    Sum = n1 + n2;

    printf("\n Summation Is %d",Sum);

}
Sub (int n1,int n2)
{
    int Sub;
    Sub = n1 - n2;

    printf("\n Substraction Is %d",Sub);

}
main()
{
    int r,v;

    printf("\n Enter Two Numbers : ");
    scanf("%d %d",&r,&v);
    Add(r,v);
    Sub(r,v);
}
