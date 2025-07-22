#include<stdio.h>
int main()
{
    float w,h,BMI;

    printf("enter your hight in meter");
    scanf("%f",&h);
    printf("enter your weight in kilograme");
    scanf("%f",&w);
    if(w>0&h>0)
    {
        BMI=w/(h*h);

        printf("your bmi is=%.2f",BMI);
    }
    else
    {
        printf("your input is invalid");
    }
    BMI=w/(h*h);
    printf("your BMI is=%.2f",BMI);
    if(BMI<18.5);
    {
        printf("you asre in underweight");
    }
    else if(BMI>18.5&&BMI<24.9)
    {
        printf("you are overweight");
    }
    return 0;
}
