#pragma once
#include <vector>

template <typename T>
class stack
{
    stack(int s =10)
    {
        size = s > 0 && s<1000 ? s:10 ;
        top =-1;
        stackPtr = new T[size] ;
	}

    ~stack(){delete [] stackPtr ;}
    int isEmpty() const { return top == -1 ; } 
	int isFull()  const { return top == size - 1 ; } 

};