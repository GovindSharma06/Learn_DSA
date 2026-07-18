// refrences are also pointers but they dont create new varaibles like pointers and occupy space in memory

#include <iostream>

int main(){
    int a = 5;
    int* ptr = &a; // making pointer to an interger
    int& ref = a; // refrencing to an integer, ref is not a variable, it just exist in our source code only

    ref = 2; // now we can use ref as a,
    std :: cout << a << std :: endl;
}