#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

// Functions Prototypes
bool valueInArray(int val, int *arr, size_t n);
void printTicTacToeBoard(char tic_tac_toe_board[3][3]);
char horizontalCheck(char tic_tac_toe_board[3][3]);
char verticalCheck(char tic_tac_toe_board[3][3]);
char diagonalCheck(char tic_tac_toe_board[3][3]);
char checkWinner(char tic_tac_toe_board[3][3]);
int validateInput(int input);
int readColumn(int row, int column);
int verifyColumnLegibility(char tic_tac_toe_board[3][3], int column);

// Defining needed Functions

// A function to check if a certain value is in a certain array
bool valueInArray(int val, int *arr, size_t n){
    for(size_t i = 0; i < n; i++) {
        if(arr[i] == val)
            return true;
    }
    return false;
}

// A function to print the Game Board  
void printTicTacToeBoard(char tic_tac_toe_board[3][3]){
    for (int i = 0; i < 3; i++) {
        printf("\t\t\t %c | %c | %c \n", tic_tac_toe_board[i][0], tic_tac_toe_board[i][1], tic_tac_toe_board[i][2]); 
        if (i < 2) {
            printf("\t\t\t---|---|---\n");
        }       
    }
}

// A function to perform a horizontal check, for our game we need three horizontal checks 
char horizontalCheck(char tic_tac_toe_board[3][3]){
    for (int i = 0; i < 3; i++) {
        if (tic_tac_toe_board[i][0] == tic_tac_toe_board[i][1] && tic_tac_toe_board[i][1] == tic_tac_toe_board[i][2]) {
            return tic_tac_toe_board[i][0];
        }   
    }
    return 'N';
}

// A function to perform a vertical check, for our game we need three vertical checks 
char verticalCheck(char tic_tac_toe_board[3][3]){
    for (int i = 0; i < 3; i++) {
        if (tic_tac_toe_board[0][i] == tic_tac_toe_board[1][i] && tic_tac_toe_board[1][i] == tic_tac_toe_board[2][i]) {
            return tic_tac_toe_board[0][i];
        }
    }
    return 'N';
}

// A function to perform a diagonal check, for our game we need two diagonal checks 
char diagonalCheck(char tic_tac_toe_board[3][3]){
    if (tic_tac_toe_board[0][0] == tic_tac_toe_board[1][1] && tic_tac_toe_board[1][1] == tic_tac_toe_board[2][2]) {
        return tic_tac_toe_board[0][0];
    }
    else if (tic_tac_toe_board[2][0] == tic_tac_toe_board[1][1] && tic_tac_toe_board[1][1] == tic_tac_toe_board[0][2]) {
        return tic_tac_toe_board[2][0];
    }

    return 'N';
}

// A function that will be run PERIODICALLY on each turn, to determine if there is a winner
char checkWinner(char tic_tac_toe_board[3][3]){
    char vertical_check = verticalCheck(tic_tac_toe_board);
    char horizontal_check = horizontalCheck(tic_tac_toe_board);
    char diagonal_check = diagonalCheck(tic_tac_toe_board);

    if (vertical_check != 'N') {
        return vertical_check; 
    }
    else if (horizontal_check != 'N') {
        return horizontal_check;
    }
    else if (diagonal_check != 'N') {
        return diagonal_check;
    }

    return 'N';
}

// A function to validate user input, ensuring that it respects the type and range
int validateInput(int input){
    // printf("From validateInput() input = %d", input);
    if (input >= 1 && input <= 9) {
        return input;
    }
    return -1;
}

// A function that translates the user input to array index
int readColumn(int row, int column){
    if (row == 0) {
        column -= 1;
        // printf("From readColumn() func ROW = 0; column = %d\n", column);
        if (column >= 0 && column <= 2) {
            return column;
        }
    }
    else if (row == 1) {
        column -= 4;
        // printf("From readColumn() func ROW = 1; column = %d\n", column);
        if (column >= 0 && column <= 2) {
            return column;
        }
    }
    else if (row == 2) {
        column -= 7;
        // printf("From readColumn() func ROW = 2; column = %d\n", column);
        if (column >= 0 && column <= 2) {
            return column;
        }
    }
    return -1;
}

// A function that verifies if a certain column can be occupied
int verifyColumnLegibility(char tic_tac_toe_board[3][3], int column){
    int first_row[3] = {1,2,3};
    int second_row[3] = {4,5,6};
    int third_row[3] = {7,8,9};

    if (valueInArray(column, first_row, sizeof(first_row) / sizeof(int))) {
        column = readColumn(0, column);
        // printf("From verifyColumnLegibility() func ROW = 0; column = %d\n", column);
        if (tic_tac_toe_board[0][column] != 'X' && tic_tac_toe_board[0][column] != 'O') {
            return 0;
        }
    }

    else if (valueInArray(column, second_row, sizeof(second_row) / sizeof(int))) {
        column = readColumn(1, column);
        // printf("From verifyColumnLegibility() func ROW = 1; column = %d\n", column);
        if (tic_tac_toe_board[1][column] != 'X' && tic_tac_toe_board[1][column] != 'O') {
            return 1;
        }
    }

    else if (valueInArray(column, third_row, sizeof(third_row) / sizeof(int))) {
        column = readColumn(2, column);
        // printf("From verifyColumnLegibility() func ROW = 2; column = %d\n", column);
        if (tic_tac_toe_board[2][column] != 'X' && tic_tac_toe_board[2][column] != 'O') {
            return 2;
        }
    }

    return -1;
}

// The main game function combining all previous functions
void TicTacToe(){
    char tic_tac_toe_board[3][3] = {{'1','2','3'},
                                    {'4','5','6'},
                                    {'7','8','9'}
                                    };

    size_t tic_tac_toe_board_size = sizeof(tic_tac_toe_board) / sizeof(char);
    int turns = 1; 
    char game_winner = 'N';
    char players[2] = {'X','O'};

    int column;

    printf("Welcome to the Tic-Tac-Toe game, made with C!\n");
    printf("The rules are simple:\n");
    printf("\t0 - The first player is chosen randomly, and you can choose to play as either X or O.\n");
    printf("\t1 - Each turn, one prompt will be given to the X player or to the O player (except on the last turn).\n");
    printf("\t2 - Only integers from 1 to 9 are accepted as valid inputs.\n");
    printf("\t3 - The board will be updated and displayed after every turn.\n");
    printf("\t4 - The game ends when a player gets 3 symbols in a row, column, or diagonal.\n");
    printf("\t5 - If all 9 squares are filled without a winner, the game ends in a draw.\n\n");

    printTicTacToeBoard(tic_tac_toe_board);

    srand(time(NULL));
    int random_index = rand() % 2;
    char player = players[random_index];

    printf("The first player to play is %c\n", player);

    while (turns <= 9) {
        printf("TURN #%d\n", turns);

        printf("Player %c, please choose a valid board column 1~9:\n", player);
        scanf("%d", &column);

        if (validateInput(column) != -1) {
            int column_legibility = verifyColumnLegibility(tic_tac_toe_board, column);
            if (column_legibility != -1) {
                int row = column_legibility;
                printf("Column %d played by player %c\n", column, player);
                column = readColumn(row, column);
                tic_tac_toe_board[row][column] = player;

                char game_state = checkWinner(tic_tac_toe_board);
                if (game_state != 'N') {
                    game_winner = game_state;
                    printf("Player %c won, Congrats!\n", game_state);
                    break;
                }
                else {
                    player = (player == 'X') ? 'O':'X';
                    turns++;
                    printTicTacToeBoard(tic_tac_toe_board);
                    printf("No winner yet, CONTINUE\n");
                }
            }
            else {
                printf("Invalid column, already took by the other player.");
            }
        }

        else{
            printf("Invalid input.\n");
            continue;
        }
    }

    if (game_winner != 'N') {
        printf("Game ended in %d turns with Player %c win !\n", turns, game_winner);
    } else{
        printf("Game ended in %d turns with a Tie.\n", turns);
    }   
}

int main(){
    
    TicTacToe();

    return 0;
}
