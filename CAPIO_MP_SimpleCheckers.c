/******************************************************************
This is to certify that this project is my own work, based on my
personal efforts in studying and applying the concepts learned. I
have constructed the functions and their respective algorithms
and corresponding code by myself. The program was run, tested, and
debugged by my own efforts. I further certify that I have not
copied in part or whole or otherwise plagiarized the work of other
students and/or persons.
Simone Franceska Emanuelle M. Capio, DLSU ID# 12205907
******************************************************************/

#include <stdio.h>
#include <stdlib.h> // where the rand() function is stored
#include <time.h> // makes the srand(time(NULL)) line usable, since the numbers aren't actually randomized without this
#include <string.h> // for the if statements involving string

/*
    Description:
    Programmed by: Simone Franceska Emanuelle M. Capio - S21A
    Last modified: December 3, 2022
    Version: 15
    {Acknowledgements: 
    1. "How can I compare strings in C using a 'switch' statement?" - https://stackoverflow.com/questions/4014827/how-can-i-compare-strings-in-c-using-a-switch-statement
    2. "C Programming Strings" - https://www.programiz.com/c-programming/c-strings
    3. "seed random numbers in C" - https://stackoverflow.com/questions/25234776/seed-random-numbers-in-c}
*/


/****************************** FUNCTIONS **********************************/

/* This function produces a random number, which is tested for divisibility by 2. 
If the number is even (divisible by 2), the nPlayer variable is given a value of 1 corresponding to Player B.
Otherwise, nPlayer is given a value of 0 corresponding to Player A.
Precondition: executes once player has selected 'P' from the menu
@param nPlayer is where the value of either 1 or 0 is stored, which will correspond 
to either Player B or Player A
@return is the truth value of whether nPlayer is divisible by 2 or not; this is either 1 or 0
*/
void randomizePlayer(int *nPlayer)
{	
    srand(time(NULL));
	*nPlayer = (rand() % 2) == 0;
}

/* This function displays the horizontal divider between rows on the game board
Precondition: the displayBoard() function has been executed successfully
@return a display of horizontal dividers for the division of rows in the checkers board
*/
void displayHorizontal()
{
    printf("   --   --   --   --   --   --   --   --  \n");
}

/* This function displays the game board with updated values
Precondition: all parameters have been assigned with values that may only be
'D', 'L', or '*'
@param cB1 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cD1 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cF1 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cH1 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cA2 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cC2 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cE2 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cG2 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cB3 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cD3 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cF3 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cH3 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cA4 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cC4 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cE4 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cG4 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cB5 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cD5 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cF5 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cH5 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cA6 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cC6 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cE6 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cG6 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cB7 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cD7 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cF7 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cH7 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cA8 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cC8 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cE8 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@param cG8 stores one of the ff: 'D', 'L', or '*' in a valid position in the board
@return character values that are currently assigned to each position in the board
*/
void displayBoard(char cB1, char cD1, char cF1, char cH1, char cA2, char cC2, char cE2, char cG2, 
char cB3, char cD3, char cF3, char cH3, char cA4, char cC4, char cE4, char cG4, char cB5, char cD5, char cF5, char cH5, 
char cA6, char cC6, char cE6, char cG6, char cB7, char cD7, char cF7, char cH7, char cA8, char cC8, char cE8, char cG8)
{
    printf("\n   A    B    C    D    E    F    G    H   \n");
    displayHorizontal();
    printf("1|    | %c  |    | %c  |    | %c  |    | %c  |\n", cB1, cD1, cF1, cH1);
    displayHorizontal();
    printf("2| %c  |    | %c  |    | %c  |    | %c  |    |\n", cA2, cC2, cE2, cG2);
    displayHorizontal();
    printf("3|    | %c  |    | %c  |    | %c  |    | %c  |\n", cB3, cD3, cF3, cH3);
    displayHorizontal();
    printf("4| %c  |    | %c  |    | %c  |    | %c  |    |\n", cA4, cC4, cE4, cG4);
    displayHorizontal();
    printf("5|    | %c  |    | %c  |    | %c  |    | %c  |\n", cB5, cD5, cF5, cH5);
    displayHorizontal();
    printf("6| %c  |    | %c  |    | %c  |    | %c  |    |\n", cA6, cC6, cE6, cG6);
    displayHorizontal();
    printf("7|    | %c  |    | %c  |    | %c  |    | %c  |\n", cB7, cD7, cF7, cH7);
    displayHorizontal();
    printf("8| %c  |    | %c  |    | %c  |    | %c  |    |\n", cA8, cC8, cE8, cG8);
    displayHorizontal();
}

/* This function displays the menu and displays a prompt for user input
Precondition: program has been started successfully or user has selected 'M'
@param none
@return none
*/
void displayMenu()
{
    printf("\n********************************\n");
    printf("** WELCOME TO SIMPLE CHECKERS **\n");
    printf("********************************\n");

    printf("              MENU\n\n");
    printf("%16s\n", "P - Play");
    printf("%23s\n", "S - View Scores");
    printf("%16s\n\n", "Q - Quit");

    printf("********************************\n");

    printf("\nPlease select an option: ");
}

/* This function displays the quit screen for when the player opts to select quit in the menu
Precondition: user selects 'Q'
@param none
@return none
*/
void quitGame()
{
    printf("\n********************************\n");
    printf("**** THANK YOU FOR PLAYING  ****\n");
    printf("******  SIMPLE CHECKERS!  ******\n");
    printf("********************************\n");

    printf("\n%23s", "Exiting Game...\n");
}

/* This function checks whether a player has reached the other end of the board, 
if all the opponent's pieces have been captured, or if there are no more valid moves
to be made
Precondition: cB1, cD1, cF1, cH1, cA8, cC8, cE8, and cG8 all contain one of the ff: 'D', 'L', '*';
nDarkPcs and nLightPcs non-negative values
@param cB1 is a valid square or position at the B column of the first row of the Light player's side
@param cD1 is a valid square or position at the D column of the first row of the Light player's side
@param cF1 is a valid square or position at the F column of the first row of the Light player's side
@param cH1 is a valid square or position at the H column of the first row of the Light player's side
@param cA8 is a valid square or position at the A column of the first row of the Dark player's side
@param cC8 is a valid square or position at the C column of the first row of the Dark player's side
@param cE8 is a valid square or position at the E column of the first row of the Dark player's side
@param cG8 is a valid square or position at the G column of the first row of the Dark player's side
@param nDarkPcs is the counter for the remaining Dark (D) pieces that haven't been captured
@param nLightPcs is the counter for the remaining Light (L) pieces that haven't been captured
@param nWinner is the determinant of whether a player has already won
@param nIsValidLight is the determinant of whether the Light player still has valid moves left
@param nIsValidDark is the determinant of whether the Dark player still has valid moves left
@return the value of nWinner; this should be 1 if any of the winning conditions have been met and 0 otherwise
*/
int checkWinner(char cB1, char cD1, char cF1, char cH1, char cA8, char cC8, char cE8, char cG8, char cPrevious, int nDarkPcs, int nLightPcs, int nWinner, int nIsValidLight, int nIsValidDark)
{
    if (cB1 == 'D' || cD1 == 'D' || cF1 == 'D' || cH1 == 'D' || cA8 == 'L' || cC8 == 'L' || cE8 == 'L' || cG8 == 'L')
    {
        nWinner = 1;
    }
    else if (nDarkPcs == 0 || nLightPcs == 0)
    {
        nWinner = 1;
    }
    else if (cPrevious == 'L' && nIsValidLight == 0)
    {
        nWinner = 1;
    }
    else if (cPrevious == 'D' && nIsValidDark == 0)
    {
        nWinner = 1;
    }
    else
    {
        nWinner = 0;
    }

    return nWinner;

}

/* Depending on which player goes first, this function simply swaps the displayed player
to take their turn every time a move is made
Precondition: cCurrentPlayer only contains either 'A' or 'B' as its value
@param cCurrentPlayer stores the value of the current player whose turn it is
@return the alternate of the previous value of cCurrentPlayer
*/
int swapPlayer(char cCurrentPlayer)
{
    switch (cCurrentPlayer)
    {
    case 'A':
        cCurrentPlayer = 'B';
        break;
    
    default:
        cCurrentPlayer = 'A';
        break;
    }

    return cCurrentPlayer;
}

/* This function exchanges the color of the player that made the last move to ensure that players are alternating turns
Precondition: cPrevious only contains either 'D' or 'L' as its value
@param cPrevious stores the value of the color of the pieces that the previous player was assigned to
@return the color of the pieces that the previous player was assigned to; can only be either 'D' or 'L'
*/
int swapPiece(char cPrevious)
{
    switch (cPrevious)
    {
        case 'D':
            cPrevious = 'L';
            break;
        default:
            cPrevious = 'D';
            break;
    }
    
    return cPrevious;
}

/* This function exchanges the color of the player for the part that displays which color the current player should be moving
Precondition: cCurrent only contains either 'D' or 'L' as its value
@param cCurrent stores the value of the color of the pieces that the current player is assigned to
@return the color of the pieces that the current player is assigned to; can only be either 'D' or 'L'
*/
int swapCurrent(char cCurrent)
{
    switch (cCurrent)
    {
        case 'D':
            cCurrent = 'L';
            break;
        default:
            cCurrent = 'D';
            break;
    }
    
    return cCurrent;
}
/* This function checks all the possible moves for the Light Player, and evaluates
whether the moves can still be made or not
Precondition: cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, 
cE4, cG4, cB5, cD5, cF5, cH5, cA6, cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, 
cC8, cE8, and cG8 all hold values that are one of the ff: 'D', 'L', or '*';
@param nIsValidLight is the determinant of whether there are still any valid moves for the Light player;
this can be either 1 if there are still valid moves, or 0 otherwise
@return the value of nIsValidLight as an indication of whether there are still valid moves for Light player (1) or none (0)
*/
void checkValidLight(int *nIsValidLight, char cB1, char cD1, char cF1, char cH1, char cA2, char cC2, char cE2, char cG2,
char cB3, char cD3, char cF3, char cH3, char cA4, char cC4, char cE4, char cG4, char cB5, char cD5, char cF5, char cH5, 
char cA6, char cC6, char cE6, char cG6, char cB7, char cD7, char cF7, char cH7, char cA8, char cC8, char cE8, char cG8)
{
    if (cA2 == 'L' && (cB3 == '*' || (cC4 == '*' && cB3 == 'D')))
    {
        *nIsValidLight = 1;
    }
    else if (cA4 == 'L' && (cB5 == '*' || (cC6 == '*' && cB5 == 'D')))
    {
        *nIsValidLight = 1;
    }
    else if (cA6 == 'L' && (cB7 == '*' || (cC8 == '*' && cB7 == 'D')))
    {
        *nIsValidLight = 1;
    }
    else if (cB1 == 'L' && (cA2 == '*' || cC2 == '*' || (cD3 == '*' && cC2 == 'D')))
    {
        *nIsValidLight = 1;
    }
    else if (cB3 == 'L' && (cA4 == '*' || cC4 == '*' || (cD5 == '*' && cC4 == 'D')))
    {
        *nIsValidLight = 1;
    }
    else if (cB5 == 'L' && (cA6 == '*' || cC6 == '*' || (cD7 == '*' && cC6 == 'D')))
    {
        *nIsValidLight = 1;
    }
    else if (cB7 == 'L' && (cA8 == '*' || cC8 == '*'))
    {
        *nIsValidLight = 1;
    }
    else if (cC2 == 'L' && (cB3 == '*' || cD3 == '*' || (cA4 == '*' && cB3 == 'D') || (cE4 == '*' && cD3 == 'D')))
    {
        *nIsValidLight = 1; 
    }
    else if (cC4 == 'L' && (cB5 == '*' || cD5 == '*' || (cA6 == '*' && cB5 == 'D') || (cE6 == '*' && cD5 == 'D')))
    {
        *nIsValidLight = 1; 
    }
    else if (cC6 == 'L' && (cB7 == '*' || cD7 == '*' || (cA8 == '*' && cB7 == 'D') || (cE8 == '*' && cD7 == 'D')))
    {
        *nIsValidLight = 1; 
    }
    else if (cD1 == 'L' && (cC2 == '*' || cE2 == '*' || (cB3 == '*' && cC2 == 'D') || (cF3 == '*' && cE2 == 'D')))
    {
        *nIsValidLight = 1;
    }
    else if (cD3 == 'L' && (cC4 == '*' || cE4 == '*' || (cB5 == '*' && cC4 == 'D') || (cF5 == '*' && cE4 == 'D')))
    {
        *nIsValidLight = 1;
    }
    else if (cD5 == 'L' && (cC6 == '*' || cE6 == '*' || (cB7 == '*' && cC6 == 'D') || (cF7 == '*' && cE6 == 'D')))
    {
        *nIsValidLight = 1;
    }
    else if (cD7 == 'L' && (cC8 == '*' || cE8 == '*'))
    {
        *nIsValidLight = 1;
    }
    else if (cE2 == 'L' && (cD3 == '*' || cF3 == '*' || (cC4 == '*' && cD3 == 'D') || (cG4 == '*' && cF3 == 'D')))
    {
        *nIsValidLight = 1; 
    }
    else if (cE4 == 'L' && (cD5 == '*' || cF5 == '*' || (cC6 == '*' && cD5 == 'D') || (cG6 == '*' && cF5 == 'D')))
    {
        *nIsValidLight = 1; 
    }
    else if (cE6 == 'L' && (cD7 == '*' || cF7 == '*' || (cC8 == '*' && cD7 == 'D') || (cG8 == '*' && cF7 == 'D')))
    {
        *nIsValidLight = 1; 
    }
    else if (cF1 == 'L' && (cE2 == '*' || cG2 == '*' || (cD3 == '*' && cE2 == 'D') || (cH3 == '*' && cG2 == 'D')))
    {
        *nIsValidLight = 1;
    }
    else if (cF3 == 'L' && (cE4 == '*' || cG4 == '*' || (cD5 == '*' && cE4 == 'D') || (cH5 == '*' && cG4 == 'D')))
    {
        *nIsValidLight = 1;
    }
    else if (cF5 == 'L' && (cE6 == '*' || cG6 == '*' || (cD7 == '*' && cE6 == 'D') || (cH7 == '*' && cG6 == 'D')))
    {
        *nIsValidLight = 1;
    }
    else if (cF7 == 'L' && (cE8 == '*' || cG8 == '*'))
    {
        *nIsValidLight = 1;
    }
    else if (cG2 == 'L' && (cF3 == '*' || cH3 == '*' || (cE4 == '*' && cF3 == 'D')))
    {
        *nIsValidLight = 1; 
    }
    else if (cG4 == 'L' && (cF5 == '*' || cH5 == '*' || (cE6 == '*' && cF5 == 'D')))
    {
        *nIsValidLight = 1; 
    }
    else if (cG6 == 'L' && (cF7 == '*' || cH7 == '*' || (cE8 == '*' && cF7 == 'D')))
    {
        *nIsValidLight = 1; 
    }
    else if (cH1 == 'L' && (cG2 == '*' || (cF3 == '*' && cG2 == 'D')))
    {
        *nIsValidLight = 1;
    }
    else if (cH3 == 'L' && (cG4 == '*' || (cF5 == '*' && cG4 == 'D')))
    {
        *nIsValidLight = 1;
    }
    else if (cH5 == 'L' && (cG6 == '*' || (cF7 == '*' && cG6 == 'D')))
    {
        *nIsValidLight = 1;
    }
    else if (cF7 == 'L' && cG8 == '*')
    {
        *nIsValidLight = 1;
    }
    else
    {
        *nIsValidLight = 0;
    }
}

/* This function checks all the possible moves for the Dark Player, and evaluates
whether the moves can still be made or not
Precondition: cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, 
cE4, cG4, cB5, cD5, cF5, cH5, cA6, cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, 
cC8, cE8, and cG8 all hold values that are one of the ff: 'D', 'L', or '*';
@param nIsValidDark is the determinant of whether there are still any valid moves for the Light player;
this can be either 1 if there are still valid moves, or 0 otherwise
@return the value of nIsValidDark as an indication of whether there are still valid moves for Light player (1) or none (0)
*/
void checkValidDark(int *nIsValidDark, char cB1, char cD1, char cF1, char cH1, char cA2, char cC2, char cE2, char cG2, //EDIT TO HAVE IT BECOME 0 WHEN THERE ARE NO MORE VALID MOVES
char cB3, char cD3, char cF3, char cH3, char cA4, char cC4, char cE4, char cG4, char cB5, char cD5, char cF5, char cH5, 
char cA6, char cC6, char cE6, char cG6, char cB7, char cD7, char cF7, char cH7, char cA8, char cC8, char cE8, char cG8)
{
    if (cA2 == 'D' && cB1 == '*')
    {
        *nIsValidDark = 1;
    }
    else if (cA4 == 'D' && (cB3 == '*' || (cC2 == '*' && cB3 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cA6 == 'D' && (cB5 == '*' || (cC4 == '*' && cB5 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cA8 == 'D' && (cB7 == '*' || (cC6 == '*' && cB7 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cB3 == 'D' && (cA2 == '*' || cC2 == '*' || (cD1 == '*' && cC2 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cB5 == 'D' && (cA4 == '*' || cC4 == '*' || (cD3 == '*' && cC4 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cB7 == 'D' && (cA6 == '*' || cC6 == '*' || (cD5 == '*' && cC6 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cC2 == 'D' && (cB1 == '*' || cD1 == '*'))
    {
        *nIsValidDark = 1;
    }
    else if (cC4 == 'D' && (cB3 == '*' || cD3 == '*' || (cA2 == '*' && cB3 == 'L') || (cE2 == '*' && cD3 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cC6 == 'D' && (cB5 == '*' || cD5 == '*' || (cA4 == '*' && cB5 == 'L') || (cE4 == '*' && cD5 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cC8 == 'D' && (cB7 == '*' || cD7 == '*' || (cA6 == '*' && cB7 == 'L') || (cE6 == '*' && cD7 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cD3 == 'D' && (cC2 == '*' || cE2 == '*' || (cB1 == '*' && cC2 == 'L') || (cF1 == '*' && cE2 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cD5 == 'D' && (cC4 == '*' || cE4 == '*' || (cB3 == '*' && cC4 == 'L') || (cF3 == '*' && cE4 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cD7 == 'D' && (cC6 == '*' || cE6 == '*' || (cB5 == '*' && cC6 == 'L') || (cF5 == '*' && cE6 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cE2 == 'D' && (cD1 == '*' || cF1 == '*'))
    {
        *nIsValidDark = 1;
    }
    else if (cE4 == 'D' && (cD3 == '*' || cF3 == '*' || (cC2 == '*' && cD3 == 'L') || (cG2 == '*' && cF3 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cE6 == 'D' && (cD5 == '*' || cF5 == '*' || (cC4 == '*' && cD5 == 'L') || (cG4 == '*' && cF5 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cE8 == 'D' && (cD7 == '*' || cF7 == '*' || (cC6 == '*' && cD7 == 'L') || (cG6 == '*' && cF7 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cF3 == 'D' && (cE2 == '*' || cG2 == '*' || (cD1 == '*' && cE2 == 'L') || (cH1 == '*' && cG2 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cF5 == 'D' && (cE4 == '*' || cG4 == '*' || (cD3 == '*' && cE4 == 'L') || (cH3 == '*' && cG4 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cF7 == 'D' && (cE6 == '*' || cG6 == '*' || (cD5 == '*' && cE6 == 'L') || (cH5 == '*' && cG6 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cG2 == 'D' && (cF1 == '*' || cH1 == '*'))
    {
        *nIsValidDark = 1;
    }
    else if (cG4 == 'D' && (cF3 == '*' || cH3 == '*' || (cE2 == '*' && cF3 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cG6 == 'D' && (cF5 == '*' || cH5 == '*' || (cE4 == '*' && cF5 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cG8 == 'D' && (cF7 == '*' || cH7 == '*' || (cE6 == '*' && cF7 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cH3 == 'D' && (cG2 == '*' || (cF1 == '*' && cG2 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cH5 == 'D' && (cG4 == '*' || (cF3 == '*' && cG4 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else if (cH7 == 'D' && (cG6 == '*' || (cF5 == '*' && cG6 == 'L')))
    {
        *nIsValidDark = 1;
    }
    else
    {
        *nIsValidDark = 0;
    }
}

/****************************** END OF FUNCTIONS **********************************/


int main()
{
    int nDarkPcs, nLightPcs; // used in checkWinner()
    int nIsValidDark, nIsValidLight; // used in checkValidLight/Dark()
    int nWinner; // used in checkWinner()
    char cTemp; // temp variable for switching values when making a move
    char cCurrentPlayer; // assign the player indicated when asking for input
    char sMove[4]; // character array to which the entered move by the player will be assigned
    int nPlayer; // used in randomizePlayer()
    int nScoreA = 0, nScoreB = 0; //for storing the scores of each player
    char cPrevious; // stores previous color moved for swapPiece(), which makes it so each player has to alternate
    char cCurrent; // stores previous color and is used in swapCurrent(), which is for the displayed color corresponding to the player whose turn it is
    // this is separate pa since when the game starts, it has to be switched sa display pero it can't be switched for the sake of the detection of turns

    char cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA8, cC8, cE8, cG8, cB7, cD7, cF7, cH7, cA6, cC6, cE6, cG6, cB5, cD5, cF5, cH5, cA4, cC4, cE4, cG4;
    // initialize all variables to store the pieces for each player (all valid/black boxes on the board)
    
    char cMenu = 'A'; // storage for user input when in Menu
    
    displayMenu();
    
    do
    {
        scanf(" %c%*[^\n]", &cMenu); // code to only accept the first character in case user inputs more than one

        switch (cMenu)
        {
            case 'P':
                nIsValidDark = nIsValidLight = 1; // used in checkValidLight/Dark()
                nDarkPcs = nLightPcs = 12; // reset the number of pieces for each player
                nWinner = 0; // used in checkWinner() 
                cB1 = cD1 = cF1 = cH1 = cA2 = cC2 = cE2 = cG2 = cB3 = cD3 = cF3 = cH3 = 'L';
                cA8 = cC8 = cE8 = cG8 = cB7 = cD7 = cF7 = cH7 = cA6 = cC6 = cE6 = cG6 = 'D';
                cB5 = cD5 = cF5 = cH5 = cA4 = cC4 = cE4 = cG4 = '*'; // set all the pieces to their original places

                cPrevious = 'L'; // makes it so that player of Dark will be required to make the first move, since there is a function to swap turns in the while loop
                cCurrent = 'D';

                randomizePlayer(&nPlayer);

                printf("\n********************************\n");
                printf("** INITIALIZING GAME BOARD... **\n");
                printf("********************************\n\n");
    
                /*
                if conditional statement for who gets to play first
                */
                if (nPlayer == 0)
                {
                    cCurrentPlayer = 'A';
                    printf("\n");
                    printf("%32s\n\n", "Player A (D) goes first.");
                }
                else 
                {
                    cCurrentPlayer = 'B';
                    printf("\n");
                    printf("%32s\n\n", "Player B (D) goes first.");
                }

                while (nWinner == 0) // while there isn't a winner yet (nWinner == 1), the users will be asked for input or moves
                {
                    /*display how many pieces are left for each player*/
                    printf("\n\nRemaining Pieces:\n");
                    printf("D: %d\n", nDarkPcs);
                    printf("L: %d\n", nLightPcs);
                    
                    displayBoard(cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                    cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                    printf("\nPlayer %c (%c), make your move (ex: A6B5 - \"A6 to B5\"): ", cCurrentPlayer, cCurrent); // prompt for player move while displaying which player's turn it is and what color they were assigned to
                    scanf("%s", sMove);
                    
                    /*The if statement for all possible moves in the game*/
                    if (strcmp(sMove, "A2B3") == 0 && cB3 == '*' && cA2 == 'L' && cPrevious == 'D') // since a "string" input is just an array of characters it cannot be compared by the == operator alone
                    {
                        cTemp = cA2;
                        cA2 = cB3;
                        cB3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer); // swaps displayed player to be asked for input (A or B)
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious); // swaps previous player, to ensure that players are alternating turns
                        cCurrent = swapCurrent(cCurrent); // swaps displayed color of the player to be asked for input (D or L)
                    }
                    else if (strcmp(sMove, "A2C4") == 0 && cC4 == '*' && cB3 == 'D' && cA2 == 'L' && cPrevious == 'D')
                    {
                        cB3 = '*';
                        nDarkPcs -= 1;
                        cTemp = cA2;
                        cA2 = cC4;
                        cC4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "A2B1") == 0 && cB1 == '*' && cA2 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cA2;
                        cA2 = cB1;
                        cB1 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "A4B5") == 0 && cB5 == '*' && cA4 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cA4;
                        cA4 = cB5;
                        cB5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "A4C6") == 0 && cC6 == '*' && cB5 == 'D' && cA4 == 'L' && cPrevious == 'D')
                    {
                        cB5 = '*';
                        nDarkPcs -= 1;
                        cTemp = cA4;
                        cA4 = cC6;
                        cC6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "A4B3") == 0 && cB3 == '*' && cA4 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cA4;
                        cA4 = cB3;
                        cB3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "A4C2") == 0 && cC2 == '*' && cB3 == 'L' && cA4 == 'D' && cPrevious == 'L')
                    {
                        cB3 = '*';
                        nLightPcs -= 1;
                        cTemp = cA4;
                        cA4 = cC2;
                        cC2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "A6B5") == 0 && cB5 == '*' && cA6 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cA6;
                        cA6 = cB5;
                        cB5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "A6C4") == 0 && cC4 == '*' && cB5 == 'L' && cA6 == 'D' && cPrevious == 'L')
                    {
                        cB5 = '*';
                        nLightPcs -= 1;
                        cTemp = cA6;
                        cA6 = cC4;
                        cC4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "A6B7") == 0 && cB7 == '*' && cA6 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cA6;
                        cA6 = cB7;
                        cB7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "A6C8") == 0 && cC8 == '*' && cB7 == 'D' && cA6 == 'L' && cPrevious == 'D')
                    {
                        cB7 = '*';
                        nDarkPcs -= 1;
                        cTemp = cA6;
                        cA6 = cC8;
                        cC8 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "A8B7") == 0 && cB7 == '*' && cA8 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cA8;
                        cA8 = cB7;
                        cB7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "A8C6") == 0 && cC6 == '*' && cB7 == 'L' && cA8 == 'D' && cPrevious == 'L')
                    {
                        cB7 = '*';
                        nLightPcs -= 1;
                        cTemp = cA8;
                        cA8 = cC6;
                        cC6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    /*END OF ALL A COLUMN MOVES*/
                    else if (strcmp(sMove, "B1A2") == 0 && cA2 == '*' && cB1 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cB1;
                        cB1 = cA2;
                        cA2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B1C2") == 0 && cC2 == '*' && cB1 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cB1;
                        cB1 = cC2;
                        cC2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B1D3") == 0 && cD3 == '*' && cC2 == 'D' && cB1 == 'L' && cPrevious == 'D')
                    {
                        cC2 = '*';
                        nDarkPcs -= 1;
                        cTemp = cB1;
                        cB1 = cD3;
                        cD3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B3C4") == 0 && cC4 == '*' && cB3 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cB3;
                        cB3 = cC4;
                        cC4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B3A4") == 0 && cA4 == '*' && cB3 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cB3;
                        cB3 = cA4;
                        cA4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B3D5") == 0 && cD5 == '*' && cC4 == 'D' && cB3 == 'L' && cPrevious == 'D')
                    {
                        cC4 = '*';
                        nDarkPcs -= 1;
                        cTemp = cB3;
                        cB3 = cD5;
                        cD5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B3C2") == 0 && cC2 == '*' && cB3 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cB3;
                        cB3 = cC2;
                        cC2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B3A2") == 0 && cA2 == '*' && cB3 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cB3;
                        cB3 = cA2;
                        cA2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B3D1") == 0 && cD1 == '*' && cC2 == 'L' && cB3 == 'D' && cPrevious == 'L')
                    {
                        cC2 = '*';
                        nLightPcs -= 1;
                        cTemp = cB3;
                        cB3 = cD1;
                        cD1 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B5A4") == 0 && cA4 == '*' && cB5 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cB5;
                        cB5 = cA4;
                        cA4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B5C4") == 0 && cC4 == '*' && cB5 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cB5;
                        cB5 = cC4;
                        cC4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B5D3") == 0 && cD3 == '*' && cC4 == 'L' && cB5 == 'D' && cPrevious == 'L')
                    {
                        cC4 = '*';
                        nLightPcs -= 1;
                        cTemp = cB5;
                        cB5 = cD3;
                        cD3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B5A6") == 0 && cA6 == '*' && cB5 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cB5;
                        cB5 = cA6;
                        cA6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B5C6") == 0 && cC6 == '*' && cB5 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cB5;
                        cB5 = cC6;
                        cC6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B5D7") == 0 && cD7 == '*' && cC6 == 'D' && cB5 == 'L' && cPrevious == 'D')
                    {
                        cC6 = '*';
                        nDarkPcs -= 1;
                        cTemp = cB5;
                        cB5 = cD7;
                        cD7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B7A6") == 0 && cA6 == '*' && cB7 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cB7;
                        cB7 = cA6;
                        cA6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B7C6") == 0 && cC6 == '*' && cB7 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cB7;
                        cB7 = cC6;
                        cC6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B7D5") == 0 && cD5 == '*' && cC6 == 'L' && cB7 == 'D' && cPrevious == 'L')
                    {
                        cC6 = '*';
                        nLightPcs -= 1;
                        cTemp = cB7;
                        cB7 = cD5;
                        cD5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B7A8") == 0 && cA8 == '*' && cB7 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cB7;
                        cB7 = cA8;
                        cA8 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "B7C8") == 0 && cC8 == '*' && cB7 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cB7;
                        cB7 = cC8;
                        cC8 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    /*END OF ALL B COLUMN MOVES*/
                    else if (strcmp(sMove, "C2B3") == 0 && cB3 == '*' && cC2 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cC2;
                        cC2 = cB3;
                        cB3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C2D3") == 0 && cD3 == '*' && cC2 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cC2;
                        cC2 = cD3;
                        cD3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C2A4") == 0 && cA4 == '*' && cB3 == 'D' && cC2 == 'L' && cPrevious == 'D')
                    {
                        cB3 = '*';
                        nDarkPcs -= 1;
                        cTemp = cC2;
                        cC2 = cA4;
                        cA4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C2E4") == 0 && cE4 == '*' && cD3 == 'D' && cC2 == 'L' && cPrevious == 'D')
                    {
                        cD3 = '*';
                        nDarkPcs -= 1;
                        cTemp = cC2;
                        cC2 = cE4;
                        cE4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C2B1") == 0 && cB1 == '*' && cC2 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cC2;
                        cC2 = cB1;
                        cB1 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C2D1") == 0 && cD1 == '*' && cC2 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cC2;
                        cC2 = cD1;
                        cD1 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C4B5") == 0 && cB5 == '*' && cC4 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cC4;
                        cC4 = cB5;
                        cB5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C4D5") == 0 && cD5 == '*' && cC4 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cC4;
                        cC4 = cD5;
                        cD5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C4A6") == 0 && cA6 == '*' && cB5 == 'D' && cC4 == 'L' && cPrevious == 'D')
                    {
                        cB5 = '*';
                        nDarkPcs -= 1;
                        cTemp = cC4;
                        cC4 = cA6;
                        cA6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C4E6") == 0 && cE6 == '*' && cD5 == 'D' && cC4 == 'L' && cPrevious == 'D')
                    {
                        cD5 = '*';
                        nDarkPcs -= 1;
                        cTemp = cC4;
                        cC4 = cE6;
                        cE6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C4B3") == 0 && cB3 == '*' && cC4 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cC4;
                        cC4 = cB3;
                        cB3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C4D3") == 0 && cD3 == '*' && cC4 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cC4;
                        cC4 = cD3;
                        cD3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C4A2") == 0 && cA2 == '*' && cB3 == 'L' && cC4 == 'D' && cPrevious == 'L')
                    {
                        cB3 = '*';
                        nLightPcs -= 1;
                        cTemp = cC4;
                        cC4 = cA2;
                        cA2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C4E2") == 0 && cE2 == '*' && cD3 == 'L' && cC4 == 'D' && cPrevious == 'L')
                    {
                        cD3 = '*';
                        nLightPcs -= 1;
                        cTemp = cC4;
                        cC4 = cE2;
                        cE2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C6B5") == 0 && cB5 == '*' && cC6 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cC6;
                        cC6 = cB5;
                        cB5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C6D5") == 0 && cD5 == '*' && cC6 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cC6;
                        cC6 = cD5;
                        cD5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C6A4") == 0 && cA4 == '*' && cB5 == 'L' && cC6 == 'D' && cPrevious == 'L')
                    {
                        cB5 = '*';
                        nLightPcs -= 1;
                        cTemp = cC6;
                        cC6 = cA4;
                        cA4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C6E4") == 0 && cE4 == '*' && cD5 == 'L' && cC6 == 'D' && cPrevious == 'L')
                    {
                        cD5 = '*';
                        nLightPcs -= 1;
                        cTemp = cC6;
                        cC6 = cE4;
                        cE4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C6B7") == 0 && cB7 == '*' && cC6 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cC6;
                        cC6 = cB7;
                        cB7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C6D7") == 0 && cD7 == '*' && cC6 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cC6;
                        cC6 = cD7;
                        cD7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C6A8") == 0 && cA8 == '*' && cB7 == 'D' && cC6 == 'L' && cPrevious == 'D')
                    {
                        cB7 = '*';
                        nDarkPcs -= 1;
                        cTemp = cC6;
                        cC6 = cA8;
                        cA8 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C6E8") == 0 && cE8 == '*' && cD7 == 'D' && cC6 == 'L' && cPrevious == 'D')
                    {
                        cD7 = '*';
                        nDarkPcs -= 1;
                        cTemp = cC6;
                        cC6 = cE8;
                        cE8 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C8B7") == 0 && cB7 == '*' && cC8 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cC8;
                        cC8 = cB7;
                        cB7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C8D7") == 0 && cD7 == '*' && cC8 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cC8;
                        cC8 = cD7;
                        cD7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C8A6") == 0 && cA6 == '*' && cB7 == 'L' && cC8 == 'D' && cPrevious == 'L')
                    {
                        cB7 = '*';
                        nLightPcs -= 1;
                        cTemp = cC8;
                        cC8 = cA6;
                        cA6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "C8E6") == 0 && cE6 == '*' && cD7 == 'L' && cC8 == 'D' && cPrevious == 'L')
                    {
                        cD7 = '*';
                        nLightPcs -= 1;
                        cTemp = cC8;
                        cC8 = cE6;
                        cE6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    /*END OF ALL C COLUMN MOVES*/
                    else if (strcmp(sMove, "D1C2") == 0 && cC2 == '*' && cD1 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cD1;
                        cD1 = cC2;
                        cC2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D1E2") == 0 && cE2 == '*' && cD1 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cD1;
                        cD1 = cE2;
                        cE2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D1B3") == 0 && cB3 == '*' && cC2 == 'D' && cD1 == 'L' && cPrevious == 'D')
                    {
                        cC2 = '*';
                        nDarkPcs -= 1;
                        cTemp = cD1;
                        cD1 = cB3;
                        cB3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D1F3") == 0 && cF3 == '*' && cE2 == 'D' && cD1 == 'L' && cPrevious == 'D')
                    {
                        cE2 = '*';
                        nDarkPcs -= 1;
                        cTemp = cD1;
                        cD1 = cF3;
                        cF3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D3C4") == 0 && cC4 == '*' && cD3 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cD3;
                        cD3 = cC4;
                        cC4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D3E4") == 0 && cE4 == '*' && cD3 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cD3;
                        cD3 = cE4;
                        cE4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D3B5") == 0 && cB5 == '*' && cC4 == 'D' && cD3 == 'L' && cPrevious == 'D')
                    {
                        cC4 = '*';
                        nDarkPcs -= 1;
                        cTemp = cD3;
                        cD3 = cB5;
                        cB5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D3F5") == 0 && cF5 == '*' && cE4 == 'D' && cD3 == 'L' && cPrevious == 'D')
                    {
                        cE4 = '*';
                        nDarkPcs -= 1;
                        cTemp = cD3;
                        cD3 = cF5;
                        cF5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D3C2") == 0 && cC2 == '*' && cD3 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cD3;
                        cD3 = cC2;
                        cC2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D3E2") == 0 && cE2 == '*' && cD3 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cD3;
                        cD3 = cE2;
                        cE2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D3B1") == 0 && cB1 == '*' && cC2 == 'L' && cD3 == 'D' && cPrevious == 'L')
                    {
                        cC2 = '*';
                        nLightPcs -= 1;
                        cTemp = cD3;
                        cD3 = cB1;
                        cB1 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D3F1") == 0 && cF1 == '*' && cE2 == 'L' && cD3 == 'D' && cPrevious == 'L')
                    {
                        cE2 = '*';
                        nLightPcs -= 1;
                        cTemp = cD3;
                        cD3 = cF1;
                        cF1 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D5C4") == 0 && cC4 == '*' && cD5 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cD5;
                        cD5 = cC4;
                        cC4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D5E4") == 0 && cE4 == '*' && cD5 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cD5;
                        cD5 = cE4;
                        cE4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D5B3") == 0 && cB3 == '*' && cC4 == 'L' && cD5 == 'D' && cPrevious == 'L')
                    {
                        cC4 = '*';
                        nLightPcs -= 1;
                        cTemp = cD5;
                        cD5 = cB3;
                        cB3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D5F3") == 0 && cF3 == '*' && cE4 == 'L' && cD5 == 'D' && cPrevious == 'L')
                    {
                        cE4 = '*';
                        nLightPcs -= 1;
                        cTemp = cD5;
                        cD5 = cF3;
                        cF3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D5C6") == 0 && cC6 == '*' && cD5 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cD5;
                        cD5 = cC6;
                        cC6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D5E6") == 0 && cE6 == '*' && cD5 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cD5;
                        cD5 = cE6;
                        cE6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D5B7") == 0 && cB7 == '*' && cC6 == 'D' && cD5 == 'L' && cPrevious == 'D')
                    {
                        cC6 = '*';
                        nDarkPcs -= 1;
                        cTemp = cD5;
                        cD5 = cB7;
                        cB7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D5F7") == 0 && cF7 == '*' && cE6 == 'D' && cD5 == 'L' && cPrevious == 'D')
                    {
                        cE6 = '*';
                        nDarkPcs -= 1;
                        cTemp = cD5;
                        cD5 = cF7;
                        cF7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D7C6") == 0 && cC6 == '*' && cD7 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cD7;
                        cD7 = cC6;
                        cC6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D7E6") == 0 && cE6 == '*' && cD7 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cD7;
                        cD7 = cE6;
                        cE6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D7B5") == 0 && cB5 == '*' && cC6 == 'L' && cD7 == 'D' && cPrevious == 'L')
                    {
                        cC6 = '*';
                        nLightPcs -= 1;
                        cTemp = cD7;
                        cD7 = cB5;
                        cB5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D7F5") == 0 && cF5 == '*' && cE6 == 'L' && cD7 == 'D' && cPrevious == 'L')
                    {
                        cE6 = '*';
                        nLightPcs -= 1;
                        cTemp = cD7;
                        cD7 = cF5;
                        cF5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D7C8") == 0 && cC8 == '*' && cD7 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cD7;
                        cD7 = cC8;
                        cC8 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "D7E8") == 0 && cE8 == '*' && cD7 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cD7;
                        cD7 = cE8;
                        cE8 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    /*END OF ALL D COLUMN MOVES*/
                    else if (strcmp(sMove, "E2D3") == 0 && cD3 == '*' && cE2 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cE2;
                        cE2 = cD3;
                        cD3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E2F3") == 0 && cF3 == '*' && cE2 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cE2;
                        cE2 = cF3;
                        cF3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E2C4") == 0 && cC4 == '*' && cD3 == 'D' && cE2 == 'L' && cPrevious == 'D')
                    {
                        cD3 = '*';
                        nDarkPcs -= 1;
                        cTemp = cE2;
                        cE2 = cC4;
                        cC4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E2G4") == 0 && cG4 == '*' && cF3 == 'D' && cE2 == 'L' && cPrevious == 'D')
                    {
                        cF3 = '*';
                        nDarkPcs -= 1;
                        cTemp = cE2;
                        cE2 = cG4;
                        cG4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E2D1") == 0 && cD1 == '*' && cE2 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cE2;
                        cE2 = cD1;
                        cD1 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E2F1") == 0 && cF1 == '*' && cE2 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cE2;
                        cE2 = cF1;
                        cF1 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E4D5") == 0 && cD5 == '*' && cE4 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cE4;
                        cE4 = cD5;
                        cD5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E4F5") == 0 && cF5 == '*' && cE4 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cE4;
                        cE4 = cF5;
                        cF5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E4C6") == 0 && cC6 == '*' && cD5 == 'D' && cE4 == 'L' && cPrevious == 'D')
                    {
                        cD5 = '*';
                        nDarkPcs -= 1;
                        cTemp = cE4;
                        cE4 = cC6;
                        cC6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E4G6") == 0 && cG6 == '*' && cF5 == 'D' && cE4 == 'L' && cPrevious == 'D')
                    {
                        cF5 = '*';
                        nDarkPcs -= 1;
                        cTemp = cE4;
                        cE4 = cG6;
                        cG6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E4D3") == 0 && cD3 == '*' && cE4 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cE4;
                        cE4 = cD3;
                        cD3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E4F3") == 0 && cF3 == '*' && cE4 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cE4;
                        cE4 = cF3;
                        cF3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E4C2") == 0 && cC2 == '*' && cD3 == 'L' && cE4 == 'D' && cPrevious == 'L')
                    {
                        cD3 = '*';
                        nLightPcs -= 1;
                        cTemp = cE4;
                        cE4 = cC2;
                        cC2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E4G2") == 0 && cG2 == '*' && cF3 == 'L' && cE4 == 'D' && cPrevious == 'L')
                    {
                        cF3 = '*';
                        nLightPcs -= 1;
                        cTemp = cE4;
                        cE4 = cG2;
                        cG2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E6D5") == 0 && cD5 == '*' && cE6 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cE6;
                        cE6 = cD5;
                        cD5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E6F5") == 0 && cF5 == '*' && cE6 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cE6;
                        cE6 = cF5;
                        cF5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E6C4") == 0 && cC4 == '*' && cD5 == 'L' && cE6 == 'D' && cPrevious == 'L')
                    {
                        cD5 = '*';
                        nLightPcs -= 1;
                        cTemp = cE6;
                        cE6 = cC4;
                        cC4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E6G4") == 0 && cG4 == '*' && cF5 == 'L' && cE6 == 'D' && cPrevious == 'L')
                    {
                        cF5 = '*';
                        nLightPcs -= 1;
                        cTemp = cE6;
                        cE6 = cG4;
                        cG4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E6D7") == 0 && cD7 == '*' && cE6 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cE6;
                        cE6 = cD7;
                        cD7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E6F7") == 0 && cF7 == '*' && cE6 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cE6;
                        cE6 = cF7;
                        cF7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E6C8") == 0 && cC8 == '*' && cD7 == 'D' && cE6 == 'L' && cPrevious == 'D')
                    {
                        cD7 = '*';
                        nDarkPcs -= 1;
                        cTemp = cE6;
                        cE6 = cC8;
                        cC8 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E6G8") == 0 && cG8 == '*' && cF7 == 'D' && cE6 == 'L' && cPrevious == 'D')
                    {
                        cF7 = '*';
                        nDarkPcs -= 1;
                        cTemp = cE6;
                        cE6 = cG8;
                        cG8 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E8D7") == 0 && cD7 == '*' && cE8 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cE8;
                        cE8 = cD7;
                        cD7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E8F7") == 0 && cF7 == '*' && cE8 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cE8;
                        cE8 = cF7;
                        cF7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E8C6") == 0 && cC6 == '*' && cD7 == 'L' && cE8 == 'D' && cPrevious == 'L')
                    {
                        cD7 = '*';
                        nLightPcs -= 1;
                        cTemp = cE8;
                        cE8 = cC6;
                        cC6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "E8G6") == 0 && cG6 == '*' && cF7 == 'L' && cE8 == 'D' && cPrevious == 'L')
                    {
                        cF7 = '*';
                        nLightPcs -= 1;
                        cTemp = cE8;
                        cE8 = cG6;
                        cG6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    /*END OF ALL E COLUMN MOVES*/
                    else if (strcmp(sMove, "F1E2") == 0 && cE2 == '*' && cF1 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cF1;
                        cF1 = cE2;
                        cE2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F1G2") == 0 && cG2 == '*' && cF1 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cF1;
                        cF1 = cG2;
                        cG2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F1D3") == 0 && cD3 == '*' && cE2 == 'D' && cF1 == 'L' && cPrevious == 'D')
                    {
                        cE2 = '*';
                        nDarkPcs -= 1;
                        cTemp = cF1;
                        cF1 = cD3;
                        cD3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F1H3") == 0 && cH3 == '*' && cG2 == 'D' && cF1 == 'L' && cPrevious == 'D')
                    {
                        cG2 = '*';
                        nDarkPcs -= 1;
                        cTemp = cF1;
                        cF1 = cH3;
                        cH3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F3E4") == 0 && cE4 == '*' && cF3 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cF3;
                        cF3 = cE4;
                        cE4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F3G4") == 0 && cG4 == '*' && cF3 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cF3;
                        cF3 = cG4;
                        cG4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F3D5") == 0 && cD5 == '*' && cE4 == 'D' && cF3 == 'L' && cPrevious == 'D')
                    {
                        cE4 = '*';
                        nDarkPcs -= 1;
                        cTemp = cF3;
                        cF3 = cD5;
                        cD5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F3H5") == 0 && cH5 == '*' && cG4 == 'D' && cF3 == 'L' && cPrevious == 'D')
                    {
                        cG4 = '*';
                        nDarkPcs -= 1;
                        cTemp = cF3;
                        cF3 = cH5;
                        cH5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F3E2") == 0 && cE2 == '*' && cF3 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cF3;
                        cF3 = cE2;
                        cE2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F3G2") == 0 && cG2 == '*' && cF3 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cF3;
                        cF3 = cG2;
                        cG2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F3D1") == 0 && cD1 == '*' && cE2 == 'L' && cF3 == 'D' && cPrevious == 'L')
                    {
                        cE2 = '*';
                        nLightPcs -= 1;
                        cTemp = cF3;
                        cF3 = cD1;
                        cD1 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F3H1") == 0 && cH1 == '*' && cG2 == 'L' && cF3 == 'D' && cPrevious == 'L')
                    {
                        cG2 = '*';
                        nLightPcs -= 1;
                        cTemp = cF3;
                        cF3 = cH1;
                        cH1 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F5E4") == 0 && cE4 == '*' && cF5 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cF5;
                        cF5 = cE4;
                        cE4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F5G4") == 0 && cG4 == '*' && cF5 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cF5;
                        cF5 = cG4;
                        cG4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F5D3") == 0 && cD3 == '*' && cE4 == 'L' && cF5 == 'D' && cPrevious == 'L')
                    {
                        cE4 = '*';
                        nLightPcs -= 1;
                        cTemp = cF5;
                        cF5 = cD3;
                        cD3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F5H3") == 0 && cH3 == '*' && cG4 == 'L' && cF5 == 'D' && cPrevious == 'L')
                    {
                        cG4 = '*';
                        nLightPcs -= 1;
                        cTemp = cF5;
                        cF5 = cH3;
                        cH3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F5E6") == 0 && cE6 == '*' && cF5 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cF5;
                        cF5 = cE6;
                        cE6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F5G6") == 0 && cG6 == '*' && cF5 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cF5;
                        cF5 = cG6;
                        cG6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F5D7") == 0 && cD7 == '*' && cE6 == 'D' && cF5 == 'L' && cPrevious == 'D')
                    {
                        cE6 = '*';
                        nDarkPcs -= 1;
                        cTemp = cF5;
                        cF5 = cD7;
                        cD7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F5H7") == 0 && cH7 == '*' && cG6 == 'D' && cF5 == 'L' && cPrevious == 'D')
                    {
                        cG6 = '*';
                        nDarkPcs -= 1;
                        cTemp = cF5;
                        cF5 = cH7;
                        cH7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F7E6") == 0 && cE6 == '*' && cF7 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cF7;
                        cF7 = cE6;
                        cE6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F7G6") == 0 && cG6 == '*' && cF7 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cF7;
                        cF7 = cG6;
                        cG6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F7D5") == 0 && cD5 == '*' && cE6 == 'L' && cF7 == 'D' && cPrevious == 'L')
                    {
                        cE6 = '*';
                        nLightPcs -= 1;
                        cTemp = cF7;
                        cF7 = cD5;
                        cD5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F7H5") == 0 && cH5 == '*' && cG6 == 'L' && cF7 == 'D' && cPrevious == 'L')
                    {
                        cG6 = '*';
                        nLightPcs -= 1;
                        cTemp = cF7;
                        cF7 = cH5;
                        cH5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F7E8") == 0 && cE8 == '*' && cF7 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cF7;
                        cF7 = cE8;
                        cE8 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "F7G8") == 0 && cG8 == '*' && cF7 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cF7;
                        cF7 = cG8;
                        cG8 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    /*END OF ALL F COLUMN MOVES*/
                    else if (strcmp(sMove, "G2F3") == 0 && cF3 == '*' && cG2 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cG2;
                        cG2 = cF3;
                        cF3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G2H3") == 0 && cH3 == '*' && cG2 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cG2;
                        cG2 = cH3;
                        cH3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G2E4") == 0 && cE4 == '*' && cF3 == 'D' && cG2 == 'L' && cPrevious == 'D')
                    {
                        cF3 = '*';
                        nDarkPcs -= 1;
                        cTemp = cG2;
                        cG2 = cE4;
                        cE4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G2F1") == 0 && cF1 == '*' && cG2 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cG2;
                        cG2 = cF1;
                        cF1 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G2H1") == 0 && cH1 == '*' && cG2 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cG2;
                        cG2 = cH1;
                        cH1 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G4F5") == 0 && cF5 == '*' && cG4 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cG4;
                        cG4 = cF5;
                        cF5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G4H5") == 0 && cH5 == '*' && cG4 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cG4;
                        cG4 = cH5;
                        cH5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G4E6") == 0 && cE6 == '*' && cF5 == 'D' && cG4 == 'L' && cPrevious == 'D')
                    {
                        cF5 = '*';
                        nDarkPcs -= 1;
                        cTemp = cG4;
                        cG4 = cE6;
                        cE6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G4F3") == 0 && cF3 == '*' && cG4 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cG4;
                        cG4 = cF3;
                        cF3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G4H3") == 0 && cH3 == '*' && cG4 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cG4;
                        cG4 = cH3;
                        cH3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G4E2") == 0 && cE2 == '*' && cF3 == 'L' && cG4 == 'D' && cPrevious == 'L')
                    {
                        cF3 = '*';
                        nLightPcs -= 1;
                        cTemp = cG4;
                        cG4 = cE2;
                        cE2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G6F5") == 0 && cF5 == '*' && cG6 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cG6;
                        cG6 = cF5;
                        cF5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G6H5") == 0 && cH5 == '*' && cG6 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cG6;
                        cG6 = cH5;
                        cH5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G6E4") == 0 && cE4 == '*' && cF5 == 'L' && cG6 == 'D' && cPrevious == 'L')
                    {
                        cF5 = '*';
                        nLightPcs -= 1;
                        cTemp = cG6;
                        cG6 = cE4;
                        cE4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G6F7") == 0 && cF7 == '*' && cG6 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cG6;
                        cG6 = cF7;
                        cF7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G6H7") == 0 && cH7 == '*' && cG6 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cG6;
                        cG6 = cH7;
                        cH7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G6E8") == 0 && cE8 == '*' && cF7 == 'D' && cG6 == 'L' && cPrevious == 'D')
                    {
                        cF7 = '*';
                        nDarkPcs -= 1;
                        cTemp = cG6;
                        cG6 = cE8;
                        cE8 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G8F7") == 0 && cF7 == '*' && cG8 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cG8;
                        cG8 = cF7;
                        cF7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G8H7") == 0 && cH7 == '*' && cG8 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cG8;
                        cG8 = cH7;
                        cH7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "G8E6") == 0 && cE6 == '*' && cF7 == 'L' && cG8 == 'D' && cPrevious == 'L')
                    {
                        cF7 = '*';
                        nLightPcs -= 1;
                        cTemp = cG8;
                        cG8 = cE6;
                        cE6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    /*END OF ALL G COLUMN MOVES*/
                    else if (strcmp(sMove, "H1G2") == 0 && cG2 == '*' && cH1 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cH1;
                        cH1 = cG2;
                        cG2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "H1F3") == 0 && cF3 == '*' && cG2 == 'D' && cH1 == 'L' && cPrevious == 'D')
                    {
                        cG2 = '*';
                        nDarkPcs -= 1;
                        cTemp = cH1;
                        cH1 = cF3;
                        cF3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "H3G4") == 0 && cG4 == '*' && cH3 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cH3;
                        cH3 = cG4;
                        cG4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "H3F5") == 0 && cF5 == '*' && cG4 == 'D' && cH3 == 'L' && cPrevious == 'D')
                    {
                        cG4 = '*';
                        nDarkPcs -= 1;
                        cTemp = cH3;
                        cH3 = cF5;
                        cF5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "H3G2") == 0 && cG2 == '*' && cH3 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cH3;
                        cH3 = cG2;
                        cG2 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "H3F1") == 0 && cF1 == '*' && cG2 == 'L' && cH3 == 'D' && cPrevious == 'L')
                    {
                        cG2 = '*';
                        nLightPcs -= 1;
                        cTemp = cH3;
                        cH3 = cF1;
                        cF1 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "H5G4") == 0 && cG4 == '*' && cH5 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cH5;
                        cH5 = cG4;
                        cG4 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "H5F3") == 0 && cF3 == '*' && cG4 == 'L' && cH5 == 'D' && cPrevious == 'L')
                    {
                        cG4 = '*';
                        nLightPcs -= 1;
                        cTemp = cH5;
                        cH5 = cF3;
                        cF3 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "H5G6") == 0 && cG6 == '*' && cH5 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cH5;
                        cH5 = cG6;
                        cG6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "H5F7") == 0 && cF7 == '*' && cG6 == 'D' && cH5 == 'L' && cPrevious == 'D')
                    {
                        cG6 = '*';
                        nDarkPcs -= 1;
                        cTemp = cH5;
                        cH5 = cF7;
                        cF7 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "H7G6") == 0 && cG6 == '*' && cH7 == 'D' && cPrevious == 'L')
                    {
                        cTemp = cH7;
                        cH7 = cG6;
                        cG6 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "H7F5") == 0 && cF5 == '*' && cG6 == 'L' && cH7 == 'D' && cPrevious == 'L')
                    {
                        cG6 = '*';
                        nLightPcs -= 1;
                        cTemp = cH7;
                        cH7 = cF5;
                        cF5 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "H7G8") == 0 && cG8 == '*' && cH7 == 'L' && cPrevious == 'D')
                    {
                        cTemp = cH7;
                        cH7 = cG8;
                        cG8 = cTemp;
                        cCurrentPlayer = swapPlayer(cCurrentPlayer);
                        checkValidLight(&nIsValidLight, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                        checkValidDark(&nIsValidDark, cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                        cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);

                        nWinner = checkWinner(cB1, cD1, cF1, cH1, cA8, cC8, cE8, cG8, cPrevious, nDarkPcs, nLightPcs, nWinner, nIsValidLight, nIsValidDark);

                        cPrevious = swapPiece(cPrevious);
                        cCurrent = swapCurrent(cCurrent);
                    }
                    else if (strcmp(sMove, "QUIT") == 0)
                    {
                        nWinner = 1;
                        printf("\n\nQuitting current game...\n");
                    }
                    else
                    {
                        printf("\nInvalid Input! Please try again...\n");
                    }
                }

                if (nWinner == 1)
                {
                    displayBoard(cB1, cD1, cF1, cH1, cA2, cC2, cE2, cG2, cB3, cD3, cF3, cH3, cA4, cC4, cE4, cG4, cB5, cD5, cF5, cH5, cA6, 
                    cC6, cE6, cG6, cB7, cD7, cF7, cH7, cA8, cC8, cE8, cG8);
                    
                    cCurrentPlayer = swapPlayer(cCurrentPlayer);
                    if (cCurrentPlayer == 'A')
                    {
                        nScoreA++;
                    }
                    else
                    {
                        nScoreB++;
                    }
                    printf("\n********************************\n");
                    printf("******* CONGRATULATIONS  *******\n");
                    printf("*********   PLAYER %c!  *********\n", cCurrentPlayer);
                    printf("********************************\n");

                    printf("\n%21s", "You've Won!");
                }

                printf("\n\nType in (M) to return to the Menu or (Q) to exit the game: ");
                break;

            case 'S': 
                // display the scores of each player, stored after each finished game
                printf("\n********************************\n");
                printf("******** CURRENT SCORES ********\n");
                printf("********************************\n");
                printf("%19s %d\n", "Player A:", nScoreA);
                printf("%19s %d\n", "Player B:", nScoreB);
                printf("********************************");
                
                printf("\n\nType in (M) to return to the Menu or (Q) to exit the game: ");
                break;

            case 'Q': 
                quitGame();
                cMenu = 'Q';
                break;

            case 'M':
                displayMenu();
                break;

            default: 
                printf("\nInvalid input, please try again.\n");
                printf("\nPlease select an option: ");
                break;
        }
    } while (cMenu != 'Q');

    return 0;
}