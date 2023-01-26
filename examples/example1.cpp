
#include "../lib/Kanaku.h"
#include "../lib/Kanaku.cpp"
using namespace Kanaku;
int main(){
    int number = 10;
    std::vector<double> vec= linspace(0,10,number);
    for (size_t i = 0; i < vec.size(); i++)
    {
        std::cout << "Element " << i << " :" << vec.at(i) <<std::endl;
    }
    return 0;
}