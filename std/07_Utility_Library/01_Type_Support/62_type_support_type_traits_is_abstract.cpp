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

    Type Properties
    > is_const                       "                   const-qualified
    > is_volatile                    "                   volatile-qualified
    > is_trivial                     "                   trivial
    > is_trivially_copyable          "                   trivially copyable
    > is_standard_layout             "                   standard layout type
    > is_pod                         "                   plain-old date (POD) type
    > is_literal_type                "                   literal type
    > is_empty                       "                   class (not union) type and has no data
    > is_polymorphic                 "                   polymorphic class type
    > is_final                       "                   a final class type
    > is_abstract                    "                   abstract class type
    > is_singed                      "                   signed arithmetic type
    > is_unsigned                    "                   unsigned arithmetic type

*/
/// std::is_abstract
//    If T is an abstract class (that is, a non-union class that declares or
//    inherits at least one pure virtual function), provides the member constant
//    value equal true. For any other type, value is false.
//    If T is a non-union class type, T shall be a complete type; otherwise, the behavior is undefined.

#include <iostream>
#include <type_traits>

struct A {
    int m;
};

struct B {
    virtual void foo();
};

struct C {
    virtual void foo() = 0;
};

struct D : C {};

int main(){

    std::cout << std::boolalpha;
    std::cout << std::is_abstract<A>::value << '\n';    // false
    std::cout << std::is_abstract<B>::value << '\n';    // false
    std::cout << std::is_abstract<C>::value << '\n';    // true
    std::cout << std::is_abstract<D>::value << '\n';    // true
}
