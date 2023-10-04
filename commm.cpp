#include <iostream>

class Complex 
{

public : 

    Complex(float real = 0, float img=0) : mReal(real),mImg(img)
    {
    }

friend std::ostream& operator<<(std::ostream& output,Complex const& complex);


Complex& operator+(Complex  const &rhs)
{

    this->mReal = mReal + rhs.mReal;
    this->mImg = mImg + rhs.mImg;
    return *this;
}

private :
    float mReal;
    float mImg;

};