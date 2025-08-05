#include<stdio.h>
#include<conio.h>
void main()
{
    int amount;
    printf("enter total amount");
    scanf("%d",&amount);
    if(amount<1000)
    {
        printf("no discount");
        printf("you have to pay %d",amount);

    }
    else if (amount>1000&&amount<=5000)
    {

        printf("you get 10% discount");
        printf("total amount you have to pay is %d,amount*10/100");
    }
    else if (amount>5000)
        {

            printf("you get 20% discount" );
            printf("total amount you have to pay is %d,amount*20/100");
        }
        else
        {
            printf("invalid data");
        }
        getch();

}
