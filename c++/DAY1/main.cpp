#include <iostream>
//This #include preprocessor directive indicates that we would like to use the contents of the iostream library, 
//which is the part of the C++ standard library that allows us to read and write text from/to the console. 
//We need this line in order to use std::cout
// angular brackets are for only compiler include paths
// quotes are for every paths, but mainly used for relative paths

int main(){

    std :: cout << "hello world" << std :: endl;
    // think << as a fxn like print in python or printf in c. << operator allow us to display information on the console.
    std :: cin.get();
}