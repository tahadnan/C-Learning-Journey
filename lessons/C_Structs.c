#include <stdio.h>
#include <string.h>

struct Player{
    char name[12];
    int score;
};

void display_player_info(struct Player Player);

void display_player_info(struct Player Player){
    printf("Name: %s\nScore: %d\n",Player.name, Player.score);
}

int main(){
     /*
     struct <=> Collection of related members ("variables").
                They can be of different data types.
                Listed under one name in a block of memory.
                VERY SIMILAR, NOT THE SAME, but VERY SIMILAR to classes in other languages (but no methods).
     */

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Taha");
    strcpy(player2.name, "Yasser");

    player1.score = 69;
    player2.score = 75;

    display_player_info(player1);


    return 0;
}