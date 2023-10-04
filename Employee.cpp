#include "Employee.h"

Employee::Employee()
{
    m_id = 0;
    m_salary = 0;
    m_name = "";
}

Employee::Employee(std::string name, int id, int salary)
{
    m_name = name;
    m_id = id;
    m_salary = salary;
}

Employee::~Employee()
{
    std::cout << "destructor is called for id: " << m_id <<"\n" ;
}

void Employee::setName(std::string name)
{
    this->m_name = name;
}

void Employee::setId(int id)
{
    this->m_id = id;
}

void Employee::setSalary(int salary)
{
    this->m_salary = salary;
}
//getters
std::string Employee::getName()
{
    return m_name;
}
int Employee::getId()
{
    return m_id;
}
int Employee::getSalary()
{
    return m_salary;
}
void Employee::display()
{
    std::cout << "Employee info Name: " << this->getName()
    << " Id: " << this->getId() << " Salary: " << this->getSalary() << "\n";
}