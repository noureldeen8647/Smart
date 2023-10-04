#include <iostream>

void swap(int& f, int& n) {
    int temp = f;
    f = n;
    n = temp;
}

namespace calc {
   u_int16_t Add(int x ,int y ){
    
 float n = x + y;
 return(n);
}

 u_int16_t Sub(int x ,int y ){
    
 float n = x - y;
 return(n);
 
}
//remainder or Modulus
 u_int16_t Mod(int x ,int y ){
    
 float n = x % y;
 return(n);
 
}
//multiply
u_int16_t Mul(int x ,int y ){
    
 float n = x * y;
 return(n);
 
}



}

int main() {

    while(1){
    int x, y;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
if (x<=y){
    swap(x, y);

    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
}

    std::cout << "Sum of x and y: " << calc::Add(x ,y) << std::endl;
    std::cout << "Sub of x and y: " << calc::Sub(x ,y) << std::endl;
    std::cout << "Mul of x and y: " << calc::Mul(x ,y) << std::endl;
    std::cout << "Modulus of x and y: " << calc::Mod(x ,y) << std::endl;
    }

    return 0;
}