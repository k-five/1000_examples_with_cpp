/*
            Function Object
            ***************

5. some deprecated function since c++11
    5.1 base
        unary_function      adaptor-compatible unary function base class
        binary_function     adaptor-compatible binary function base class
    --------------------------------------------
    5.2 binders
        binder1st
        binder2nd           function object holding a binary function and one of its arguments
        bind1st
        bind2nd             binds one argument to a binary function
    --------------------------------------------
    5.3 Function adaptors
        pointer_to_binary_function      adaptor-compatible wrapper for a pointer to binary function
        ptr_fun                         creates an adaptor-compatible function object wrapper from a pointer to function
        mem_fun_t
        mem_fun1_t
        const_mem_fun_t
        const_mem_fun1_t                wrapper for a pointer to nullary or unary member function, callable with a pointer to object
        mem_fun                         creates a wrapper from a pointer to member function, callable with a pointer to object
        mem_fun_ref_t
        mem_fun1_ref_t
        const_mem_fun_ref_t
        const_mem_fun1_ref_t            wrapper for a pointer to nullary or unary member function, callable with a reference to object
        mem_fun_ref                     creates a wrapper from a pointer to member function, callable with a reference to object
*/
/// ptr_fun


#include <iostream>
#include <functional>
#include <string>
#include <algorithm>

bool is_vawol( char character ){
    return std::string( "aeiouAEIOU" ).find( character ) != std::string::npos;
}

int main() {

    std::string some_string( "how are you today?" );

    std::copy_if( some_string.begin(), some_string.end(),
                  std::ostreambuf_iterator< char >( std::cout ),
                  std::not2( std::ptr_fun( is_vawol ) ) );

}







/* output for me:

hw r y tdy?

*/


