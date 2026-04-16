// Count Subarrays with Sum Zero
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE];
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < size; i++) {
        int sum = 0;
        for (int j = i; j < size; j++) {
            sum += arr[j];
            if (sum == 0) {
                count++;
            }
        }
    }
    printf("Number of subarrays with sum zero: %d\n", count);
    return 0;
}