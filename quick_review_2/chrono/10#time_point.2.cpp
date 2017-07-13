/*

A review of chrono library

chrono is the name of a header, but also of a sub-namespace:
All the element in this header, ( except for the comment_type specialization )
are not defined directly under the std namespace ( like most of the standard library )
but under the std::chrono namespace.

The mainly concepts:
    duration
    time point
    clock
        system_clock
        steady_clock
        high_resolution_clock

    traits:
        trait_as_floating_point
        duration_value
        common_type( duration )

    function:
        duration_cast<>()
        time_point_cast<>()

hours           signed integral type of at least 23 bits ratio<3600,1>
minutes         signed integral type of at least 29 bits ratio<60,1>
seconds         signed integral type of at least 35 bits ratio<1,1>
milliseconds    signed integral type of at least 45 bits ratio<1,1000>
microseconds    signed integral type of at least 55 bits ratio<1,1000000>
nanoseconds     signed integral type of at least 64 bits ratio<1,1000000000>
*/

/// std::chrono::time_point
//  time_point object expresses a point in time relative to a clock's epoch.

/// member:
//  constructor, destructor, time_since_epoch
//  min, max
//  operators ( ==, !=, ++, --, and so on )

#include <iostream>
#include <chrono>
#include <ctime>

int main(){

    using namespace std::chrono;
    typedef std::chrono::duration< int > second_t;  // equivalents to std::chrono::seconds

//    system_clock::time_point tp;
    time_point< system_clock, second_t > tp;
    std::cout << tp.time_since_epoch().count() << '\n';
    tp += second_t( 1 );                                    // 1 second after epoch
    std::cout << "in seconds: " << tp.time_since_epoch().count() << '\n';

    std::time_t tt = system_clock::to_time_t( tp );
    std::cout << std::ctime( &tt ) << '\n';
    std::cout << std::asctime( std::localtime( &tt ) )<< '\n';

}

/* output

0
in nanoseconds: 1
Thu Jan  1 03:30:01 1970

Thu Jan  1 03:30:01 1970


Process returned 0 (0x0)   execution time : 0.019 s
Press ENTER to continue.


*/
