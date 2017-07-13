/*

A review of iterator library


*/

/// next
//  get iterator to next element

#include <iostream>
#include <iterator>

template< typename T >
T* begin_of( T* &c_string ){
    return c_string;
}
template< typename T >
T* end_of( T* &c_string ){
    return c_string + std::char_traits< char >::length( c_string );
}


int main(){

    const char* array = "hello";
    const char* begin_array = begin_of( array );
    const char* end_array   = end_of( array );

    std::cout << ( array[ 1 ] == *std::next( begin_array )  ? "equal" : "not equal" ) << '\n';


}

/* output

equal

Process returned 0 (0x0)   execution time : 0.011 s
Press ENTER to continue.



*/
