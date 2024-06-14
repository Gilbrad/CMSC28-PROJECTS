#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUEUE 9  // Maximum number of items in the queue
#define MAX_CHAR 256  // Maximum length of a name

// Struct for the queue
struct CounterQueue{
    int front, rear;  // Indices for the front and rear of the queue
    char name[MAX_QUEUE][MAX_CHAR];  // Array of names
    float price[MAX_QUEUE];  // Array of prices
};

// Function prototypes
void initQueue(struct CounterQueue* queue);  // Initialize the queue
int isEmpty(struct CounterQueue* queue);  // Check if the queue is empty
char *front(struct CounterQueue* queue);  // Get the name at the front of the queue
void enqueue(struct CounterQueue* queue, char name[], float price);  // Add an item to the queue
char *dequeue(struct CounterQueue* queue);  // Remove an item from the queue
void closingTime(struct CounterQueue* queue);  // Serve all customers in the queue

int main(){
    int choice;  // User's menu choice
    struct CounterQueue queue;  // The queue
    char name[MAX_CHAR];  // Name input by user
    float price;  // Price input by user
    char* served_order;  // Order served by dequeue

    initQueue(&queue);  // Initialize the queue

    // Main menu loop
    do{
        // Print menu
        printf("SM Polomolok Supermarket Counter 69:\n");
        printf("\t[1] Fall in Line\n");
        printf("\t[2] Serve Customer\n");
        printf("\t[3] Next Customer\n");
        printf("\t[4] Closing Time!\n");
        printf("\t[0] Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);  // Get user's choice

        // Process user's choice
        switch(choice){
            case 1:  // Fall in Line
                printf("Enter name: ");
                scanf("%s", name);  // Get name
                printf("Enter price: ");
                scanf("%f", &price);  // Get price
                enqueue(&queue, name, price);  // Add to queue
                break;
            case 2:  // Serve Customer
                served_order = dequeue(&queue);  // Serve customer
                if(served_order != NULL){
                    printf("%s\n", served_order);  // Print served order
                }
                break;
            case 3:  // Next Customer
                printf("%s\n", front(&queue));  // Print next customer
                break;
            case 4:  // Closing Time
                closingTime(&queue);  // Serve all customers
                break;
            default:  // Invalid choice
                printf("Invalid choice!\n");
        }
    } while(choice != 0);  // Exit on 0
    printf("SM Polomolok Supermarket Counter 69 is temporarily closing for maintenance!");
    return 0;
}

// Initialize the queue
void initQueue(struct CounterQueue* queue){
    queue->front = -1;
    queue->rear = -1;
}

// Check if the queue is empty
int isEmpty(struct CounterQueue* queue){
    return (queue->front == -1 && queue->rear == -1);
}

// Get the name at the front of the queue
char *front(struct CounterQueue* queue){
    if(isEmpty(queue)){
       return "The queue is EMPTY, no one is waiting!";
    }
    char *result = (char *)malloc(MAX_CHAR * sizeof(char));
    sprintf(result, "Next Order: For %s with total amount playable of %f", queue->name[queue->front], queue->price[queue->front]);
    return result;
}

// Add an item to the queue
void enqueue(struct CounterQueue* queue, char name[], float price){
    if(queue->rear == MAX_QUEUE){
        printf("The queue is FULL, no more orders can be added!\n");
        return;
    } else if (isEmpty(queue)){
        queue->front = 0;
        queue->rear = 0;
    } else {
        queue->rear++;
    }
    strcpy(queue->name[queue->rear], name);
    queue->price[queue->rear] = price;
}

// Remove an item from the queue
char *dequeue(struct CounterQueue* queue){
    char name[MAX_CHAR];
    float price;
    
    if(isEmpty(queue)){
        return "The queue is EMPTY, no one is waiting!";
    }

    strcpy(name, queue->name[queue->front]);
    price = queue->price[queue->front];
    
    if(queue->front == queue->rear){
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front++;
    }

    char *result = (char *)malloc(MAX_CHAR * sizeof(char));
    sprintf(result, "Now serving %s with total amount playable of %f", name, price);
    return result;
}

// Serve all customers in the queue
void closingTime(struct CounterQueue* queue){
    if(isEmpty(queue)){
        printf("The queue is EMPTY, no one is waiting!\n");
        return;
    }
    while(!isEmpty(queue)){
        printf(dequeue(queue));
    }
    printf("Every customer has been served!\n");
}