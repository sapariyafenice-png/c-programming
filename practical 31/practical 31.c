#include <stdio.h>
#include <stdlib.h>

int main() {
    int size1, size2;
    char *summary;
    printf("id no:25ce106\n");
    printf("Enter initial summary size: ");
    scanf("%d", &size1);
    summary = (char *)calloc(size1, sizeof(char));

    if (summary == NULL) {
        printf("Memory allocation failed!");
        return 0;
    }
    printf("Enter initial article summary:\n");
    scanf(" %[^\n]", summary);
    printf("\nInitial Summary: %s\n", summary);
    printf("\nEnter new size to expand summary: ");
    scanf("%d", &size2);
    summary = (char *)realloc(summary, size2 * sizeof(char));

     if (summary == NULL) {
        printf("Memory reallocation failed!");
        return 0;
    }

    printf("Enter updated longer summary:\n");
    scanf(" %[^\n]", summary);

    printf("\nUpdated Summary after reallocation:\n%s\n", summary);

    free(summary);
    return 0;
    }

