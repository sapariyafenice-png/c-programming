#include <stdio.h>
#include <math.h>

void validtriangle(int a,int b,int c)
{
    if (a+ b>c && b+c>a && a+c>b)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
float calculatearea(int a,int b,int c)
{
    float s, area;
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

int main()
{
    printf("id no:25ce106\n");
    int a, b, c;
    float area;
    printf("Enter lengths of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Valid triangle: ");
    validtriangle(a, b, c);
    if (a+b>c && b+c>a && a+c>b)
    {
        printf("Area: %.2f\n", calculatearea(a, b, c));
    }
    else
    {
        printf("Message : ");
        if (a+b<=c || b+c<=a || a+c<=b)
        {
            printf("the given lengths not form a valid triangle.\n");
        }
        if (a<0 || b<0 || c<0)
        {
            printf("side lengths must be positive numbers.\n");
        }
    }
    return 0;
}
