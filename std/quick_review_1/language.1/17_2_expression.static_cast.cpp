/*
            language 1
            **********
written and tested on code::block 16.01
                      Ubuntu 16.01
            **********
1. preprocessor
2. expression
3. declaration
4. initialization
5. function

*/
/// expression

#include <iostream>
#include <string>

int main(){
    // static_cast< new_type >( input )
    // get input and return as a new_type
    // Converts between types using a combination of implicit and user-defined conversions.

    float f = 22.333;
    int i;
    i = static_cast<int>(f); // get float and returns int
    std::cout << i << std::endl;


}
