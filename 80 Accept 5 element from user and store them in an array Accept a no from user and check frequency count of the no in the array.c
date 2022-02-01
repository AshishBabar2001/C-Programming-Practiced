#include<stdio.h>
main()
{
    int arr[5],no,i,cnt;
    cnt=0;

    printf("\n Enter 5 Elements :");

    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Enter Element to Search : ");
    scanf("%d",&no);
    if(cnt == no)
        {
            cnt = cnt + 1;
        }

    printf("\n Number %d Found At %d times",no,cnt);

}
