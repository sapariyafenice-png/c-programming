#include<stdio.h>
#include<string.h>
#define max_books 3
char bookname[max_books][50]={"c programming",
                                "data structure",
                                "algorithm"
                            };
int avaliable[max_books]={1,1,1};

void displaybooks()
{
    printf("\nlist of avaliable books are:\n");
    for (int i=0;i<max_books;i++)
    {
        if (avaliable[i])
        {
            printf("%s\n",bookname[i]);
        }
    }
}
int gettotalbooks()
{
    int count=0;
    for (int i=0;i<max_books;i++)
    {
        if (avaliable[i])
        {
            count++;
        }
    }
    return count;
}
void borrowbook(char bookname[])
{
    for (int i=0;i<max_books;i++)
    {
        printf("for borrow book 'algorithm'");
        printf("checking....\n");
        if (avaliable[i])
        {
            avaliable[i]=0;
            printf("'%s' book borrowed succesfully!\n",bookname);
            return;
        }
    }
    printf("book is not available.");
}
int calculatefine(int latedays)
{
    int fineperday=2;
    return latedays*fineperday;
}
int main()
{
    printf("id no :25ce106\n");
    printf("=====welcome to libray book section=====\n");
    displaybooks();
    printf("\ntotal availabe books :%d \n",gettotalbooks());

    borrowbook("algorithm");
    printf("\ntotal available book after borrowing 'Algorithm' :%d \n",gettotalbooks());
    int latedays=4;
    printf("\nfine for %d days late : %d\n",latedays,calculatefine(latedays));
    return 0;
}
