#include <iostream>
#include <array>
#include <algorithm>



int main(){


std::array < int ,3u>list;
std::array < int , 3u> nums = {8,9,70};
std::array < int , 3u> ::iterator it ;


for(it = nums.begin(): it != nums.end(++it))
{
    *it =100;

}

std::sort(nums.begin() ,nums.end());

list.fill(0);

for(int element : list){

    std::cout << element << '';
}


}
