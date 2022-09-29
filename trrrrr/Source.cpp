#include <iostream>
#include "../week9task3/stack.h"
int main()
{
    Stack ob1(5);
    ob1.Push(1);
    ob1.Push(2);
    ob1.Push(3);
    ob1.Push(4);
    ob1.Push(5);

    std::cout << ob1.peek();


    return 0;
}