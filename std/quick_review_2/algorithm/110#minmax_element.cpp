/*

A review of algorithm library

Min / Max:

*/


#include <iostream>
#include <algorithm>
#include <iterator>
#include <utility>




/// minmax_element
//  return largest element in a range

//
template< unsigned int N >
int* end_of( int ( &array )[ N ] ){
    return array + N;
}

bool bf( const int right, const int left ){
    return right < left;
}

int main(){

    int c_array[] = { 1,2,3,4,5,-4,9,10 };
    const int* begin_array = c_array;
    const int* end_array   = end_of( c_array );

    std::pair< const int*, const int* > result = std::minmax_element( begin_array, end_array );

    if( result == std::minmax_element( begin_array, end_array, bf ) )
        std::cout << *result.first << ' ' << *result.second << '\n';
    else
        std::cout << "failure\n";

}

/* output


-4 10

Process returned 0 (0x0)   execution time : 0.011 s
Press ENTER to continue.


*/
