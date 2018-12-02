#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    unsigned short number, guess;
    _Bool playerNumber=0, play=1;

    srand(time(NULL));
    number = 1 + rand() % 20; // Random number is generated

    while(play) {
        printf("\nIt's Player %d's turn\n", playerNumber+1);
        printf("Enter Your Guess, 1 - 20: ");
        scanf("%d", &guess);
        if ((guess<1) || (guess>20)) {
            printf("Invalid choice. Enter again.\n");
            continue;
        }
        printf("\n");
        if(guess < number) // if the guess is lower, output: the guess is too low
            printf("Your guess was too low.\n ");

        else if(guess > number) // if the guess is higher, output: the guess is too high
            printf("Your guess was too high.\n ");

        else /* is the guess is equal to the random number: Success!! */
            printf("Yes, you got it!! Player %d won!!\n", playerNumber+1);

        playerNumber = playerNumber ^ 1;
        play = number != guess;

    }
    return 0;

}
