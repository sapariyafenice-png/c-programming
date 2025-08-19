#include<stdio.h>
int main()
{
    int sec;
    printf("enter the number of seconds");
    scanf("%d",&sec);
    if(sec>=0)
    {
        while(sec>0)
        {
        printf("%d",sec);
        sleep(1);
        sec--;
    }
    }
    else
    {
        printf("enter the valid input");
    }
    printf("countdown completed");
    return 0;
}
