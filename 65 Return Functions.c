#include<stdio.h>
int Getsal()
{
    int sal;
    printf("\n Enter Salary : ");
    scanf("%d",&sal);

    return sal;
}
int GetBonus()
{
    int Bonus;
    printf("\n Enter Bonus : ");
    scanf("%d",&Bonus);

    return Bonus;
}
main()
{
    int S,B,Tamt;

    S = Getsal();
    B = GetBonus();

    Tamt = S + B;

    printf("\n Total Amount Is : %d",Tamt);
}
