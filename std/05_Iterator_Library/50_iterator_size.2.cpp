/*
            The Iterator Library
            ********************
For more detail you can see:
    stl_iterator_base_types.h
    stl_iterator.h
    type_traits
-------------------------------------------------
Container access
    Those non-member function provides a generic interface for containers, plain arrays, and std::initializer_list.

    size:                           returns the size of a container or array
    empty:                          checks whether the container is empty
    data:                           obtains the pointer to the underlying array

*/
/// size
// Returns the given container or array (since c++ 17)



#include <iostream>
#include <iterator>
#include <string.h>
// #include <sstream>

#include <algorithm>
// #include <functional> // std::greater<int>()
#include <vector>
// #include <list>
// #include <set>
// #include <set>
// #include <string>
  #include <array>
// #include <list>
// #include <random> // for using of std::random_device and std::mt19937
// #include <cstdlib>
// #include <ctime>

// #include <unistd.h>
// #include <climits>
// #include "../helpful/print_container" // operator<< overloaded



template<typename T,std::size_t N>
constexpr std::size_t size(const T(&arr)[N])noexcept{return N;} // #1           such as arr and char*

constexpr std::size_t size(const char* &str)noexcept{return strlen(str)+1;} // #2 such as variable of char*

template<typename T>
constexpr auto size(const T& c) -> decltype(c.size()) {return c.size();}   // #3 such as vector



int main(){
    int arr[]={11,22,33,44,55,66,77};

    std::cout<<size(arr)<<std::endl;                // calls #1
    std::cout<<size("hello!")<<std::endl;           // calls #1

    const char* hi="hello!";
    std::cout<<size(hi)<<std::endl;         // calls #2
    // h = 1
    // e = 2
    // l = 3
    // l = 4
    // o = 5
    // ! = 6
    // \n = 7

    std::vector<int> vec(7,7);
    std::cout<<size(vec)<<std::endl;        // calls #3



return 0;}






