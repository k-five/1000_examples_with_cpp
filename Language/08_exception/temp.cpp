/*
Exception:
    01
    02 try-block
    03 function-try-block

    04 noexcept specifier ( since c++11 )
    05 noexcept operator  ( since c++11 )
    06 dynamic exception specifier

    For More Detail Read Main Site = f m d r m s
*/
#include <iostream>
#include <exception>
#include <vector>
/// noexcept specifier ( since c++ 11 )
// Specifies whether a function will throw exception or not.
//
// syntax:
// noexcept      or noexcept(true)
// noexcept(optional)
//
// 1 Same as noexcept ( true )
// 2 If expression evaluates to true, the function declared to not throw any exception
//
// Explanation
// The noexcept-specification ( just like dynamic exception specification ) can appear
// as part of a lambda ... f m d r m s.
//
//
// NOTEs
// One of the use of constant expression is ( along with the noexcept operator )
// to define function templates that declare 'noexcept' for some types of not others.
//
// A noexcept specification on a function is not a compile-time check; it is merely
// a method for a programmer to inform the compiler whether or not a function should
// throw exceptions.
/// Deprecates
// noexcept is an improved version of throw(), which is deprecated in c++11. Unlike
// throw(), noexcept will not call std::unexcepted and may or may not unwind the stack
// which potentially allows the complier to implement noexcept without the runtime
// overhead of throw()
