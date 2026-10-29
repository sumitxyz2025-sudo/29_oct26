#include<stdio.h>
int main()
{
 int secret=25;
 int guess;
 int attempts=0;
 printf("====number guessing game====\n");
printf("guess the number betweeen 1 and 50: ");
scanf("%d",&guess);

while (guess!= secret)
{
    attempts++;
    if(guess>secret){
        printf("too high! try again.\n");

    }
    else{
        printf("too low! try again.\n");
    }
    printf("\nguess a number between 1 nad 50:");
    scanf("%d",&guess);
}
attempts++;
printf("\ncongratulations! you guessed the right number.\n");
printf("total attempts:%d\n",attempts);
printf("====game over====");
return 0;
}