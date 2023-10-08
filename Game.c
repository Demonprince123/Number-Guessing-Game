#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int number, guess, nguess = 1;
  srand(time(0));
  number = rand() % 1000 + 1; // generates a random number between 1 and 100
                              //  printf("The number is %d \n",number);
  // keep the running loop untill the number is guessed
  do
  {
    printf("Guess the number between 1 to 1000 \n");
    scanf("%d", &guess);
    if (guess > number)
    {
      printf("lower number please! \n ");
    }
    else if (guess < number)
    {
      printf("higher number please!");
    }
    else
    {
      printf(" BINGO!!! you guessed it in  %d attempts \n", nguess);
    }
    nguess++;
  } while (guess != number);
}