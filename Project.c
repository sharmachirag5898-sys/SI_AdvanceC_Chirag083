#include<stdio.h>
#include<stdlib.h>

int main(){

    int Player;
    int ComputerJi;

    printf("1. Rock \n2. Paper \n3. Scissor \n");

    printf("Enter Your Choice:- ");
    scanf("%d", &Player);

    ComputerJi = rand()%3 + 1;

    printf("ComputerJi's Choice = %d\n", ComputerJi);

    if((Player == 1 && ComputerJi == 3) || (Player == 2 && ComputerJi == 1) || (Player == 3 && ComputerJi == 2)){
        printf("Result :- Player Wins");
    }
    else if(Player==ComputerJi){
        printf("Result :- Same Choices So, It's A Draw\n (No one Gets the point)");
    }
    else{
        printf("Result :- ComputerJi Wins");
    }


    return 0;
}