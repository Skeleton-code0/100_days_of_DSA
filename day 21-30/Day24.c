//Delete First Occurrence of a Key
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
    printf("Enter the key to delete: ");
    scanf("%d", &key);
    struct Node* current = head;
    struct Node* prev = NULL;
    while (current != NULL) {
        if (current->data == key) {
            if (prev == NULL) {
                head = current->next;
            } else {
                prev->next = current->next;
            }
            free(current);
            break;
        }
        prev = current;
        current = current->next;
    }
    printf("Linked List after deletion: ");
    current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
    return 0;
}