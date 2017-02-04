/*
    quick review:

    Language Support
        01. type support
        02. dynamic memory management
        03. error handling
        04. initializer-list
        05. variadic function
    **********************************

*/
/// 03. error handling
//
//   error category:
//   logic_error:
//      invalid_argument
//      domain_error
//      out_of_range
//      future_error
//
//  runtime_error
//      range_error
//      overflow_error
//      underflow_error
//      regex_error
//      system_error
//          los_base::failure
//
//  bad_typed
//  bad_cast
//  bad_weak_ptr
//  bad_function_call
//  bad_alloc
//      bad_array_new_new_length
//  bad_exception
//  ios_bad::failure



#include <iostream>
#include <exception>

struct S : std::exception {
    const char* error_massage;
    S( const char* em ) : error_massage( em ){}
    S(){}

    virtual const char* what() const throw(){
        return error_massage;
    }

    template< typename... F >
    void operator()( const int ineger, F... list ){
        sizeof...( list ) >= 3 ? throw S( "too many char for array" ) : "" ;
        const char user_flags[ 6 ] = { 'o', list... };
    }

}match;



int main(){

    match( 1, 'a', 'b', 'd' );


}
/* output:

terminate called after throwing an instance of 'S'
  what():  too many char for array
Aborted (core dumped)

*/
