/* Started on November 14th in 2016 */
/* more examples in github.com/k-five */
/*
            Type Support
            ************

Type Traits (since C++11)
    Type traits defined a compile-time template-based interface to query or modify the
    properties of types. Any attempts to specialize any of the class template listed in
    This section results in undefined behavior, except that std::common_type may be
    specialized if the specialization depends on user-defined type

    (defined in header <type_traits>)

    Primary Type Categories
    > is_void                       checks if a type is void
    > is_null_pointer               checks if a type is std::nullptr_t
    > is_integral                   checks if a type is integral type
    > is_floating_point             checks is a type is floating-point type
    > is_array                      checks if a type is an array
    > is_enum                        "                   an enumeration type
    > is_union                       "                   an union type
    > is_class                       "                   a non-union class type
    > is_function                    "                   a function type
    > is_pointer                     "                   a pointer type
    > is_l-value_reference           "                   l-value reference
    > is_r-value_reference           "                   r-value reference
    > is_member_object_pointer       "                   a pointer to a non-static member object
    > is_member_function_pointer     "                   a pointer to a non-static member function
*/
/// std::is_union

#include <iostream>
#include <type_traits>
struct A {};

typedef union {
    int a;
    float b;
} B;

struct C {
    B d;
};

int main() {

    std::cout << std::boolalpha;
    std::cout << std::is_union<A>::value << '\n';       // false
    std::cout << std::is_union<B>::value << '\n';       // true
    std::cout << std::is_union<C>::value << '\n';       // false
    std::cout << std::is_union<int>::value << '\n';     // false
}
