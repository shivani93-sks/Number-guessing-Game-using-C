#include<stdio.h>       //printf(),scanf()
#include<stdlib.h>      // rand(),srand()
#include<time.h>        //time()

int main(){
	int random,guess;
	int no_of_guess=0;
    srand(time(NULL));		//number will change with each run
	system("cls");
    system("COLOR 41");
	system("pause");


    printf("-----Welcome to the world of GUESSING NUMBERS-----\n");
    random=rand()%100+1;				//generate 1-99 numbers
   
   	do{
   		printf("\nPlease enter your Guess between (1-100): ");
   		scanf("%d",&guess);
   		no_of_guess++;
   		
   		if(guess<random)
   			printf("guess a larger number!\n");
		else if(guess>random)
			printf("guess a smaller number!\n");
		else
			printf("\nCongratulations !!!You have succesfully guessed the number in %d attempts",no_of_guess);
	   }while(guess!=random);
	   
	   printf("\nBye Bye! Thanks for Playing.");
	   
return 0;


}