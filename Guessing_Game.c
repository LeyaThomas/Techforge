#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
    int number, guess, num_guesses = 0, high_score,no_of_tries=10;
    char name[50];
    FILE *f;
    srand(time(NULL));
    number = rand() % 100 + 1;

    
    printf("Enter your name: ");
    scanf("%s",name);

    
    f = fopen("high_score.txt", "r");
    if (f == NULL) {
        high_score = 0;
    } else {
        fscanf(f, "%d", &high_score);
        fclose(f);
    }

    
    while (num_guesses < total_no_of_tries) {
        printf("Guess a number between 1 and 100 (guesses remaining: %d): ", no_of_tries - num_guesses);
        scanf("%d", &guess);
        num_guesses++;

        if (guess == number) {
            printf("Congratulations %s, you guessed the secret number in %d guesses!\n", name, num_guesses);
            if (num_guesses < high_score || high_score == 0) {
                
                high_score = (no_of_tries-num_guesses)*10;
                f = fopen("high_score.txt", "w");
                fprintf(f, "%d", high_score);
                fclose(f);
                printf("You set a new high score!\n");
            }
            break;
        } else if (guess < number) {
            printf("Too low!\n");
        } else {
            printf("Too high!\n");
        }
    }

    if (num_guesses == no_of_tries) {
        printf("Sorry %s, you ran out of guesses. The secret number was %d.\n", name, number);
    }

    return 0;
}
