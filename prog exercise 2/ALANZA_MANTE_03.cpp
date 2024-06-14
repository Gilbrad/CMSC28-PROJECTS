#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256  // Maximum size of the kitchenware item name
#define MAX_KITCHENWARE 10  // Maximum number of kitchenware items in the stack

// Define the Kitchenware struct, which represents a stack node
struct Kitchenware{
    char item[MAX];  // The name of the kitchenware item
    struct Kitchenware *next;  // Pointer to the next node in the stack
};

int kitchenware_amount = 0;  // The current number of kitchenware items in the stack

// Function prototypes
void push(struct Kitchenware **head, char item[]);
char* pop(struct Kitchenware **head);
int full(struct Kitchenware *head);
int empty(struct Kitchenware *head);
char* top(struct Kitchenware *head);
void makenull(struct Kitchenware **head);

int main(){
    int choice;
    struct Kitchenware *head = NULL;  // The head of the stack
    char item[MAX];  // Buffer to hold the name of a kitchenware item
    char* popped_item;  // Pointer to hold the name of the popped item
    char* top_item;  // Pointer to hold the name of the top item

    // Main loop
    do{
        // Print the menu
        printf("Kitchenware Washing Machine!\n");
        printf("\t[1] Add Kitchenware\n");
        printf("\t[2] Wash Kitchenware\n");
        printf("\t[3] Top Kitchenware\n");
        printf("\t[4] Wash All\n");
        printf("\t[0] Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        // Process the user's choice
        switch(choice){
            case 1:  // Add a kitchenware item
                printf("Enter kitchenware: ");
                scanf("%s", item);
                push(&head, item);
                break;
            case 2:  // Wash a kitchenware item
                popped_item = pop(&head);
                if(popped_item != NULL){
                    printf("Washing %s\n", popped_item);
                    free(popped_item); // Free the memory allocated by pop
                }
                break;
            case 3:  // Show the top kitchenware item
                top_item = top(head);
                if(top_item != NULL){
                    printf("Top kitchenware: %s\n", top_item);
                    // No need to free top_item because top doesn't allocate memory
                }
                break;
            case 4:  // Wash all kitchenware items
                makenull(&head);
                break;
            case 0:  // Exit
                break;
            default:  // Invalid choice
                printf("Invalid choice!\n");
        }
    }while(choice != 0);

    printf("Goodbye!\n");
    return 0;
}

// Check if the stack is full
int full(struct Kitchenware *head){
    return kitchenware_amount >= MAX_KITCHENWARE;
}

// Check if the stack is empty
int empty(struct Kitchenware *head){
    return head == NULL;
}

// Push a kitchenware item onto the stack
void push(struct Kitchenware **head, char item[]){
    struct Kitchenware *new_node = (struct Kitchenware*)malloc(sizeof(struct Kitchenware));
    if(full(*head)){
        printf("Washing Machine is already full!\n");
        return;
    }
    strcpy(new_node->item, item);
    new_node->next = *head;
    *head = new_node;
    kitchenware_amount++;
}

// Pop a kitchenware item from the stack
char* pop(struct Kitchenware **head){
    if(empty(*head)){
        printf("Washing Machine is already empty!\n");
        return NULL;
    }
    struct Kitchenware *temp = *head;
    char *popped_item = (char*)malloc(sizeof(char) * MAX);
    strcpy(popped_item, temp->item);
    *head = temp->next;
    free(temp);
    kitchenware_amount--;

    return popped_item;
}

// Get the top kitchenware item from the stack
char* top(struct Kitchenware *head){
    if(empty(head)){
        printf("Washing Machine is empty!\n");
        return NULL;
    }
    return head->item;
}

// Remove all kitchenware items from the stack
void makenull(struct Kitchenware **head){
    struct Kitchenware* current = *head; 
    struct Kitchenware* next;
    if(empty(*head)){
        printf("Washing Machine is already empty!\n");
        return;
    }
    while(current != NULL){ 
        next = current->next; 
        free(current);
        current = next;
    }
    *head = NULL;
    printf("All kitchenware has been washed.\n");
}