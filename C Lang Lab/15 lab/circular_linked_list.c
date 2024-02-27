/*
	15.2 write a menu driven program to implement following oprations on the Circular Linked List.
		* Insert a node at the beginning of the linked list. [B]
		* Insert a node at the end of the linked list [B]
		* Display the list [B]
		* Delete a specific node [C]
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node* link;
};

struct Node* first = NULL;

void insertAtBeginning(int info);
void insertAtEnd(int info);
void displayList();
void deleteNode(int key);

void main() {
    char choice;
    int info, key;

    do {
        printf("\nCircular Linked List Operations\n");
        printf("1. Insert a node at the beginning\n");
        printf("2. Insert a node at the end\n");
        printf("3. Display the list\n");
        printf("4. Delete a specific node\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch(choice) {
            case '1':
                printf("Enter info to insert at the beginning: ");
                scanf("%d", &info);
                insertAtBeginning(info);
                break;
            case '2':
                printf("Enter info to insert at the end: ");
                scanf("%d", &info);
                insertAtEnd(info);
                break;
            case '3':
                printf("Circular Linked List: ");
                displayList();
                break;
            case '4':
                printf("Enter the info of the node to delete: ");
                scanf("%d", &key);
                deleteNode(key);
                break;
            case '5':
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while(choice != '5');
}

void insertAtBeginning(int info) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->info = info;
    if (first == NULL) {
        first = newNode;
        newNode->link = first;
    } else {
        struct Node* temp = first;
        while (temp->link != first) {
            temp = temp->link;
        }
        temp->link = newNode;
        newNode->link = first;
        first = newNode;
    }
    printf("Node inserted at the beginning successfully.\n");
}

void insertAtEnd(int info) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->info = info;
    if (first == NULL) {
        first = newNode;
        newNode->link = first;
    } else {
        struct Node* temp = first;
        while (temp->link != first) {
            temp = temp->link;
        }
        temp->link = newNode;
        newNode->link = first;
    }
    printf("Node inserted at the end successfully.\n");
}

void displayList() {
    if (first == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = first;
    do {
        printf("%d ", temp->info);
        temp = temp->link;
    } while (temp != first);
    printf("\n");
}

void deleteNode(int key) {
    if (first == NULL) {
        printf("List is empty. Deletion failed.\n");
        return;
    }
    struct Node* temp = first, *prev = NULL;
    do {
        if (temp->info == key) {
            if (temp == first) {
                struct Node* last = first;
                while (last->link != first)
                    last = last->link;
                if (first == last) {
                    free(first);
                    first = NULL;
                    printf("Node deleted successfully.\n");
                    return;
                }
                last->link = first->link;
                free(first);
                first = last->link;
                printf("Node deleted successfully.\n");
                return;
            }
            prev->link = temp->link;
            free(temp);
            printf("Node deleted successfully.\n");
            return;
        }
        prev = temp;
        temp = temp->link;
    } while (temp != first);
    printf("Node with info %d not found.\n", key);
}
