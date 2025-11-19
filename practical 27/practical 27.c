
#include<stdio.h>
int savings(int month)
{
    int n=0;
    if(month==1 || month==2)
    {
        return 1;
    }
    else
    {
        n=savings(month-1)+savings(month-2);
        return n;
    }
}

void main()
{
    printf("id no :24ce106\n");
    int month,i;
    printf("enter the number of months : ");
    scanf("%d",&month);
    if(month>0)
    {
        printf("here is your progress:\n");
        for(i=1;i<=month;i++)
        {
            printf("month-%d savings : %d \n",i,savings(i));
        }
    }
    else
    {
        printf("enter a valid number of month.");
    }
}
