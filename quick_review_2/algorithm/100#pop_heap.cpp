/*

A review of algorithm library

Heap:

*/


#include <iostream>
#include <algorithm>
#include <iterator>
#include <utility>




/// pop_heap
//  pop element from heap range

// return is: void


int main(){

    constexpr unsigned array_index_size = 10;
    int array[ array_index_size ]{ 0, 9, 1, 8, 2, 7, 3, 6, 4, -1 };
    int* begin_array = array;
    int* end_array   = array + array_index_size;

    std::ostream_iterator< int > output( std::cout, " " );

    std::make_heap( begin_array, end_array );
    std::copy( begin_array, end_array, output );
    puts( "" );
    array[ array_index_size + -1 ] = 100;
    std::push_heap( begin_array, end_array );
    std::copy( begin_array, end_array, output );
    puts( "" );
    std::pop_heap( begin_array, end_array );
    std::copy( begin_array, end_array, output );

}

/* output

9 8 7 6 2 1 3 0 4 -1
100 9 7 6 8 1 3 0 4 2
9 8 7 6 2 1 3 0 4 100
Process returned 0 (0x0)   execution time : 0.021 s
Press ENTER to continue.

*/
