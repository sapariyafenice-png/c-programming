#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int isNumeric(char *s) {
    int i = 0;
    if (s[0] == '-' || s[0] == '+')
        i = 1;
    int dotCount = 0;

    for (; s[i] != '\0'; i++) {

        if (s[i] == '.') {
            dotCount++;
            if (dotCount > 1)
                return 0;
            continue;
        }

        if (!isdigit(s[i]))
            return 0;
    }
    return 1;
}

int main() {
    int n, i, j;
    float *price, temp;
    char input[50];
    printf("id no:25ce106\n");
    printf("Enter number of items: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error: \"No items to sort.\"");
        return 0;
    }
    price = (float *)malloc(n * sizeof(float));

    printf("Enter prices:\n");
    for (i = 0; i < n; i++) {

        scanf("%s", input);

        if (!isNumeric(input)) {
            printf("Error: \"Invalid input for price. Please enter numeric values only.\"");
            free(price);
            return 0;
        }

        price[i] = atof(input);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(price + i) > *(price + j)) {
                temp = *(price + i);
                *(price + i) = *(price + j);
                *(price + j) = temp;
            }
        }
    }

    printf("Sorted Prices: ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", *(price + i));
    }

    free(price);
    return 0;
}

