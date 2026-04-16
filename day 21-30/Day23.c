//Merge Two Sorted Linked Lists
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int main() {
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;
    int n1, n2, value;

    printf("Enter the number of nodes for the first linked list: ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        printf("Enter value for node %d of first linked list: ", i + 1);
        scanf("%d", &value);
        append(&head1, value);
    }

    printf("Enter the number of nodes for the second linked list: ");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        printf("Enter value for node %d of second linked list: ", i + 1);
        scanf("%d", &value);
        append(&head2, value);
    }

    struct Node* mergedHead = mergeSortedLists(head1, head2);
    printf("Merged Sorted Linked List: ");
    struct Node* current = mergedHead;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
    return 0;
}