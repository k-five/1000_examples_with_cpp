/*
            Initializer List
            ****************

(defined in header <initializer_list>)
An object of type std::initializer_list<T> is a lightweight proxy
that provides access to an array of objects of type const T.

Member Type:
    value_type
    reference
    const_reference
    size_type
    iterator
    const_iterator

Member Function
    > constructor   : creates an empty initializer_list
    > size          : returns the number of the elements in the initializer list
    (non-member function)
    > begin         : returns a pointer to the first element
    > end           : returns a pointer to the last element
    > std::begin( obj ) : specialized for begin
    > std::end( obj )   : specialized for end
    (defined in header <iterator>)
    > rbegin        : specialized for reverse begin
    > rend          : specialized for reverse end
*/
/// begin()
//  Returns a pointer to the first element in the initializer list


#include <iostream>
#include <initializer_list>



int main(){

    // creates initializer list using list-initialization
    std::initializer_list<int> digits {1, 2, 3, 4, 5};
    std::cout << digits.begin() << '\n';    // address
    std::cout << *digits.begin() << '\n';   // value == 1
}
