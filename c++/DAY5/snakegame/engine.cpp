#include <iostream>
#include <cstdlib> //contains rand()
#include <ctime> // srand(time(nullptr));time(nullptr) gives the current time in seconds.
#include <thread>
#include <chrono>

const int height = 20;
const int width = 40;


struct Position
{
    int row;
    int col;
};


enum Direction
{
    UP,
    DOWN,
    LEFT,
    RIGHT
};


void initialiseBoard(char board[height][width]){
    for(int i = 0; i<height;i++){
        for(int j = 0; j<width; j++){
            if((i == 0) || (i == height-1) || (j == 0) || (j == width-1)){
                board[i][j] = '#';   
            }
            else{
                board[i][j] = ' ';
            }
        }
    }
}

void drawBoard(char board[height][width]){
    for(int i =0 ; i<height; i++){
        for(int j =0; j<width; j++){
            std::cout<<board[i][j]; 
        }
        std::cout<<"\n";
    }
    
}

void placeSnake(char board[][width],const Position& snakehead)
{
    board[snakehead.row][snakehead.col] = 'O';
}

void moveSnake(Position& snakehead, Direction direction){

    if(direction == UP){
        snakehead.row--;
    }
    if(direction == DOWN){
        snakehead.row++;
    }
    if(direction == LEFT){
        snakehead.col--;
    }
    if(direction == RIGHT){
        snakehead.col++;
    }

}

void generateFood(Position& food){
    food.row = 1 + (rand() % (height-2));
    food.col = 1 + (rand() % (width-2));
}

void placeFood(char board[][width], const Position& food){
    board[food.row][food.col] = '@';
}

bool isCollision(const Position& snakeHead){
    return snakeHead.row == 0 ||
           snakeHead.row == height - 1 ||
           snakeHead.col == 0 ||
           snakeHead.col == width - 1;
}

int main(){
    srand(time(nullptr));
    char board[height][width];

    Position snake;
    Position food;
    Direction direction=RIGHT;

    snake.row = height / 2;
    snake.col = width / 2;

    generateFood(food);

    while (true){
    initialiseBoard(board);

    placeFood(board, food);

    placeSnake(board, snake);

    drawBoard(board);

    std::this_thread::sleep_for(
        std::chrono::milliseconds(200)
    );

    system("cls");

    moveSnake(snake, direction);

    if(isCollision(snake))
    {
        break;
    }
}
}