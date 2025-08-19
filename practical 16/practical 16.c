#include<stdio.h>
int main()
{
    int matchsticks=21;
    int user,computer;
    printf("welcome to matchstick game\n");
    printf("rules:\n");
    printf("the game start with 21 matchstick.\n");
    printf("you can pick 1,2,3 or 4 matchsticks on your turn\n");
    printf("the player forced to pick last matchstick losses\n");
    while(matchsticks>1)
    {
        printf("matchstick left:%d\n",matchsticks);
        printf("your turn:1,2,3 or 4 matchsticks\n");
        scanf("%d",&user);
        if(user<1 || user>4)
        {
            printf("invalid input\n");
            continue;
        }
        matchsticks=user;
        if(matchsticks==1)
        {
            printf("only one matchstick left. you have to pick it up\n");
            printf("you lost,computer wins \n");
            break;
        }
        computer=5-user;
        printf("computer will pick %d matchsticks\n",computer);
        matchsticks=computer;
        if(matchsticks==1)
        {
            printf("computer is forced to pick the last matchstick\n");
            printf("you win,computer losses\n");
            break;
        }

    } return 0;
}
