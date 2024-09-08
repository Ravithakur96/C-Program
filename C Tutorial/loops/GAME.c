#include <stdio.h> //GAME GENERATE BY RAVI
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("the number is %d\n", number);
    do
    {
        printf("Guess the number between 1 to 100 ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower number please\n");
        }
        else if (guess < number)
        {
            printf("higher numer please\n");
        }
        else
        {
            printf("you guessed it in %d\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    return 0;
}