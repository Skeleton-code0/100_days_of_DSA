
#include <stdio.h>

int main() {
    int n, x, comparisons = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == x) {
            printf("Element found at position %d\n", i + 1);
            printf("Number of comparisons: %d\n", comparisons);
            return 0;
        }
    }

    printf("Element not found\n");
    printf("Number of comparisons: %d\n", comparisons);

    return 0;
}