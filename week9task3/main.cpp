#include <iostream>
#include "stack.h"
#include "exception.h"

int main()
{
    Stack ob1(5);
    ob1.Push(1);
    ob1.Push(2);
   
    
    std::cout<< ob1.FreeSpacesLeft();


    return 0;
}
