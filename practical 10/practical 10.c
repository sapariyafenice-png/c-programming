#include<stdio.h>
int main()
{
    int choice;
    int total = 0;
    printf("Welcome to Foodies Restaurant");
    printf("Please select items from the menu below");
             printf("\nMenu\n");
    printf("1. Burger - Rs 150\n");
    printf("2. Pizza - Rs 200\n");
    printf("3. Pasta - Rs 120\n");
    printf("4. Sandwhich - Rs 100\n");
    printf("5. French Fries - Rs 80\n");
    printf("Enter Zero to Complete the Order\n");
    while(1)
    {

    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("You ordered Burger.Your Sub-Total is Rs %d\n",total+=150);
        break ;
    case 2:
        printf("You ordered Pizza.Your Sub-Total is Rs %d\n",total+=200);
        break ;
    case 3:
        printf("You ordered Pasta.Your Sub-Total is Rs %d\n",total+=120);
        break ;
    case 4:
        printf("You ordered Sandwhich.Your Sub-Total is Rs %d\n",total+=100);
        break ;
    case 5:
        printf("You ordered French Fries.Your Sub-Total is Rs %d\n",total+=80);
        break ;
    case 0:
        printf("Your Order is Completed .\n Your Total Amount is : Rs %d",total);
        return 0 ;
    default :
        printf("Enter Valid option from the Menu");
        break;
    }
    }
//Display the menu

    return 0;
}
