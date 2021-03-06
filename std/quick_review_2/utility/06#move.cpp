/*

A review of utility library

*/

/// Function:
//  swap:       Exchange value of two object
//  make_pair:  Construct pair object
//  forward:    Forward argument
//  move:       Move as r-value
//  move_if_noexcept:   Move if noexcept
//  declval:    Declaration value

#include <iostream>
#include <utility>


int main(){

    std::string str_1{ "first string" };

    std::string str_2{ std::move( str_1 ) };

    std::cout << str_1 << '\n';
    std::cout << str_2 << '\n';

}

/* output


first string

Process returned 0 (0x0)   execution time : 0.011 s
Press ENTER to continue.

*/
