#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define RED "\033[31m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

// Functions Prototypes
void printCell(char cell);
void printTicTacToeBoard(char tic_tac_toe_board[3][3]);
const char * getColoredPlayerSymbol(char symbol);
char checkWinner(char tic_tac_toe_board[3][3]);
bool isValidMove(char tic_tac_toe_board[3][3], int input, int* column, int*row);
void printIntro(void);
void TicTacToe(void);

// Defining needed Functions

// A function that prints each cell of the board based on the cell content
void printCell(char cell) {
    if (cell == 'X') {
        printf(BLUE " X "
            RESET);
    } else if (cell == 'O') {
        printf(RED " O "
            RESET);
    } else {
        printf(" %c ", cell);
    }
}

// A function to print the Game Board  
void printTicTacToeBoard(char tic_tac_toe_board[3][3]) {
    for (int row = 0; row < 3; row++) {
        printf("\t\t\t");
        for (int column = 0; column < 3; column++) {
            printCell(tic_tac_toe_board[row][column]);
            if (column < 2) {
                printf("|");
            }
        }
        printf("\n");
        if (row < 2) {
            printf("\t\t\t---|---|---\n");
        }
    }
}

// A function that returns colored symbols, Blue for X and Red for O  
const char * getColoredPlayerSymbol(char symbol) {
    switch (symbol) {
    case 'X':
        return BLUE "X"
        RESET;
    case 'O':
        return RED "O"
        RESET;
    default:
        return " ";
    }
}

// A function that will be run PERIODICALLY on each turn, to determine if there is a winner
char checkWinner(char tic_tac_toe_board[3][3]) {
    for (int i = 0; i < 3; i++){
        if (tic_tac_toe_board[i][0] == tic_tac_toe_board[i][1] && tic_tac_toe_board[i][1] == tic_tac_toe_board[i][2]) {
            return tic_tac_toe_board[i][0];
        }
        if (tic_tac_toe_board[0][i] == tic_tac_toe_board[1][i] && tic_tac_toe_board[1][i] == tic_tac_toe_board[2][i]) {
            return tic_tac_toe_board[0][i];
        }
    }
    if (tic_tac_toe_board[0][0] == tic_tac_toe_board[1][1] && tic_tac_toe_board[1][1] == tic_tac_toe_board[2][2]) {
        return tic_tac_toe_board[0][0];
    } else if (tic_tac_toe_board[2][0] == tic_tac_toe_board[1][1] && tic_tac_toe_board[1][1] == tic_tac_toe_board[0][2]) {
        return tic_tac_toe_board[2][0];
    }

    return 'N';
}

// A function that validates the player input
bool isValidMove(char tic_tac_toe_board[3][3], int input, int* column, int*row){
    if (input < 1 || input > 9){
        return false;
    }

    *row = (input - 1) / 3;
    *column = (input - 1) % 3;

    return (tic_tac_toe_board[*row][*column] != 'X' && tic_tac_toe_board[*row][*column] != 'O');
}

// A function to print the game intro
void printIntro(){
    printf("Welcome to the Tic-Tac-Toe game, made with C!\n");
    printf("The rules are simple:\n");
    printf("\t0 - The first player is chosen randomly, and you can choose to play as either X or O.\n");
    printf("\t1 - Each turn, one prompt will be given to the X player or to the O player (except on the last turn).\n");
    printf("\t2 - Only integers from 1 to 9 are accepted as valid inputs.\n");
    printf("\t3 - The board will be updated and displayed after every turn.\n");
    printf("\t4 - The game ends when a player gets 3 symbols in a row, column, or diagonal.\n");
    printf("\t5 - If all 9 squares are filled without a winner, the game ends in a draw.\n\n");
}

// The main game function combining all previous functions
void TicTacToe() {
    char tic_tac_toe_board[3][3] = {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };

    printIntro();
    printTicTacToeBoard(tic_tac_toe_board);

    int random_index = rand() % 2;
    char game_winner = 'N', players[2] = {'X','O'};
    int turns = 1, input;
    char player = players[random_index];

    printf("The first player to play is %s\n", getColoredPlayerSymbol(player));

    while (turns <= 9) {
        printf("TURN #%d\n", turns);
        printf("Player %s, please choose a valid board column 1~9:\n", getColoredPlayerSymbol(player));

        if (scanf("%d", &input) != 1) {
            printf("Invalid input.\n");
            while (getchar() != '\n');
            continue;
        }

        int row, column;
        if (isValidMove(tic_tac_toe_board, input, &column, &row)) {
            printf("Column %d played by player %s\n", column, getColoredPlayerSymbol(player));
            tic_tac_toe_board[row][column] = player;

            if (checkWinner(tic_tac_toe_board) != 'N') {
                printTicTacToeBoard(tic_tac_toe_board);
                printf("Player %s won in %d turns, Congrats!\n", getColoredPlayerSymbol(player), turns);
                exit(0);
            } else {
                player = (player == 'X') ? 'O' : 'X';
                turns++;
                printTicTacToeBoard(tic_tac_toe_board);
                printf("No winner yet, CONTINUE\n");
            }
        } else {
                printf("Invalid column, already took by the other player or out of range 1~9 .\n");
        }
    }
    printf("Game ended in %d turns with a Tie.\n", turns);
}

int main() {
    srand(time(NULL));
    TicTacToe();

    return 0;
}