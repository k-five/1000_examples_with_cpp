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

Maximum / Minimum Operation

    max                 returns the greater of the given value
    max_element         returns the largest element in a range
    min                 returns the smaller of the given value
    min_element         returns the smallest element in a range
    minmax              returns the larger and the smaller of two elements
    minmax_element      returns the smallest and the largest elements in a range
    lexicographical_compare         returns true if one range is lexicographically less than another
    is_permutation      determines if a sequence is a permutation of another sequence
    next_permutation    generates the next larger lexicographic permutation of a range of elements
    prev_permutation    generates the next smaller lexicographic permutation of a range of elements

*/
/// minmax
// Returns the lowest and the greatest of the given values
// implementation 1,2 ) returns reference to the smaller and greater of a and b
// implementation 3,4 ) returns the smallest and greatest of the value in initializer_list object

#include <iostream>
#include <algorithm>
#include <iomanip>

// #include <iterator>
// #include <functional> // std::greater<int>()
#include <vector>
// #include <string>

// #include <array>
// #include <random>
// #include <cstdlib>
// #include <ctime>
// #include <unistd.h>


int main(){

    // of a character
    std::pair<char,char> one = std::minmax({'A','b','c','Z'});
    std::cout<<"Smallest:\t"<<one.first<<"\nGreatest:\t"<<one.second<<std::endl;

    // of a character with comp function
    std::pair<char,char> two = std::minmax({'A','b','c','Z'},[](char a,char b){ return std::tolower(a)<tolower(b);});
    std::cout<<"Smallest:\t"<<two.first<<"\nGreatest:\t"<<two.second<<std::endl;

return 0;}










