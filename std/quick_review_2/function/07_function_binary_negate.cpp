/*

A review if functional library


Function object:
Function objects are objects that specifically have designed to be
used with a syntax similar to that of function. In C++ this is
achieved by defining the member function operator() in their class
like below example:
*/

/// std::binary_negate
//  Negate binary function object class

#include <iostream>
#include <functional>



int main(){

    std::equal_to< int > quality;
    std::binary_negate< std::equal_to< int > > not_quality( quality );

    int array_1_[] { 1,2,3,4,5,6,7 };
    int array_2_[] { 1,0,3,4,5,7,6 };

    std::pair< const int*, const int* > first_match_, first_mismatch_;
    first_mismatch_ = std::mismatch( array_1_, array_1_ + 7, array_2_, array_2_ + 7, quality );
    first_match_    = std::mismatch( array_1_, array_1_ + 7, array_2_, array_2_ + 7, not_quality );

    std::cout << "first mismatch: " << *first_mismatch_.first << ' ' << *first_mismatch_.second << '\n';
    std::cout << "first match   : " << *first_match_.first << ' ' << *first_match_.second << '\n';

}

/* output

first mismatch: 2 0
first match   : 1 1

Process returned 0 (0x0)   execution time : 0.016 s
Press ENTER to continue.

*/
