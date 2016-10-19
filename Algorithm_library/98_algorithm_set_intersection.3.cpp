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

Set operation ( or sorted range )

    merge               merges two sorted range
    inplace_merge       merges two ordered range in-place
    includes            return true if one set is a subset of another
    set_difference      computes the difference between two sets
    set_intersection    computes the intersection of two sets
    set_symmetric_difference        computes the symmetric difference between two sets
    set_union           computes the union of two sets

*/
/// set_intersection
// Constructs a sorted range beginning at d_first consisting of elements
// that are found in both sorted range [first1,last1) and [first2,last2).
// The first version expects both input ranges to be sorted with operator <
// the second version expects them to be sorted with the given comparison function comp

#include <iostream>
#include <algorithm>
#include <iomanip>

#include <iterator>
// #include <functional> // std::greater<int>()
#include <vector>
// #include <string>

// #include <array>
#include <random>
// #include <cstdlib>
// #include <ctime>



int main(){
    // using a readable form
    std::vector<int> one {1,2,3,4,5,6,7,8,};
    std::vector<int> two {        5,  7,  9,10};
    // pay attention to:  _,_,_,_,5,_,7,_,_,_
    // only 5 and 7 are common

    std::set_intersection(one.begin(),
                          one.end(),
                          two.begin(),
                          two.end(),
                          std::ostream_iterator<int>(std::cout<<"The output:\t"," ")); // 5 7
}







