/*
            language 2
            **********
written and tested on code::block 16.01
                      Ubuntu 16.01
            **********
1. Classes
2. Templates
3. Exceptions
4. Statements
5. Miscellaneous

*/
/// 2. template
/*
    Non-type can be:
        type name( optional )
        type name( optional ) = default;
        type ... name( optional )   since c++11

        for example:
        > std::nullptr_t        since c++11
        > integral type         any of them, char, std::size_t, ...
        > l-value reference
        > pointer type
        > pointer to member type
        > enumeration type
*/


/******************/
#include <iostream>
/******************/

template< const int* CI >
int
print()
{ return *CI ; }


const int number = 10; // declaration inside main, has not linkage


int main(){

std::cout << print< &number >();

}

/* output:



*/
