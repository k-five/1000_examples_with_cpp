/*
Template:
    01 template parameter and template argument
    02 class template
    03 function template
    04 variable template
    05 template argument deduction
    06 explicit (full) template specialization
    07 partial template specialization
    08 parameter pack
    09 sizeof ... operator
    10 fold expression
    11 dependent names
    12 SFINAE
    13 constraints and concepts
*/
#include <iostream>
#include <typeinfo>
template<typename T> void print(const T value){std::cerr<<value<<std::endl;}

template<class T> struct make { typedef T type; };



/// 07 partial template specialization
// Allows customizing class template for a given category of template argument
//
// The template parameter list and the template argument list of a member of a
// partial specialization must match the parameter list and the argument list of
// the partial specialization.
// Just like with members of primary template, they only need to be defined if need in the program.
// NOTE:
// Member of partial specialization are not related to the members of the primary template
// Explicit (full) specialization of a member of a partial specialization is declared the
// same way as an explicit specialization of the primary template.
//
// If a class template is a member of another class template, and it has partial specialization,
// these specialization are members of the enclosing class template.

template<typename R,typename P> using fptr_t = R (*)(P);

void F (int = 0){ print(__func__); }
int I (int = 0) { print(__func__); }

int main(){

    // F has a default int = 0, but needs to get value of int
    // because template skipping default parameter
    fptr_t<void, int> vptr = F;
    vptr(0);

    // same as above
    fptr_t<int,int> iptr = I;
    iptr(0);
}
