/*
            Error Handling
            **************


1.  Exception Handling:
    The header <exception> provides several classes and function related
    to exception handling in C++ program. (defined in header <exception>)

    1.1 capture and storage of exception object
        > exception             : base class for exceptions thrown by the standard library components
        > uncaught_exception    : checks if exception handling is currently is progress
        > uncaught_exceptions   : "
        > exception_ptr         : shared pointer type for handling exception objects
        > make_exception_ptr    : creates an std::exception_ptr from an exception object
        > current_exception     : capture the current exception in a std::exception_ptr
        > rethrow_exception     : throw an exception from a std::exception_ptr
        > nested_exception      : a mixin type to capture and store current exceptions
        > throw_with_nested     : throw its argument with std::nested_exception mixed in
        > rethrow_if_nested     : throw the exception from a std::nested_exception

*/
/// std::exception_ptr
//  std::exception_ptr is a nullable pointer-like type that manages an
//  exception object which has been thrown and captured with std::current_exception
//  An instance of exception_ptr may be passed to another function, possibly on
//  another thread, where the exception may be re-thrown and handled with a caught clause.



#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>

void handle_eptr (std::exception_ptr eptr){     // passing by value is okay
    try {
        if (eptr)       // by default it is null
            std::rethrow_exception(eptr);
    } catch (const std::exception& er){ std::cout << "caught exception \"" << er.what() << "\"\n"; }
}

int main(){
    std::exception_ptr eptr;
    try {
        std::string().at(1);                // the generates an std::out_of_range
    } catch (...){                          // caught anything with ellipsis
        eptr = std::current_exception();    // capture
    }

    handle_eptr(eptr);  // calls the function

}   // destructor for std::out_or_range called here, when the eptr is destruct
