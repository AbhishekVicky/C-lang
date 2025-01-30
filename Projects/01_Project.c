#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guess = 0;
    int guessed_number;

    // Print the generated random number
    // printf("Random number between 1 and 100: %d\n", randomNumber);

    do
    {
        printf("Enter a number :");
        scanf("%d", &guessed_number);
        if (guessed_number < randomNumber)
        {
            printf("Enter a higher number please!\n");
        }

        else if (guessed_number > randomNumber)
        {
            printf("Enter a lower number please!\n");
        }
        else
        {
            printf("Congrats!!\n");
        }

        no_of_guess++;

    } while (guessed_number != randomNumber);

    printf("You guessed the number in %d attempts", no_of_guess);

    return 0;
}
