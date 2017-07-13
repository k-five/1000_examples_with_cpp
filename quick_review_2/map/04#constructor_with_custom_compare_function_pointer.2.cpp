/*

A review of map library

*/
/// std::map::map
//  constructor
//  constructs a map object


#include <iostream>
#include <map>


int main( ){

    const char* array_of_string[]{ "one", "two", "two", "three", "three", "three" };

    // add compare function in constructor
    std::map< std::string, unsigned, bool( * )( const std::string&, const std::string& ) >
    map ( []( const std::string& lhs, const std::string& rhs ){ return lhs < rhs; } );

    for( const char* str : array_of_string )
        map[ str ]++;

    std::cout << "the output:\n";
    for( std::pair< std::string, unsigned > pair : map )
        std::cout << pair.first << ' ' << pair.second <<  '\n';

}

/* output

the output:
one 1
three 3
two 2

Process returned 0 (0x0)   execution time : 0.014 s
Press ENTER to continue.



*/
