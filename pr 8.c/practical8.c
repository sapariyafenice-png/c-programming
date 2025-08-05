#include<stdio.h>
int main()
{
    int age;
    printf("enter customer's age:");
    scanf("%d",&age);
    if(age<0 || age>120)
    {

        printf("invalid age,enter valid age between 0 to 120.\n");

    }
    else if(age<18)
    {
        printf("not eligible to open a saving account");
    }
    else if(age>=18 && age<60)
    {

    printf ("eligible for open a saving account");
    }
    else
    {
        printf("eligible for senior account");

    }
    getch();
    return 0;
}
