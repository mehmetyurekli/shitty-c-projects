/*generate random number from 0-20
user should only be able to enter from 0-20
too high-too low
correct
only have 5 tries*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_GUESSES 5

int main() {
    int random_number;
    int get_number = 0;
    int takes;
    time_t t;
    srand((unsigned) time(&t));

    random_number = rand() % 21;

    for (takes = 0; takes <= MAX_GUESSES; takes++) {
        printf("You have %d tr%s left.", 5-takes, takes==5 ? "y" : "ies");
        printf("\nEnter a number(between 0-20): ");
        scanf("%d", &get_number);

        if (get_number < 0 || get_number > 20) {
            printf("Enter a number between 0-20!\n");
        }
        else if (get_number > random_number)
            printf("Too high.\n");
        else if (get_number < random_number)
            printf("Too low.\n");
        else {
            printf("Correct!\n");
            break;
        }
    }
    if ((get_number = random_number))
        printf("Bye!");
    else
        printf("You failed. The number was %d.", random_number);
    return 0;
}