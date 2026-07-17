#include<iostream>

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
}