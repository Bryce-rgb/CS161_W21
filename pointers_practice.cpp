#include<iostream>
//pointers are an integer that stores a memory address

int main()
{
    int var = 8;
    void* ptr = &var;                          
                                              //void because pointers dont need a type
                                              //& operator infront of variable, finds memory address, stores in ptr
    std::cin.get();                             
    
}
