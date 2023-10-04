#include <iostream>
#include <stdint.h>
class ElectronicDevice

{


    public:

//*****constractor*****//
 ElectronicDevice()
 {
    std::cout<< "constractor"<<std::endl  ;
 }
//*****destractor*****//
    ~ElectronicDevice(){
    std::cout<< "destractor" <<std::endl;
    }
    std::string seter(std::string model_1)
    {
        this -> model =model_1 ;

        return this -> model ;
    }

    protected :


    private :
    std::uint16_t price;
    std::string model;
    std::string brand;

};

void ED (void){
   ElectronicDevice mobile; 
   std::cout<< mobile.seter("iphon 12") << std::endl ;
}
int main ()
{
    std::cout << "in main" << std::endl;
     ED();
    std::cout << "BY main" << std::endl;
return 0;
}