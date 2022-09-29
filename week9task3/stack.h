#pragma once
#include <iostream>
#include "exception.h"

class Stack
{
	int size;
	int PlaceInStackToAdd ;
	
public:
	int* b;
	void Pop();
	void Push(int a);
	void capacity();
	int FreeSpacesLeft();
	int peek();
	Stack(int a );
	~Stack();
};