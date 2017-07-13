/*

A review of algorithm library

Partition:

*/


#include <iostream>
#include <algorithm>
#include <chrono>
#include <random>



/// is_partition
//  test whether a range is partitioned


bool is_odd( const int i ){
    return i % 2 == 1;
}

int main(){

    int array[] = { 1,2,3,4,5,6,7,8,9 };
    for( const int i : array ){
        std::cout << i << ' ';
    }
    std::cout << '\n';


    std::boolalpha( std::cout );
    std::cout << std::is_partitioned( std::begin( array ), std::end( array ), is_odd ) << '\n';

    std::partition( std::begin( array ), std::end( array ), is_odd );

    std::cout << std::is_partitioned( std::begin( array ), std::end( array ), is_odd ) << '\n';

    for( const int i : array ){
        std::cout << i << ' ';
    }

}

/* output


1 2 3 4 5 6 7 8 9
false
true
1 9 3 7 5 6 4 8 2
Process returned 0 (0x0)   execution time : 0.016 s
Press ENTER to continue.



*/
