//Count Occurrences of an Element in Linked List
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int main () {
    struct Node* head = NULL;
    int n, value, key;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        append(&head, value);
    }
    printf("Enter the key to count occurrences: ");
    scanf("%d", &key);
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            count++;
        }
        current = current->next;
    }
    printf("Number of occurrences of %d: %d\n", key, count);
    return 0;
}