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

Modifying sequence operation
    copy
    copy_if             copies a range of elements to a new location
    copy_n              copies a number of elements to a new location
    copy_backward       copies a range of elements in backward order
    move                moves a range of elements to a new location
    move_backward       moves a range of elements to a new location in backward order
    fill                assigns a range of elements a certain value
    fill_n              assigns a value to a number of elements
    transform           applies a function to a range of elements
    generate            saves the result of a function in a range
    generate_n          saves the result of N applications of a function
    remove
    remove_if           removes elements satisfying specific criteria
    remove_copy
    remove_copy_if      copies a range of elements omitting those that satisfy specific criteria

    replace
    replace_if          replaces all value satisfying specific criteria with another value
    replace_copy
    replace_copy_if     copies a range, replacing elements satisfying specific criteria with another value
    swap                swaps the value of two objects
    swap_range          swaps the two range of elements
    iter_swap           swaps the elements pointed to by two iterator
    reverse             reverses the order of elements in a ragne
    reverse_copy        creates a copy of a range that is reversed
    rotate              rotate the order of elements in a range
    rotate_copy         copies and rotate a range of elements
    shuffle
    random_shuffle      randomly re-orders elements in a range
    (until c++ 17)(c++11)
    unique              removes consecutive duplicate element in a range
    unique_copy         creates a copy a of some range of elements that contains no consecutive duplicate
*/

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <array>
#include <ctime> // for std::time
#include <functional> // for std::bind



/// replace
/// replace_if          replaces all value satisfying specific criteria with another value
// Replaces all elements satisfied criteria whit a new_value in the range
// [first, last).
// The replace version, replaces all elements that are equal to old_value
// and the replace_if version, replaces elements for which predicate
// return true.

// note:
// More than once run the program, because of rand number filing
int main(){

    std::srand(std::time(0));   // helps rand function

    std::array<int, 10> arr;
    for ( int& i : arr) i = (1+std::rand()%9);  // fill with random number form 1 to 9

    std::cout<<"arr:\t";    for ( int i : arr) std::cout<<i<<' ';

    std::replace_if(arr.begin(),
                    arr.end(),
                    std::bind(std::less<int>(), std::placeholders::_1, 5),   // all element less than 5, meaning ( 1,2,3,4 )
                    500);
    std::cout<<"\narr:\t";  for ( int i : arr) std::cout<<i<<' ';
}
















