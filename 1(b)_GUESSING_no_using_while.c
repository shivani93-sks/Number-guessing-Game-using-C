#include<stdio.h>       //printf(),scanf()
#include<stdlib.h>      // rand(),srand()
#include<time.h>        //time()

int main(){
	int random,guess;
	int no_of_guess=0;
    srand(time(NULL));		//no. will change with each run
	system("COLOR 16");
	system("cls");
    
    printf("\n\n-----Welcome to the world of GUESSING NUMBERS-----\n");
    random=rand()%100+1;				//generate 1-99 numbers
   
   	while(1){
   		printf("\nPlease enter your Guess between (1-100): ");
   		scanf("%d",&guess);
   		no_of_guess++;
   		if(guess!=random){
   			if(guess<random)
   			printf("//guess a larger number!\n");
			if(guess>random)
			printf("//guess a smaller number!\n");
			}
		else{
			printf("\nCongratulations !!!You have succesfully guessed the number in %d attempts",no_of_guess);
			
			break;}
	   }
			
	   
	   printf("\nBye Bye! Thanks for Playing...");
	   printf("\ndeveloped by SKS\n\n");
	   
return 0;


}