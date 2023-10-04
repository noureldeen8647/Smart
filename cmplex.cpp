#include <iostream>


class Complex
{
    public:
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

private:
    float mReal;
    float mImg;

};

std::ostream& operator<<(std::ostream& output, Complex const& complex)
{
    output << complex.mReal << "+i" << complex.mImg;
    return output;
}

int main()
{

    Complex c1(4,8);
    Complex c2(50,10);
    Complex c3(0,0);

    c3 = c2 + c1;
    std::cout << c3;

    return 0;
}

