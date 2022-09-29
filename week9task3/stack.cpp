#include "stack.h"

void Stack::Pop()
{   
	if (PlaceInStackToAdd == 0) {
		try {
			throw StackUnderflow();
		}
		catch (StackUnderflow& e) {
			std::cout << "MyException caught" << std::endl;
			std::cout << e.what() << std::endl;
		}
	}
	else {
		b[PlaceInStackToAdd - 1] = 0;
		PlaceInStackToAdd--;
	}
}

void Stack::Push( int a){
	if (PlaceInStackToAdd == size) {
		try {
			throw StackOverflow();
		}
		catch (StackOverflow& e) {
			std::cout << "MyException caught" << std::endl;
			std::cout << e.what() << std::endl;
		}
	}
	else {
	b[PlaceInStackToAdd] = a ;
	PlaceInStackToAdd ++ ;
    } 
}

void Stack::capacity()
{
	std::cout << size;
}

int Stack::FreeSpacesLeft()
{
	return (size - PlaceInStackToAdd);
}

int Stack::peek()
{
	return b[PlaceInStackToAdd -1 ];
}

Stack::Stack(int a) : size(a) , PlaceInStackToAdd(0){
	 b = new int[a];
}


Stack ::~Stack ()
{
}