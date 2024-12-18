#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input the size of the arrowhead (n must be odd)

    // Print the top half of the arrowhead (increasing stars)
    for (int i = 1; i <= (n / 2) + 1; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the bottom half of the arrowhead (decreasing stars)
    for (int i = (n / 2); i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
