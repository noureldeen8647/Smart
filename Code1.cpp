#include <iostream>



enum meet_day
{
    Monday=1,
     Tuesday,
      Wednesday,
       Thursday,
       Friday,
        Saturday,
        Sunday
};



int main() 
{



         //std:: uint32_t day = 0 ;
constexpr std:: uint8_t week_day =7;
constexpr std:: uint8_t ten_day =10;
std:: uint8_t current;
std::cin >> current;
std::uint16_t meet_day =(current + ten_day)%week_day;
std::string    d = "" ;
switch(d)
{
case Monday:
d = "monday";
    /* code */
    break;

    case Tuesday:
d = "tuesday";
    /* code */
    break;
    case Wednesday:
d = "Wednesday";
    /* code */
    break;
    case Thursday:
d = "Thursday";
    /* code */
    break;
    case Friday:
d = "Friday";
    /* code */
    break;
    case Saturday:
d = "Saturday";
    /* code */
    break;


      case Sunday:
d = "Sunday";
    /* code */
    break;

default:
    break;
}
std:: cout<<"Meet Day : " << d<< std:: endl;
return 0;

}