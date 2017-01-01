/* Started on November 14th in 2016 */
/* more examples in github.com/k-five */
/*
            Type Support
            ************

Numeric Limits (defined in header <limits>)
    > umeric_limits                     provide an interface to query properties of all fundamental numeric types (class  template)
    Template parameters
    T 	- 	a type to retrieve numeric properties for
Member functions
    min                 returns the smallest finite value of the given type
    lowest              returns the lowest finite value of the given type
    max                 returns the largest finite value of the given type
    epsilon             returns the difference between 1.0 and the next representable value of the given floating-point type
    round_error         returns the maximum rounding error of the given floating-point type
    infinity            returns the positive infinity value of the given floating-point type
    quiet_NaN           returns a quiet NaN value of the given floating-point type
    signaling_NaN       returns a signaling NaN value of the given floating-point type
    denorm_min          returns the smallest positive subnormal value of the given floating-point type
*/
/// std::numeric_limit::max
//    Returns the maximum finite value representable by the numeric type T.
//    Meaningful for all bounded types.


#include <iostream>
#include <limits>



int main(){
    endl( std::cout << std::numeric_limits<short>::max() );
    endl( std::cout << std::numeric_limits<int>::max() );
    endl( std::cout << std::numeric_limits<float>::max() );
    endl( std::cout << std::numeric_limits<double>::max() );
    endl( std::cout << std::numeric_limits<char>::max() );
    endl( std::cout << std::numeric_limits<std::size_t>::max() );
    endl( std::cout << std::numeric_limits<std::ptrdiff_t>::max() );
}
