/**
/// Reference Declaration
///
///
Declares a named variable as a reference, that is, an alias to an already-existing object or function.

Syntax:
A reference variable declaration is only simple declaration whose declarator has the form.
&   attr ( optional ) declarator
&&  attr ( optional ) declarator since c++11

1   L-value reference declaration: the declaration S& D; declares D as an l-value reference
    to the type determined by decl-specifier-seq S
2   R-value reference declarator: the declaration S&& D; declares D as an r-value reference
    to the type determined by decl-specifier-seq S.

NOTE: There is no reference to void and no reference to reference

NOTE: Reference type cannot by cv-qualified at the top level; there is no syntax
      for that in declaration, and if a qualification is introduced through a typedef,
      decltype, or template type argument, it is ignored.
      Because reference art not objects, there are no array of reference, no pointer
      to reference, and no reference to reference

      int& a[2]; Error
      int& *p;   Error
      int& &r;   Error

      Also:

      typedef int& lref;
      typedef int&& rref;

      int n;
      lref&     r1 = n;     type of r1 is int&
      lref&&    r2 = n;     type of r2 is int&
      rref&     r3 = n;     type of r3 is int&
      rref&&    r4 = n;     type of r4 is int&&

**/
#include <iostream>
#include <string>

std::string& dangling (){
    // construct a string object
    std::string s ("Example");
    // wanting to return address of object
    // because it is local variable, after the end up local its destructor is called.
    return s;
    // it is correct that return, returns the address of s,
    // but it does not exist after this function.

}   // call destructor of s object.

std::string& fix_dangling (){
    // constructs and exist until end of main
    static std::string s = "Example";
    return s;
}  // does not destructs because it is static object.
int main(){
    /*
        Dangling reference
        Although reference, once initialized, always refer to valid objects or functions,
        it is possible to create a program where the lifetime of the referred-to object ends,
        but the reference remains accessible ( dangling ).
        Accessing such a reference is undefined behavior. A common example is a function
        returning a reference to an automatic variable. ( like: auto int )
    */
    //std::string& r = dangling();    // dangling reference
    //std::cout<<r;                   // output: Segmentation fault (core dumped)
                                    // undefined behavior

    //std::string s = dangling();     // undefined behavior

    // okay
    std::string& r = fix_dangling();
    std::cout<<r<<std::endl;

    // okay
    std::string r2 = fix_dangling();
    std::cout<<r2<<std::endl;

    // error
    // std::string* r3  = fix_dangling();
    // std::cout<<r3<<std::endl;
}












