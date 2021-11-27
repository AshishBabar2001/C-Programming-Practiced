#include<stdio.h>
main()
{
    int Roll_No,Sci,Maths,Eng,Total,Avg;
    printf("\n Enter Roll No Of Student : ");
    scanf("%d",&Roll_No);
    printf("\n Enter Science,maths and English : ");
    scanf("%d %d %d",&Sci,&Maths,&Eng);

    Total = Sci + Maths + Eng;
    Avg = Total/3;

    printf("\nRoll_No \tTotal \t\tAverage ");
    printf("\n%d \t\t%d \t\t%d",Roll_No,Total,Avg);

    if(Sci > 40 && Maths > 40 && Eng > 40)
    {
    if(Avg > 80)
    {
        printf("\n\n Grade A Congrats You have An excellent Performance");
    }
    else if(Avg > 60)
    {
        printf("\n\n Grade B Congrats You Need More Practice");
    }
    else if(Avg > 40)
    {
        printf("\n\n Grade c Need More Practice");
    }
    }
    else
    {
        printf("\n\n Fail This Is Not End SO Try Next Time...");
    }
    getch();
}
