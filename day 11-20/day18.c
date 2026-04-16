// Rotate Array by K Positions
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int size, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    k = k % size;
    int rotated[MAX_SIZE];
    for (int i = 0; i < size; i++) {
        rotated[(i + k) % size] = arr[i];
    }
    printf("Array after rotation:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}