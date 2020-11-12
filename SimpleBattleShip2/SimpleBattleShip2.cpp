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
    int numberOfHits = 0;
    int numberOfShots = 0;
    int maxShots = 20;
    bool allShips = false;
     if (numberOfShots <= maxShots && allShips == false)
     {
         makeEmptyBoard(); 
     }

     else
     {
         std::cout << "Number of shots: " << numberOfShots << std::endl;
         std::cout << "Number of hits: " << numberOfHits << std::endl;
     }
    

}

void makeEmptyBoard()
{
    char BLANK =  NULL;

    std::vector <std::vector <char>> board(M, std::vector<char>(N)); // A vector to store the content of the board
    for (int i = 0; i < M; i++) 
    {

        for (int j = 0; j < N; j++) {



            board[i][j] = BLANK;


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
    for (int i = 0; i < M; i++) {
       


        for (int j = 0; j < N; j++) {

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
    for (int i = 0; i < M; i++) {



        for (int j = 0; j < N; j++) {

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

void shoot(std::vector <std::vector<char>>& board, int &numberOfShots, int  &numberOfHits)
{
    std::string cell;
    cell:
    std::cout << "Which cell would you like to shoot at? (Please use the format column row, example: B3))\n";
    std::cin >> cell;
    
    std::vector <char> coordinates(cell.begin(), cell.end());
    coordinates.at(0) = toupper(coordinates.at(0));
    std::vector <int> numericCoordinates[2];

    if (coordinates.at(0) == 'A')
    {
        if (coordinates.at(1) == '1')
        {
            if (board[0][0] == 'S')
            {
                board[0][0] = 'H';
                numberOfHits++;
            }

            else
            {
                board[0][0] = 'M';

            }
        }

        else if (coordinates.at(1) == '2')
        {
            if (board[1][0] == 'S')
            {
                board[1][0] = 'H';
                numberOfHits++;
            }

            else
            {
                board[1][0] = 'M';

            }
        }

        else if (coordinates.at(1) == '3')
        {
            if (board[2][0] == 'S')
            {
                board[2][0] = 'H';
                numberOfHits++;
            }

            else
            {
                board[2][0] = 'M';

            }
        }

        else if (coordinates.at(1) == '4')
        {
            if (board[3][0] == 'S')
            {
                board[3][0] = 'H';
                numberOfHits++;
            }

            else
            {
                board[3][0] = 'M';

            }
        }

        else if (coordinates.at(1) == '5')
        {
            if (board[4][0] == 'S')
            {
                board[4][0] = 'H';
                numberOfHits++;
            }

            else
            {
                board[4][0] = 'M';

            }
        }

        else if (coordinates.at(1) == '6')
        {
            if (board[5][0] == 'S')
            {
                board[5][0] = 'H';
                numberOfHits++;
            }

            else
            {
                board[5][0] = 'M';

            }
        }

        else
        {
            std::cout << "Invalid input.\n";
            goto cell;
        }
    }

    if (coordinates.at(0) == 'B')
    {
        if (coordinates.at(1) == '1')
        {
            if (board[0][1] == 'S')
            {
                board[0][1] = 'H';
                numberOfHits++;
            }

            else
            {
                board[0][1] = 'M';

            }
        }

        else if (coordinates.at(1) == '2')
        {
            if (board[1][1] == 'S')
            {
                board[1][1] = 'H';
                numberOfHits++;
            }

            else
            {
                board[1][1] = 'M';

            }
        }

        else if (coordinates.at(1) == '3')
        {
            if (board[2][1] == 'S')
            {
                board[2][1] = 'H';
                numberOfHits++;
            }

            else
            {
                board[2][1] = 'M';

            }
        }

        else if (coordinates.at(1) == '4')
        {
            if (board[3][1] == 'S')
            {
                board[3][1] = 'H';
                numberOfHits++;
            }

            else
            {
                board[3][1] = 'M';

            }
        }

        else if (coordinates.at(1) == '5')
        {
            if (board[4][1] == 'S')
            {
                board[4][1] = 'H';
                numberOfHits++;
            }

            else
            {
                board[4][1] = 'M';

            }
        }

        else if (coordinates.at(1) == '6')
        {
            if (board[5][1] == 'S')
            {
                board[5][1] = 'H';
                numberOfHits++;
            }

            else
            {
                board[5][1] = 'M';

            }
        }

        else
        {
            std::cout << "Invalid input.\n";
            goto cell;
        }
    }

    if (coordinates.at(0) == 'C')
    {
        if (coordinates.at(1) == '1')
        {
            if (board[0][2] == 'S')
            {
                board[0][2] = 'H';
                numberOfHits++;
            }

            else
            {
                board[0][2] = 'M';

            }
        }

        else if (coordinates.at(1) == '2')
        {
            if (board[1][2] == 'S')
            {
                board[1][2] = 'H';
                numberOfHits++;
            }

            else
            {
                board[1][2] = 'M';

            }
        }

        else if (coordinates.at(1) == '3')
        {
            if (board[2][2] == 'S')
            {
                board[2][2] = 'H';
                numberOfHits++;
            }

            else
            {
                board[2][2] = 'M';

            }
        }

        else if (coordinates.at(1) == '4')
        {
            if (board[3][2] == 'S')
            {
                board[3][2] = 'H';
                numberOfHits++;
            }

            else
            {
                board[3][2] = 'M';

            }
        }

        else if (coordinates.at(1) == '5')
        {
            if (board[4][2] == 'S')
            {
                board[4][2] = 'H';
                numberOfHits++;
            }

            else
            {
                board[4][2] = 'M';

            }
        }

        else if (coordinates.at(1) == '6')
        {
            if (board[5][2] == 'S')
            {
                board[5][2] = 'H';
                numberOfHits++;
            }

            else
            {
                board[5][2] = 'M';

            }
        }

        else
        {
            std::cout << "Invalid input.\n";
            goto cell;
        }
    }

    if (coordinates.at(0) == 'D')
    {
        if (coordinates.at(1) == '1')
        {
            if (board[0][3] == 'S')
            {
                board[0][3] = 'H';
                numberOfHits++;
            }

            else
            {
                board[0][3] = 'M';

            }
        }

        else if (coordinates.at(1) == '2')
        {
            if (board[1][3] == 'S')
            {
                board[1][3] = 'H';
                numberOfHits++;
            }

            else
            {
                board[1][3] = 'M';

            }
        }

        else if (coordinates.at(1) == '3')
        {
            if (board[2][3] == 'S')
            {
                board[2][3] = 'H';
                numberOfHits++;
            }

            else
            {
                board[2][3] = 'M';

            }
        }

        else if (coordinates.at(1) == '4')
        {
            if (board[3][3] == 'S')
            {
                board[3][3] = 'H';
                numberOfHits++;
            }

            else
            {
                board[3][3] = 'M';

            }
        }

        else if (coordinates.at(1) == '5')
        {
            if (board[4][3] == 'S')
            {
                board[4][3] = 'H';
                numberOfHits++;
            }

            else
            {
                board[4][3] = 'M';

            }
        }

        else if (coordinates.at(1) == '6')
        {
            if (board[5][3] == 'S')
            {
                board[5][3] = 'H';
                numberOfHits++;
            }

            else
            {
                board[5][3] = 'M';

            }
        }

        else
        {
            std::cout << "Invalid input.\n";
            goto cell;
        }
    }

    if (coordinates.at(0) == 'E')
    {
        if (coordinates.at(1) == '1')
        {
            if (board[0][4] == 'S')
            {
                board[0][4] = 'H';
                numberOfHits++;
            }

            else
            {
                board[0][4] = 'M';

            }
        }

        else if (coordinates.at(1) == '2')
        {
            if (board[1][4] == 'S')
            {
                board[1][4] = 'H';
                numberOfHits++;
            }

            else
            {
                board[1][4] = 'M';

            }
        }

        else if (coordinates.at(1) == '3')
        {
            if (board[2][4] == 'S')
            {
                board[2][4] = 'H';
                numberOfHits++;
            }

            else
            {
                board[2][4] = 'M';

            }
        }

        else if (coordinates.at(1) == '4')
        {
            if (board[3][4] == 'S')
            {
                board[3][4] = 'H';
                numberOfHits++;
            }

            else
            {
                board[3][4] = 'M';

            }
        }

        else if (coordinates.at(1) == '5')
        {
            if (board[4][4] == 'S')
            {
                board[4][4] = 'H';
                numberOfHits++;
            }

            else
            {
                board[4][4] = 'M';

            }
        }

        else if (coordinates.at(1) == '6')
        {
            if (board[5][4] == 'S')
            {
                board[5][4] = 'H';
                numberOfHits++;
            }

            else
            {
                board[5][4] = 'M';

            }
        }

        else
        {
            std::cout << "Invalid input.\n";
            goto cell;
        }
    }

    if (coordinates.at(0) == 'F')
    {
        if (coordinates.at(1) == '1')
        {
            if (board[0][5] == 'S')
            {
                board[0][5] = 'H';
                numberOfHits++;
            }

            else
            {
                board[0][5] = 'M';

            }
        }

        else if (coordinates.at(1) == '2')
        {
            if (board[1][5] == 'S')
            {
                board[1][5] = 'H';
                numberOfHits++;
            }

            else
            {
                board[1][5] = 'M';

            }
        }

        else if (coordinates.at(1) == '3')
        {
            if (board[2][5] == 'S')
            {
                board[2][5] = 'H';
                numberOfHits++;
            }

            else
            {
                board[2][5] = 'M';

            }
        }

        else if (coordinates.at(1) == '4')
        {
            if (board[3][5] == 'S')
            {
                board[3][5] = 'H';
                numberOfHits++;
            }

            else
            {
                board[3][5] = 'M';

            }
        }

        else if (coordinates.at(1) == '5')
        {
            if (board[4][5] == 'S')
            {
                board[4][5] = 'H';
                numberOfHits++;
            }

            else
            {
                board[4][5] = 'M';

            }
        }

        else if (coordinates.at(1) == '6')
        {
            if (board[5][5] == 'S')
            {
                board[5][5] = 'H';
                numberOfHits++;
            }

            else
            {
                board[5][5] = 'M';

            }
        }

        else
        {
            std::cout << "Invalid input.\n";
            goto cell;
        }
    }

    else
    {
        std::cout << "Invalid input.\n";
        goto cell;
    }

    numberOfShots++;
}


void play()
{

}