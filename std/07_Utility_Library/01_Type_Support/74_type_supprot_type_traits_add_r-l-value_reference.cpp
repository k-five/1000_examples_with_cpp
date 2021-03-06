/* Started on November 14th in 2016 */
/* more examples in github.com/k-five */
/*
            Type Support
            ************

Type Modifications

Type modification template create new type definitions by applying modification of a
template parameter. The resulting type can then be accessed through type member typedef.

    > onst-volatile Specifier
    > remove_cv                 removes const or/and volatile specified form the given type
    > remove_const              "
    > remove_volatile           "
    > add_cv                    adds const or/and volatile specified to the given type
    > add_const                 "
    > add_volatile              "

    Reference
    > remove_reference          removes reference from the given type
    > add_lvalue_reference      adds l-value or r-value reference to the given type
    > add_rvalue_reference      "

    Pointer
    > remove_pointer            removes pointer from the given type
    > add_pointer               adds pointer to the given type

    Sing Modifiers
    > make_singed               makes the given integral type singed
    > make_unsigned             makes the given integral type unsigned

    Array
    > remove_extent             removes one extent from the given array type
    > remove_all_extents        removes all extents from the given array type
*/
/// std::add_lvalue_reference
/// std::add_rvalue_reference




#include <iostream>
#include <type_traits>
#include <iomanip>




int main() {

    using nonref = int;
    using lref = typename std::add_lvalue_reference<nonref>::type;
    using rref = typename std::add_rvalue_reference<nonref>::type;

    std::cout << (std::is_fundamental<nonref>::value ? "true" : "false" ) << '\n';      // true
    std::cout << (std::is_lvalue_reference<lref>::value ? "true" : "false" ) << '\n';   // true
    std::cout << (std::is_rvalue_reference<rref>::value ? "true" : "false" ) << '\n';   // true
}
