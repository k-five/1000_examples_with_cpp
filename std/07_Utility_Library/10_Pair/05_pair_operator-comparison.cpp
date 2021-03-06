/*

        std::pair
        *********
defined in header <utility>

Template Parameter:
    T1, T2

Member Type:
    first_type          T1
    second_type         T2

Member Object:
    first               T1
    second              T2
Member function:
    constructor         constructs a new pair
    operator =          assigns the contents
    swap (c++11)        swaps the contents

Non-member Function:
    make_pair
    operator ==                         lexicographically compares the values in the pair
    operator !=                         "
    operator <                          "
    operator >                          "
    operator <=                         "
    operator >=                         "
    std::swap( std::pair )              specialized the std::swap algorithm
    std::get( std::pair )               accesses an element of a pair

Helper Classes:
    std::tuple_size< std::pair >        obtains the size of a pair
    std::tuple_element< std::pair >     obtains the type of the elements of pair

*/


/// operator ==, !=, <, >, <=, >= ( std::pair )
//  comparison operator for std::pair

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector< std::pair< int, std::string > > vector = {
        { 2, "two" },
        { 0, "zero" },
        { 1, "one" }
    };

    std::sort( vector.begin(), vector.end() );

    for( auto temp : vector )
        std::cout << '('
                  << temp.first
                  << ' '
                  << temp.second
                  << ')'
                  << '\n';


}



/* output for me:

(0 zero)
(1 one)
(2 two)

*/
