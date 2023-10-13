/**
 * TIC TAC TOE GAME
 * Overview:
 * in this game you have a grid and 2 players.
 * One player draws X's on the grid and the other 
 * player draws O's. 
 * The players take turns choosing a spot on the 
 * grid to draw their X or O and the first player
 * to connect 3 of their characters in a row,
 * column or diagonal wins.
 * 
 * Things you will need to use:
 * a 2d array or an array of strings (can be dynamic or not)
 * Both While and possibly For loops
 * Conditional Statements (if, else if, else)
 * User Input and Output
 * 
 * Things you SHOULD use:
 * Functions (to divide up the work of the program)
 * Iomanip (it's good practice)
 * 
 * Some things to help you get started:
 *  Passing arrays to functions:
 *      void myFunc(char arr[]) //Array of chars as parameter (dynamic or not)
 *      void myFunc(char arr[][3]) //2d array of chars as parameter
 *      void myFunc(string arr[]) //Array of string as parameter
 *      void myFunc(char**arr) //Dynamic 2d array of pointers as parameter
 * NOTE: None of these are pssing by value (All of them can be modified)
 * 
 * A do-while loop or while loop could be useful to get user input
 * for the row and column that they want to put an X or O on.
 * 
 * Using conditional statements and booleans will be helpful
 * to check whether someone has won yet
 * 
 * Make sure to check whether a spot is already taken and ask the 
 * the user to try again if they want to put an X or O where one 
 * already exists.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void intro();
void getInput(char symbol, char board[][3]);
void getPosition(int &row, int &col);
bool validInput(char symbol, char board[][3], int row, int col);
void printBoard(char board[][3]);
bool checkResult(char board[][3]);
void takeTurn(char symbol, int &turnCount, char board[][3]);

int main() {
    int *position[2];
    int gameState = -1;
    int *turnCount = new int();
    char board[3][3]= {
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'}
    };
    intro();
    while(gameState == -1){
        takeTurn('X', *turnCount, board);
        takeTurn('O', *turnCount, board);
    }
    return 0;
}

void intro(){
    cout<<"Welcome to the game of tic tac toe"<<endl;
    cout<<"Enter 'O' for row if you want to quit"<<endl;
}

void takeTurn(char symbol, int &turnCount, char board[][3]){
    getInput(symbol, board);
    turnCount++;
    if(checkResult(board) == true){
        cout<<symbol<<"'s win!"<<endl;
        cout<<"Game won after "<<turnCount<<" turns"<<endl;
        exit(0);
    } else if(turnCount == 9) {
        cout << "Game ended in Draw"<<endl;
        exit(0);
    }
}

void getInput(char symbol, char board[][3]){
    int row = -1;
    int col = -1;
    cout<<symbol<<"'s turn"<<endl;
    printBoard(board);
    getPosition(row, col);
    while(validInput(symbol, board, row, col)==false){
        getPosition(row, col);
    }
}

// true = winner, false = no winner
bool checkResult(char board[][3]){
    if(board[0][0] != '-' && board[0][0] == board[1][1] && board[0][0] == board[2][2]){ // check diagonal 1
        return true;
    } else if(board[0][2] != '-' && board[0][2] == board[1][1] && board[0][2] == board[2][0]){ // check diagonal 2
        return true;
    }
    for(int i = 0; i<3; i++){
        if(board[i][0] != '-' && board[i][0] == board[i][1] && board[i][0] == board[i][2]){ // check rows 
            return true;
        } else if(board[0][i] != '-' && board[0][i] == board[1][i] && board[0][i] == board[2][i]){ // check columns
            return true;
        }
    }
    return false;
}

void printBoard(char board[][3]){
    cout<<"Current Game Board: "<<endl;
    for(int i = 0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<setw(1)<<board[j][i] << " ";
        }
        cout<<endl;
    }
}

bool validInput(char symbol, char board[][3], int row, int col){
    if(row <= 0 || row > 3){
        cout<<"Invalid row value, " << row << ", try again"<<endl;
        return false;
    } else if(col<=0 || col >3){
        cout<<"Invalid column value, try again"<<endl;
        return false;
    } else if(board[col - 1][row - 1] == 'X' || board[col - 1][row - 1] == 'O'){
        cout<<"Position already has a value of "<< board[col - 1][row - 1] << ", try again"<<endl;
        return false;
    }else {
        board[col - 1][row - 1] = symbol;
        return true;
    }
}

void getPosition(int &row, int &col){
    cout<<"Enter Row: "<<endl;
    cin>>row;
    if(row==0){
        cout<<"Quitting Game..."<<endl;
        exit(0);
    }
    cout<<"Enter Column: "<<endl;
    cin>>col;
}



