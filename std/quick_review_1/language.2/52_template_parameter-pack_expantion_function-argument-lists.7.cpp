/*
            language 2
            **********
written and tested on code::block 16.01
                      Ubuntu 16.01
            **********
1. Classes
2. Templates
3. Exceptions
4. Statements
5. Miscellaneous

*/
/// 2. template
//  function argument lists


/******************/
#include <iostream>
/******************/

/// how parameter-pack is work?
// pack expression is a pattern by an ellipsis in which the name
// of the at least on parameter pack appears at least once
// is expanded into zero of more "comma-separated instantiation
// of the pattern where the name of the parameter pack is replaced
// by each of the types from the pack
//
// f( args... )             is expanded to f( e1, e2, e3 )
// f( ++args... )           is expanded to f( ++e1, ++e2, ++e3 )
// f( &args... )            is expanded to f( &e1, &e2, &e3 )
// f( n, args... )          is expanded to f( n, e1, e2, e3 )
// f( args..., n )          is expanded to f( e1, e2, e3, n )
// **************************************************************

int f( int arg1, int arg2, int arg3 ){
    std::cout << "I am called\n";
    int sum = arg1 + arg2 + arg3;
    std::cout << sum << '\n';
    return sum;
}

template< typename... PPE > // PPE is an acronym for Parameter Pack Expression
void print( PPE... args){
    // error: too few argument, it is just like one argument
    // f( f(args...) );
    f( f( args... ), 0, 0 );    // okay
    // what happens here?
    // first call inner f( args... ) and it would be
    //
    // I am called
    // 6
    //
    // then the return value ( 6 ) becomes first argument of outer f, it means:
    //
    // f( 6, 0, 0 ) that would be
    //
    // I am called
    // 6
}

int main(){

    int a,b,c;
    print( 1, 2, 3 );

}

/* output:

I am called
6
I am called
6

*/
