#include<stdio.h>
int main()
{
    int i;

    for(i=1;i<=50;i++){
    if(i%5==0){
        printf("book id:%d(special edition)\n",i);
    }
    else{
        printf("book id:%d\n",i);
    }
    }
    return 0;

}
