#include <iostream>


int main(){

int x1=8;
int x2=5;
int a ,n ,m;

auto sq =[x1](int a ,int n)-> int{
    n= a*a*a;
    std::cout << n <<"\n";
    return (n); };
auto lambda2 =[x2](int a )-> int{
 x2 +a;
    std::cout << x2+a<< "\n" ;
return (x2+a);
};
std::cin >> m ;
a=sq(m,n);
lambda2(8 );
lambda2(22);
std::cout << a+3 << "\n"; 


}