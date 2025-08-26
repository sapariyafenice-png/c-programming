#include <stdio.h>

int main() {
    int i, j, space, num = 5;

    for(i = num; i >= 1; i--) {

        for(space = 0; space < num - i; space++)
            printf("  ");


        for(j = i; j >= 1; j--)
            printf("%d ", j);


        for(j = 2; j <= i; j++)
            printf("%d ", j);

        printf("\n");
    }


    for(i = 2; i <= num; i++) {

        for(space = 0; space < num - i; space++)
            printf("  ");


        for(j = i; j >= 1; j--)
            printf("%d ", j);


        for(j = 2; j <= i; j++)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}
