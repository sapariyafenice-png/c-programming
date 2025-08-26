#include<stdio.h>
int main()
{
    int horizontal,vertical,i,j;
    table:
    printf("Enter the number of vertical lines you want : ");
    scanf("%d",&vertical);
    printf("Enter the number of horizontal lines you want : ");
    scanf("%d",&horizontal);
    if(horizontal>0 && vertical>0)
    {
    for(i = 1;i<=horizontal;i++)
    {
        for(j=1;j<=vertical;j++)
        {
            printf("%3d",i*j);
        }
        printf("\n");
    }
    }
    else
        goto table;
return 0;
}

