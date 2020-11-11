#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

void makeEmptyBoard();
int randomRow();
void writeLetters();
void makeBoard(int numberOfShips);
void printBoard(std::vector <std::vector<char>>& board);

int numberOfShips = 1;
int M = 6;
int N = 6;



int main()
{
    std::cout << "Hello World!\n";
    makeEmptyBoard();
}

void makeEmptyBoard()
{
    char BLANK = NULL;

    std::vector <std::vector <char>> board(M, std::vector<char>(N)); // A vector to store the content of the board
    for (unsigned int i = 0; i < board.size(); i++) 
    {

        for (unsigned int j = 0; j < sizeof(board[i]) / sizeof(board[i][j]); j++) {



            board[i][j] << BLANK;


        }

    }

    makeBoard(numberOfShips);
    printBoard(board);
}

int randomRow()
{
    int index;
    srand(std::time(0));
    index = (1 + rand() % 6);

    return index;
}

int randomColumn()
{
    int index;
    srand(std::time(0));
    index = (1 + rand() % 6);

    return index;
}

void writeLetters()
{
    std::cout << "| A | B | C | D | E | F |";
}

void makeBoard(int numberOfShips)
{
    const int SHIP[2] = { randomRow(), randomColumn() };

}



void printBoard(std::vector <std::vector<char>>& board)
{
    for (unsigned int i = 0; i < M; i++) {

        for (unsigned int j = 0; j < N; j++) {



            std::cout << board[i][j];



        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}