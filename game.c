#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number, guess, nguessess=1;
    srand(time(0));
    number = rand()%1000 +1;
    do{
        printf("Guess number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please\n");

        }
        else if(guess<number){
            printf("Higher number please\n");
        }
        else{
            printf("You guessed it in %d attempts\n",nguessess);
        }
        nguessess++;
    }while(guess!=number);
}
