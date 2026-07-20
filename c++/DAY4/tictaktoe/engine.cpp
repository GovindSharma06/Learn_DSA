#include <iostream>

void printtext(const std::string& message){
    std :: cout << message << "\n";
}
void initialiseboard(char board[][3]){
    //initialise the grid
    for(int i = 0; i <3; i++){
        for(int j = 0; j<3; j++){
            board[i][j] = ' ';
        }
    }
}

void printboard(const char board[][3]){
    for(int i =0; i<3; i++){
        printtext("-------------");
        for(int j = 0; j<3; j++ ){
            std :: cout << "| " << board[i][j] << " ";
        }
        std:: cout << "| " << "\n" << " ";
    }
    printtext("-------------");

}

void playermove(char board[][3], char symbol){
    int row = 0 ;
    int col = 0;
    while(true){
    std :: cout << "\nplayer " << symbol << "'s turn\n";    
    std :: cout << "Enter the row {1-3}: ";
    std :: cin >> row;
    while (row<1 || row>3){
        std :: cout << "invalid row" << "\n";
        std :: cout << "Enter the row {1-3}: ";
        std :: cin >> row;
    }

    std :: cout << "Enter the column {1-3}: ";
    std :: cin >> col;
    while (col<1 || col>3){
        std :: cout << "invalid column" << "\n";
        std :: cout << "Enter the column {1-3}: ";
        std :: cin >> col;
    }
    row--;
    col--;

    if(board[row][col] == ' '){
        board[row][col] = symbol;
        break;
    }
    else {
        std :: cout << "Occupied!!! choose differnet position";
    }

}};

bool checkWinner(const char board[][3])
{
    // Check rows
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] != ' ' &&
           board[i][0] == board[i][1] &&
           board[i][1] == board[i][2])
        {
            return true;
        }
    }

    // Check columns
    for(int i = 0; i < 3; i++)
    {
        if(board[0][i] != ' ' &&
           board[0][i] == board[1][i] &&
           board[1][i] == board[2][i])
        {
            return true;
        }
    }

    // Main diagonal
    if(board[0][0] != ' ' &&
       board[0][0] == board[1][1] &&
       board[1][1] == board[2][2])
    {
        return true;
    }

    // Secondary diagonal
    if(board[0][2] != ' ' &&
       board[0][2] == board[1][1] &&
       board[1][1] == board[2][0])
    {
        return true;
    }

    return false;
}

void switchplayer(char& currentplayer){
    if(currentplayer == 'X'){
        currentplayer = 'O';
    }
    else{
        currentplayer = 'X';
    }
}

int main(){
    printtext("welcome to tic tak toe");

    bool gameover = false;
    char board[3][3];

    initialiseboard(board);
    printboard(board);
    char currentplayer = 'X';
    int chances = 0;
    while(!gameover && chances<9 ){

        playermove(board,currentplayer);
        printboard(board);
        gameover = checkWinner(board);
        if(!gameover){
            switchplayer(currentplayer);
        }
        chances++ ;        
    }
    if(gameover){
            std :: cout << "Congratulation!!! Winner is:" << currentplayer;
            
        }
    else{
            std :: cout << "Match is draw";
        }
}