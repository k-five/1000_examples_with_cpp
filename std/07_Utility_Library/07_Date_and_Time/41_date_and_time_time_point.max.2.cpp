/*
            Date and Time
            *************

    1. duration
        see the examples from 01 to 28
    -----------------------------------
    2. Clocks:
        see the examples form 29 to 34
    -----------------------------------

    3. Time point
    A time point is a duration fo time that had passed since the epoch of specific clock
    (defined in header <chrono>)
    time_point

        Member types
        Member type 	Definition
        clock 	        Clock, the clock on which this time point is measured
        duration 	    Duration, a std::chrono::duration type used to measure the time since epoch
        rep 	        Rep, an arithmetic type representing the number of ticks of the duration
        period 	        Period, a std::ratio type representing the tick period of the duration

        Member functions
        (constructor)       constructs a new time point
        time_since_epoch    returns the time point as duration since the start of its clock
        operator+=
        operator-=          modifies the time point by the given duration
        min                 returns the time point corresponding to the smallest duration
        max                 returns the time point corresponding to the largest duration

        Non-member functions
        std::common_type<std::chrono::time_point>       specializes the std::common_type trait

        operator+
        operator-   modifies the time point by the given duration

        operator==
        operator!=
        operator<
        operator<=
        operator>
        operator>=  compares two time points

        time_point_cast                     converts a time point to another time point on the same clock, with a different duration
        floor(std::chrono::time_point)      converts a time_point to another, rounding down
        ceil(std::chrono::time_point)       converts a time_point to another, rounding up
        round(std::chrono::time_point)      converts a time_point to another, rounding to nearest, ties to even



*/
/// std::chrono::time_point::max
//  Returns a time_point with the largest possible duration.
//  i.e. std::chrono::time_point( std::chrono::duration::max() )



#include <iostream>
#include <chrono>
#include <vector>

// #include <ctime>
// #include <unistd.h>


int main (){
    std::chrono::time_point< std::chrono::system_clock > now = std::chrono::system_clock::now();

    std::vector< std::chrono::time_point< std::chrono::system_clock > > times {
        now - std::chrono::hours( 24 ), // subtracting
        now - std::chrono::hours( 48 ), // subtracting
        now + std::chrono::hours( 24 ), // adding
    }; // end of vector declaration and initialization

    std::chrono::time_point< std::chrono::system_clock > earlist = std::chrono::time_point< std::chrono::system_clock >::max();

    std::cout << "all times:\n";
    for( std::chrono::time_point< std::chrono::system_clock >& tm : times ){

        std::time_t ct = std::chrono::system_clock::to_time_t( tm );
        std::cout << std::ctime( &ct );     // print the times

        if( tm < earlist ) earlist = tm;    // saves the smallest
    } // end of for-range

    std::time_t ct2 = std::chrono::system_clock::to_time_t( earlist ); // that we saver in the for-range
    std::cout << "the earliest is:\n" << std::ctime( &ct2 );
}


/* output for me:
all times:
Tue Dec 13 12:15:46 2016
Mon Dec 12 12:15:46 2016
Thu Dec 15 12:15:46 2016
the earliest is:
Mon Dec 12 12:15:46 201
*/




