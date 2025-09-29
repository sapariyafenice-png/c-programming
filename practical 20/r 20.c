#include <stdio.h>

int main() {
    int n;
    printf("Enter total number of participants (N): ");
    scanf("%d", &n);

    int sum = n * (n + 1) / 2;
    int id, total = 0;

    printf("Enter %d participant IDs:\n", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &id);
        total += id;
    }

    int missing = sum - total;
    printf("Missing participant ID is: %d\n", missing);

    return 0;
}
