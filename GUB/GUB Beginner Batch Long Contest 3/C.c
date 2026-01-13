#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    int seen[max_val + 1];
    for (int i = 0; i <= max_val; i++) {
        seen[i] = 0;
    }

    int distinct_count = 0;
    for (int i = 0; i < n; i++) {
        if (seen[arr[i]] == 0) {
            seen[arr[i]] = 1;
            distinct_count++;
        }
    }

    printf("%d\n", distinct_count);
    return 0;
}
