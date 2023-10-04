#include <iostream>
typedef void(*callback)(std::string);


void welcome(std::string str)
{
    std::cout << str << std::endl;
}


typedef void(*SSort)(int*, int);
void Sort(int x[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (x[j] > x[j + 1]) {
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}

callback call= welcome;
SSort SS = Sort;


int main() {
    int *x[] = { 5, 2, 8, 1, 9 };
    int n = sizeof(x) / sizeof(x[0]);
SS(*x,n);//6
 
   std::string name ="NOUR";


    std::cout << n << std::endl;
 
  
    for (int i = 0; i < n; i++) {
        std::cout << x[i] << " ";
    }
  
    call(name);
    std::cout << std::endl;


    return 0;
}