#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node *front = NULL, *rear = NULL;
int sz = 0;
void push_front(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->prev = NULL;
    temp->next = front;

    if (front != NULL)
        front->prev = temp;
    else
        rear = temp;

    front = temp;
    sz++;
}
void push_back(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    temp->prev = rear;

    if (rear != NULL)
        rear->next = temp;
    else
        front = temp;

    rear = temp;
    sz++;
}
void pop_front() {
    if (front == NULL) {
        printf("-1\n");
        return;
    }
    struct Node* temp = front;
    printf("%d\n", temp->data);

    front = front->next;
    if (front != NULL)
        front->prev = NULL;
    else
        rear = NULL;
    free(temp);
    sz--;
}

void pop_back() {
    if (rear == NULL) {
        printf("-1\n");
        return;
    }
    struct Node* temp = rear;
    printf("%d\n", temp->data);

    rear = rear->prev;
    if (rear != NULL)
        rear->next = NULL;
    else
        front = NULL;

    free(temp);
    sz--;
}

void get_front() {
    if (front == NULL) printf("-1\n");
    else printf("%d\n", front->data);
}

void get_back() {
    if (rear == NULL) printf("-1\n");
    else printf("%d\n", rear->data);
}

void is_empty() {
    printf("%d\n", (sz == 0));
}

void size() {
    printf("%d\n", sz);
}

void display() {
    struct Node* temp = front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main() {
    int n, x;
    char op[20];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", op);

        if (strcmp(op, "push_front") == 0) {
            scanf("%d", &x);
            push_front(x);
        }
        else if (strcmp(op, "push_back") == 0) {
            scanf("%d", &x);
            push_back(x);
        }
        else if (strcmp(op, "pop_front") == 0) {
            pop_front();
        }
        else if (strcmp(op, "pop_back") == 0) {
            pop_back();
        }
        else if (strcmp(op, "front") == 0) {
            get_front();
        }
        else if (strcmp(op, "back") == 0) {
            get_back();
        }
        else if (strcmp(op, "empty") == 0) {
            is_empty();
        }
        else if (strcmp(op, "size") == 0) {
            size();
        }
        else if (strcmp(op, "display") == 0) {
            display();
        }
    }
    return 0;
}