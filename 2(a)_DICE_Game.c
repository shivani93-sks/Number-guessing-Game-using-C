#include<stdio.h>       //printf(),scanf()
#include<stdlib.h>      // rand(),srand(),system()
#include<time.h>        //time()
//#include<stdbool.h>     // bool (data type)
int main(){
    int choice;
    int dice1,dice2,sum;
    int playerscore=0,compscore=0;
   

    system("cls");
    printf("\33[1m\33[96m ---------------Dice Game!---------------\n\33[0m\33[0m");     // \n for next line bold(\33[1m - \33[0m)   96(color)
    printf("\nYour goal is to roll a 7 or an 11.\n");
    printf("\npress ENTER to begin.\n");
    getchar();


    do{
        system("cls");                                                  //clear(linux)
        printf("Your score is: %d\n",playerscore);
        printf("The computer's score is: %d\n",compscore);

        srand(time(NULL));
        dice1=(rand()%6)+1;
        dice2=(rand()%6)+1;

        printf("\nDice 1 value: %d",dice1);
        printf("\nDice 2 value: %d",dice2);

        sum=dice1+dice2;
        printf("\nYour sum is %d\n",sum);

        if(sum==7 || sum==11){
            printf("\nCongratulations!%c\nYour sum is %d, you win!",1,sum);
            ++playerscore;
        }
        else{
            printf("\nYour sum is not 7 or 11, you lose.");
            ++compscore;
        }

        //verify if the player would like to play again!
        printf("\n\nWould you like to play again?\n[1]yes\t[2]no\n>");
        scanf("%d",&choice);

        // if(choice!=1){
        //     if(choice==2){
        //         printf("\n\nOK!");
        //         break;
        //     }
        //     else{
        //     printf("inavlid!. Please enter correct option\n");
        //     continue;

        // }
        // }


    }while(choice==1);

    system("cls");
    printf("\33[1m\33[96m\nThanks for playing!\33[0m\33[0m");
    printf("\nHere are the final scores:\n\n");
    printf("Your score : %d\n",playerscore);
    printf("The computer's score : %d\n",compscore);



return 0;
}