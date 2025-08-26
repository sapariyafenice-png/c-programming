#include <stdio.h>

int main() {
    int i, j;
    int n = 5;

    for(i = 1; i <= 9; i++) {
        printf("%d ", i);
    }
    printf("\n");


    for(i = 2; i <= n; i++) {

        for(j = 1; j < i; j++) {
            printf("  ");
        }


        printf("%d", i);

        for(j = 1; j <= 2*(n - i); j++) {
            printf("  ");
        }

        if(i != n) {
            printf(" %d", 10 - i);
        }

        printf("\n");
    }

    return 0;
}

