//Author : Chaai visva R
//Starting Time of this code : 21:37 pm
//Month/date/year : 02/22/2023
//Game Name : Stone paper scissors
//Using : C programming


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#define Stone 1
#define paper 2
#define scissors 3

int main()
{
    srand(time(NULL));
    int player_choice = 0;
    int ai_choice = 0;
    bool match_tie = false;
    do
    {
        printf("\nSELECT THE CHOICE.\n");
        printf("1. STONE\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("PLAYER CHOICE IS : ");
        scanf("%d",&player_choice);

        ai_choice=(rand() % 3) + 1;

        if(ai_choice == Stone)
        {
            printf("\n AI CHOICE IS STONE.");
        }
        else if(ai_choice == paper)
        {
            printf("\n AI CHOICE IS PAPER.");
        }
        else if(ai_choice == scissors)
        {
            printf("\n AI CHOICE IS SCISSORS.");
        }

        match_tie = false;

        if((player_choice == Stone) && (ai_choice == scissors))
        {
            printf("\n ** PLAYER WIN ** \n");
        }
        else if((player_choice == Stone) && (ai_choice == paper))
        {
            printf("\n ** AI WIN ** \n");
        }
        else if((player_choice == scissors) && (ai_choice == Stone))
        {
            printf("\n ** AI WIN ** \n");
        }
        else if((player_choice == scissors) && (ai_choice == paper))
        {
            printf("\n ** PLAYER WIN ** \n");
        }
        else if((player_choice == paper) && (ai_choice == Stone))
        {
            printf("\n ** PLAYER WIN ** \n");
        }
        else if((player_choice == paper) && (ai_choice == scissors))
        {
            printf("\n ** AI WIN ** \n");
        }
        else
        {
            printf("\n DRAW! PLAY AGAIN!...");
            match_tie = true;
        }

    }while(match_tie);

    return 0;
}
