// Remove Duplicates from Sorted Array

#include <stdio.h>
int main()
{
    int n, j = 0;
    int arr[100], temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n - 1];

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < j; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}