/* Да се състави програма, с помощта на която 2
(3, 1) играчи могат да играят (с право на връщане на
ходовете) следната игра ЛАБИРИНТ: Трябва да се достигне
до финала, отбелязан с F. Числото във всяка клетка
показва броя стъпки по права линия, които могат да са
направят при следващия ход. Като се започне от горния
ляв ъгъл, са възможни само два хода  
3324312
2423243
4232421
4412234
3233422
3242321
113342F
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define BOARDROWS 7
#define BOARDCOLS 7
HANDLE hConsole;
CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
WORD saved_attributes;

enum direction
{
    UP,
    DOWN,
    LEFT,
    RIGHT,
    REVERT
};

typedef struct position
{
    int i;
    int j;
} position;

/* intitialize a board with random nums 1-4 and put F on a random position on the last row */
void initializeBoard(int **board, position *end)
{
    int i, j, r;
    for (i = 0; i < BOARDROWS; i++)
    {
        for (j = 0; j < BOARDCOLS; j++)
        {
            board[i][j] = rand() % 4 + 1;
        }
    }
    r = rand() % BOARDCOLS;
    board[--i][r] = 0xF;
    end->i = i;
    end->j = r;
}

void printBoard(int **board, position *p, position *end)
{
    int i, j;
    for (i = 0; i < BOARDROWS; i++)
    {
        printf("\n");
        for (j = 0; j < BOARDCOLS; j++)
        {
            if (i == p->i && j == p->j)
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
                printf("%X ", board[i][j]);
                SetConsoleTextAttribute(hConsole, saved_attributes);
            }
            else if (i == end->i && j == end->j)
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                printf("%X ", board[i][j]);
                SetConsoleTextAttribute(hConsole, saved_attributes);
            }
            else
            {
                printf("%X ", board[i][j]); /* represent the ints as hex */
            }
        }
    }
    printf("\n");
}

int isGameEnd(int **board, position *currentPosition, position *end)
{
    int i, j;
    if (currentPosition->i == end->i && currentPosition->j == end->j)
    {
        printf("CONGRATULATIONS!!! You reached the labyrinth's end!\n");
        return 1;
    }
    return 0;
}

int isValid(int **board, position *currentPosition, enum direction dir)
{
    int i = currentPosition->i;
    int j = currentPosition->j;
    int valid = 1;

    if (dir == UP)
    {
        if (currentPosition->i - board[i][j] < 0)
            valid = 0;
    }
    else if (dir == DOWN)
    {
        if (currentPosition->i + board[i][j] > BOARDROWS - 1)
            valid = 0;
    }
    else if (dir == LEFT)
    {
        if (currentPosition->j - board[i][j] < 0)
            valid = 0;
    }
    else if (dir == RIGHT)
    {
        if (currentPosition->j + board[i][j] > BOARDCOLS - 1)
            valid = 0;
    } else if (dir == REVERT) {
        printf("Reverted to the previous position.");
    } else {
        valid = 0;
    }

    return valid;
}

void move(int **board, position *currentPosition, position *previousPosition, enum direction dir)
{
    int i = currentPosition->i;
    int j = currentPosition->j;

    if (isValid(board, currentPosition, dir))
    {
        
        if (dir == UP)
        {
            previousPosition->i = i;
            previousPosition->j = j;
            currentPosition->i -= board[i][j];
        }
        else if (dir == DOWN)
        {
            previousPosition->i = i;
            previousPosition->j = j;
            currentPosition->i += board[i][j];
        }
        else if (dir == RIGHT)
        {
            previousPosition->i = i;
            previousPosition->j = j;
            currentPosition->j += board[i][j];
        }
        else if (dir == LEFT)
        {
            previousPosition->i = i;
            previousPosition->j = j;
            currentPosition->j -= board[i][j];
        }
        else if (dir == REVERT) {
            currentPosition->i = previousPosition->i;
            currentPosition->j = previousPosition->j;
        }
    }
    else
    {
        printf("\nINVALID move!\n");
    }
}

int main()
{
    srand(time(0));
    int i;
    position *end, *currentPosition, *previousPosition;
    enum direction d;

    /* Alloc memory for position and end */
    end = (position *)malloc(sizeof(position));
    currentPosition = (position *)malloc(sizeof(position));
    previousPosition = (position *)malloc(sizeof(position));
    /* player always starts from position 0 */
    currentPosition->i = 0;
    currentPosition->j = 0;
    previousPosition->i = 0;
    previousPosition->j = 0;

    /* Allocate memory for the board */
    int **board = (int **)malloc(BOARDROWS * sizeof(int *));
    for (i = 0; i < BOARDROWS; i++)
    {
        board[i] = (int *)malloc(BOARDCOLS * sizeof(int));
    }

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    /* Save current console attributes*/
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    /* Initialize and print the board for the first time */
    initializeBoard(board, end);
    printf("Here is your labyrinth: \n");
    printBoard(board, currentPosition, end);

    while (!isGameEnd(board, currentPosition, end))
    {
        printf("\nIn which direction do you want to move?\n0 for UP | 1 for DOWN | 2 for LEFT | 3 for RIGHT | 4 to REVERT: \n");
        scanf(" %d", &d);
        move(board, currentPosition, previousPosition, d);
        printBoard(board, currentPosition, end);
    }

    /* free memory for each row */
    for (i = 0; i < BOARDROWS; i++)
    {
        free(board[i]);
    }
    /* free the rest of allocated space */
    free(board);
    free(end);
    free(currentPosition);
    free(previousPosition);

    return 0;
}