#include<iostream>

// A function is a reusable sequence of statements designed to do a particular job.
/* syntax
    returnType nameOfTheFxn(parameters){
       code
    }
    */

void printtext(const char message[]){
    std :: cout << message << "\n";
}
int Multiply(int a, int b){
    return a*b;
}
void add(int a, int b){
    std :: cout << a+b << std :: endl;
}

int main(){

    int result = Multiply(8,9);
    std :: cout << result << std:: endl;
    std :: cout << Multiply(4,5) << std:: endl;
    printtext("hello");
}