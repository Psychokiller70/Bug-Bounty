#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));   // Seed for random numbers
    int num = rand() % 100; // 0-99 random number
    printf("Random Number: %d\n", num);

    int car = num;

    if (car > 50) {
        printf("flash");
    } 
    else if (car < 30) {
        printf("non");
    } 
    else {
        printf("medium");
    }

    return 0;
}