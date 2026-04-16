// Pair Sum Closest to Zero
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
    int closestSum = arr[0] + arr[1];
    int num1 = arr[0], num2 = arr[1];
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            int sum = arr[i] + arr[j];
            if (abs(sum) < abs(closestSum)) {
                closestSum = sum;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }
    printf("Pair with sum closest to zero: (%d, %d) with sum %d\n", num1, num2, closestSum);
    return 0;
}