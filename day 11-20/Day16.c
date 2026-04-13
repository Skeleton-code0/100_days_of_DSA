// Frequency Counter in Array
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE];
    int freq[MAX_SIZE] = {0};
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Count frequency
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    printf("Element\tFrequency\n");
    for (int i = 0; i < MAX_SIZE; i++) {
        if (freq[i] > 0) {
            printf("%d\t%d\n", i, freq[i]);
        }
    }

    return 0;
}