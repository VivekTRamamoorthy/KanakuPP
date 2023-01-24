#ifndef _KANAKU_H
#define _KANAKU_H
#include <vector>
#include <stdexcept>
namespace Kanaku{

std::vector<double> linspace(const float a, const float b, const int n){
    if(n<1){
        throw std::invalid_argument( "nelem in linspace(_,_,nelem) cannot be less than 1" );
    }
    std::vector<double> result;
    if(n==1){
        result.push_back(a);
        return result;
    }
    for (size_t i = 0; i < n; i++)
    {
        result.push_back(a+(b-a)/(n-1)*i);
    }
    return result;
    
}



}
#endif