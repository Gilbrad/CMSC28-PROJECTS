#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUEUE 9
#define MAX_CHAR 256

struct CounterQueue{
    int front, rear;
    char name[MAX_QUEUE][MAX_CHAR];
    float price[MAX_QUEUE];
};

void initQueue(struct CounterQueue* queue);
int isEmpty(struct CounterQueue* queue);
char *front(struct CounterQueue* queue);
void enqueue(struct CounterQueue* queue, char name[], float price);
char *dequeue(struct CounterQueue* queue);
void closingTime(struct CounterQueue* queue);

int main(){
    int choice;
    struct CounterQueue queue;
    char name[MAX_CHAR];
    float price;
    char* served_order;

    initQueue(&queue);

    do{
        printf("SM Polomolok Supermarket Counter 69:\n");
        printf("\t[1] Fall in Line\n");
        printf("\t[2] Serve Customer\n");
        printf("\t[3] Next Customer\n");
        printf("\t[4] Closing Time!\n");
        printf("\t[0] Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter price: ");
                scanf("%f", &price);
                enqueue(&queue, name, price);
                break;
            case 2:
                served_order = dequeue(&queue);
                if(served_order != NULL){
                    printf("%s\n", served_order);
                }
                break;
            case 3:
                printf("%s\n", front(&queue));
                break;
            case 4:
                closingTime(&queue);
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 0);
    printf("SM Polomolok Supermarket Counter 69 is temporarily closing for maintenance!");
    return 0;
}

void initQueue(struct CounterQueue* queue){
    queue->front = -1;
    queue->rear = -1;
}

int isEmpty(struct CounterQueue* queue){
    return (queue->front == -1 && queue->rear == -1);
}

char *front(struct CounterQueue* queue){
    if(isEmpty(queue)){
       return "The queue is EMPTY, no one is waiting!";
    }
    char *result = (char *)malloc(MAX_CHAR * sizeof(char));
    sprintf(result, "Next Order: For %s with total amount playable of %f", queue->name[queue->front], queue->price[queue->front]);
    return result;
}

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