#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node** head, int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
}

void deleteNode(struct Node** head, int value) {
    struct Node *temp = *head, *prev = NULL;

    if (temp && temp->data == value) {
        *head = temp->next;
        free(temp);
        printf("Deleted %d\n", value);
        return;
    }

    while (temp && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (!temp) {
        printf("Value %d not found\n", value);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Deleted %d\n", value);
}

void display(struct Node* head) {
    if (!head) {
        printf("List is empty\n");
        return;
    }

    printf("List: ");
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int choice, value;

    while (1) {
        printf("\n1.Insert 2.Delete 3.Display 4.Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter value: ");
            scanf("%d", &value);
            insert(&head, value);
        }
        else if (choice == 2) {
            printf("Enter value: ");
            scanf("%d", &value);
            deleteNode(&head, value);
        }
        else if (choice == 3) {
            display(head);
        }
        else if (choice == 4) {
            break;
        }
        else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}