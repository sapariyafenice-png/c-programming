#include <stdio.h>

int maxProfit(int prices[], int n) {
    int max_profit = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int profit = prices[j] - prices[i];
            if (profit > max_profit) {
                max_profit = profit;
            }
        }
    }
    return max_profit;
}

int main() {
    int prices[] = {20, 25, 15, 30, 10, 50};
    int n = sizeof(prices) / sizeof(prices[0]);

    int result = maxProfit(prices, n);
    printf("%d\n", result);

    return 0;
}
