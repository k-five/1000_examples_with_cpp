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
#include <vector>
#include <string>

#include <ctype.h>
//#include <functional>


/// transform           applies a function to a range of elements
// std::transform applies the given function to a range stores
// the result in another range, beginning at d_first ( see implementation in the main site)
//
// NTOE
// std::transform does not guarantee in-order application of unary_op binary_op.
// To apply a function to a sequence in-order or to apply a function that modifies
// the elements of a sequence, use std::for_each

int main(){
    std::string str("abce_efjh");
    std::cout<<"Before: \t";        for(short i=0; i<str.size();i++) std::cout<<str[i];

    std::transform(str.begin(),str.end(),str.begin(), ::toupper);
    std::cout<<"\nAfter : \t";      for(short i=0; i<str.size();i++) std::cout<<str[i];


}

