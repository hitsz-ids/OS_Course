#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct node_t{
    int tickets;
    char job;
    struct node_t *next;
} node_t;

int getrandom(int min, int max){
    srand(time(NULL));
    int r = min + rand() % (max - min);
    printf("radom %d\n", r);
    return r;
}

int main(){
    node_t a = {
        .tickets = 100,
	.job = 'A',
        .next = NULL,
    };
    node_t *head = &a;

    node_t b = {
        .tickets = 50,
	.job = 'B',
        .next = NULL,
    };
    a.next = &b;

    node_t c = {
        .tickets = 250,
	.job = 'C',
        .next = NULL,
    };
    b.next = &c;

    int totaltickets = 1000;

    // counter: used to track if we’ve found the winner yet
    int counter = 0;

    // winner: use some call to a random number generator to
    // get a value, between 0 and the total # of tickets
    int winner = getrandom(0, totaltickets);

    // current: use this to walk through the list of jobs
    node_t *current = head;

    // loop until the sum of ticket values is > the winner
    while (current) {
        printf("current is: %c, tickets is: %d, counter is: %d\n", current->job, current->tickets, counter);
        counter = counter + current->tickets;
        if (counter > winner)
            break; // found the winner
        current = current->next;
    }
    // ’current’ is the winner: schedule it...
    if(current)
        printf("Winner is: %c, tickets is: %d\n", current->job, current->tickets);
    else
	printf("No winner\n");
}

