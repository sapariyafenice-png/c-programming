#include<stdio.h>
int main()
{
    int choice;
    float balance=5000.0,amount;
    printf("welcome to national bank of bharat ATM\n");
    do
    {
        printf("1.check your balance\n");
        printf("2. withdraw cash\n");
        printf("3.exit\n");
        printf("enter your choice :");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
            printf("your current balance is :$%.2f\n",balance);
            case 2:
            printf("enter the amount to withdraw:$\n");
            if (amount<=0){
                printf("invalid amount! please enter grater than o.\n" );

            }
            else if(amount > balance)
            {
                printf("insufficient balance your balance is:$%.2f\n",balance);
            }
            else{
                balance==amount;
                printf("withdrawal successful ! remining balance :$%.2f\n",balance);
            }
            break;
            case 3:
            printf("thank you for using our ATM \n");
            break;
        default:
            printf("invalid choice! please try again .\n");
        }
    } while(choice !=3);
    return 0;
}
