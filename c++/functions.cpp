#include<iostream>

int Multiply(int a, int b){
    return a*b;
}

int main(){

    int result = Multiply(8,9);
    std :: cout << result << std:: endl;
    std :: cout << Multiply(4,5) << std:: endl;
}