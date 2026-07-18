// pointer is just a variable that holds memory address
// type we give to the pointer variable is for the data type that we presumed to be hold by that memory address
// types are usefull for manipulating the memory for reading or writing 
#include <iostream>
#include <cstring>


int main(){
    void* ptr = 0; // or void* ptr = NULL; or nullptr; 

    int var = 5; // var is container (memory block) that holds the int value 5
    // to get the address of var memory block, we use "&", it is called refrencing
    // using "*" with pointer vaiable, we access that memory to read and write, it is called derefrencing

    int* int_ptr = &var; // accessing the memory address
    *int_ptr = 10; //derefrencing and changing the value of the address
    // all the above , creates memory in the stack,
    // now create memory in heap

    char* buffer = new char[8]; //This allocates 8 bytes on the heap.
    memset(buffer,0,8);
    delete[] buffer;


}