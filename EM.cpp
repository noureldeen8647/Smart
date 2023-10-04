#include <iostream>

class EMP
{
    public: 
EMP(std::string name , int id , int salry)
:m_name(name),m_id(id) , m_salry(salry) {}


void desplay(){
    std::cout<< "name :"<< m_name << std::endl 
    << "id :"<< m_id << std::endl 
    << "slary :"<< m_salry << std::endl ;
}




    private:
std::string m_name ;
 int m_id ;
 int m_salry ;

};



int main()
{
    EMP EMPLOYEE("NOUR" , 156 ,6000);
   EMPLOYEE.desplay();
}