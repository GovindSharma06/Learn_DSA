#include<iostream>

int main(){
    int a = 65;
    int aa = '6';
    char A = 'A';
    char AA = 65;

    /*Values placed in single-quotes are interpreted by the compiler as character values.
      Values placed in double-quotes are interpreted by the compiler as text values.
      Numeric values are not quoted.
      Values that are placed directly into the source code are called literals. */


    std :: cout << a << '\n'; // -> 65
    std :: cout << aa << '\n'; // -> 54
    std :: cout << A << '\n'; // -> A   65c9fe68b4
    std :: cout << AA << '\n'; // -> A
    std :: cout << sizeof(a) << '\n'; // -> 65
}