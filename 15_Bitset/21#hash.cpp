
/*
            std::bitset
            ***********


template< std::size_t N > class bitset;

The class template bitset represents a fixed-size sequence of N bits.
Bitsets can be manipulated by standard logic operators and converted
to and from strings and iterators.
Bitsets meets the requirement of CopyConstructible and CopyAssignment


    member type:
        reference

    member function:
        constructor         constructs the bitset
        operator ==, !=     compares the contents

    element access:
        operator []         access specifier bit
        test                access specifier bit
        all                 check if all,
        any                          any, or
        none                         none bits are set to true
        count               returns the number of bits set to true

    capacity:
        size                returns the size number of bits that the bitset can hold

    modifier:
        operator &, |, ^, ~         performs binary AND, OR, XOR, NOT
        operator >>, <<, <<=, >>=   performs binary shift left and shift right
        set                 sets bits to true or given value
        reset               sets bits to false
        flip                toggles the value of bits

    conversation:
     to_string              returns a string representation of the data
     to_ulong               returns a unsigned long integer representation of the data
     to_ullong              returns a unsigned long long integer representation of the data

     non-member function:
        operator &, |, ^    performs binary logic operations on bitsets
        operator >> , <<    performs stream input and output of bitsets

    helper-class
        std::hash< std::bitset >    hash support for std::bitset

    ---------------------------------------------
    Note:
    If the size of the bitset is not known at the compile time,
    std::vector<bool> and boost<dynamic_bistset> may be used.
*/


/// std::hash( std::bitset )
//
//  The template specialization of std::hash for std::bitset< N >
//  allows users to obtain hashes of objects of type std::bitset< N >.

#include <iostream>
#include <bitset>
#include <functional>   // for using std::hash

int main() {

    std::bitset< 4 > bit_1( 1 );
    std::bitset< 4 > bit_2( 2 );
    std::bitset< 4 > bit_3( bit_2 );

    std::hash< std::bitset< 4 > > hash_of;

    std::size_t hash_1 = hash_of( bit_1 );
    std::size_t hash_2 = hash_of( bit_2 );
    std::size_t hash_3 = hash_of( bit_3 );

    std::cout << hash_1 << '\n';
    std::cout << hash_2 << '\n';
    std::cout << hash_3 << '\n';


}


/* output for me:
3418192074
439705936
439705936
*/

