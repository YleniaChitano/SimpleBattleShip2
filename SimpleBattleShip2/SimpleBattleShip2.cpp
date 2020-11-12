#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

void makeEmptyBoard();
int randomRow();
void writeLetters();
void makeBoard(int numberOfShips, std::vector <std::vector<char>>& board);
void printBoard(std::vector <std::vector<char>>& board);
void printPlayerBoard(std::vector <std::vector<char>>& board);
void shoot(std::vector <std::vector<char>>& board);
void play();

int numberOfShips = 2;
int M = 6;
int N = 6;



int main()
{
    std::cout << "Hello World!\n";
    makeEmptyBoard();
}

void makeEmptyBoard()
{
    char BLANK =  ' ';

    std::vector <std::vector <char>> board(M, std::vector<char>(N)); // A vector to store the content of the board
    for (unsigned int i = 0; i < M; i++) 
    {

        for (unsigned int j = 0; j < N; j++) {



            board[i][j] << BLANK;


        }

    }

    

    makeBoard(numberOfShips, board);
    printBoard(board);
    printPlayerBoard(board);
}

int randomRow()
{
    int index;
    srand(std::time(0));
    index = (rand() % M);

    return index;
}

int randomColumn()
{
    int index;
    srand(std::time(0));
    index = (rand() % N);

    return index;
}

void writeLetters()
{
    std::cout << " -------------\n";
    std::cout << " |A|B|C|D|E|F|\n";
}

void makeBoard(int numberOfShips, std::vector <std::vector<char>>& board)
{
    char SHIP = 'S';
    for (int i = 0; i < numberOfShips; i++)
    {
        if (board[randomRow()][randomColumn()] != SHIP)
        {
            board[randomRow()][randomColumn()] = SHIP;
        }

        else
        {
            i = i - 1;
        }
    }
}



void printBoard(std::vector <std::vector<char>>& board)
{
    for (unsigned int i = 0; i < M; i++) {
       


        for (unsigned int j = 0; j < N; j++) {

           if (j == 0) 
           {
               std::cout << (i + 1);
               std::cout << "|";
           }

            if (board[i][j] == 'S')
            {
                std::cout << board[i][j];
                
            }

            else
            { std::cout << " "; }
           
            std::cout << "|";



        }
        std::cout << std::endl;
    }
    writeLetters();
    std::cout << std::endl;
}

void printPlayerBoard(std::vector <std::vector<char>>& board)
{
    for (unsigned int i = 0; i < M; i++) {



        for (unsigned int j = 0; j < N; j++) {

            if (j == 0)
            {
                std::cout << (i + 1);
                std::cout << "|";
            }

            if (board[i][j] == 'H' | board[i][j] == 'M')
            {
             std::cout << board[i][j];
            }

            else
            {
                std::cout << " ";
            }

           

            std::cout << "|";



        }
        std::cout << std::endl;
    }
    writeLetters();
    std::cout << std::endl;
}

void shoot(std::vector <std::vector<char>>& board)
{
    std::string cell;
    std::cout << "Which cell would you like to shoot at? (Please use the format column row, example: B3))\n";
    std::cin >> cell;

}

void play()
{

}