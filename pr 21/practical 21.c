#include<stdio.h>
int main()
{

int arr[25];
int cp=0;
int cn=0;
int ceven=0;
int codd=0;
int i;
printf("enter 25 integers:");
for(i=0;i<25;i++)
{
    printf("enter arr[%d]=",i);
    scanf("%d",&arr[i]);

if (arr[i]>=0)
    {
        cp++;
    }

if(arr[i]<=0)
{
    cn++;
}
if(arr[i]%2==0)
{
    ceven++;
}
if(arr[i]%2!=0)
{
    codd++;
}
}
printf("\nTotal positive number is %d\n",cp);
printf("\nTotal negative number is %d\n",cn);
printf("\nTotal even number is %d\n",ceven);
printf("\nTotal odd number is %d\n",codd);
return 0;
}







