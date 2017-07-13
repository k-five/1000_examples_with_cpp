/*
Algorithm Library C++
The algorithm library defines functions for a variety of purposes.
(e.g. searching, sorting, counting, manipulating ) that operate on
range of elements. Note that a range is defined as [ first, last )
where last refers to the element past the last element to inspect
or modify.
------------------------------------------------------------------
You can read the original implementation in:
stl_algobase.h and stl_algo.h and algorithmfwd.h
------------------------------------------------------------------
Defined in header <algorithm>

Numeric Operation

    iota                fills a range with successive increments of a string value
    accumulate          sums up a range of elements
    inner_product       computes the inner product of two range of elements
    adjacent_difference computes the difference between adjacent elements in a range
    partial_sum         computes the partial sum of a range of elements

*/
/// accumulate ( Oxford: to gradually get more and more of something over a period of time )
/// gradual is opposite of sudden
/// gradually != suddenly
// Computes the sun of the given value 'value' and the elements in the range
// [first,last).
// One version uses operator + and another uses the given binary function
// which is passed to it.


#include <iostream>
#include <algorithm>
#include <iomanip>

// #include <iterator>
// #include <functional> // std::greater<int>()
#include <vector>
// #include <string>

// #include <array>
#include <list>
#include <random> // for using of std::random_device and std::mt19937
// #include <cstdlib>
// #include <ctime>
// #include <unistd.h>

/*
//  custom implementation of std::accumulate
template<typename T,typename C>
T accumulate (C first, C last){

    T sum=0;

    while(first != last) sum += *first++;

    return sum;
}
*/

int main(){

    std::vector<int> vector(10,2.0);

    int product = std::accumulate(vector.begin(),vector.end(),0,std::plus<int>());          // 2 + 2 + 2 ...
    std::cout<<"product (plus):\t"<<product<<std::endl;
    product     = std::accumulate(vector.begin(),vector.end(),1,std::multiplies<int>());    // 2 * 2 * 2 ...
    std::cout<<"product (multiplies):\t"<<product<<std::endl;
    product     = std::accumulate(vector.begin(),vector.end(),2,std::minus<int>());         // 2 - 2 - 2  ...
    std::cout<<"product (minus):\t"<<product<<std::endl;




return 0;}







