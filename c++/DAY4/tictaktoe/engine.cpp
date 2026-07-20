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

void printboard(char board[][3]){
    for(int i =0; i<3; i++){
        printtext("-------------");
        for(int j = 0; j<3; j++ ){
            std :: cout << "| " << board[i][j] << " ";
        }
        std:: cout << "| " << "\n" << " ";
    }
    printtext("-------------");

}
int main(){
    printtext("welcome to tic tak toe");

    char board[3][3];

    initialiseboard(board);
    printboard(board);
    

}