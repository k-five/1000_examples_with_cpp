/*
Template:
    01 template parameter and template argument
    02 class template
    03 function template
    04 variable template
    05 template argument deduction
    06 explicit (full) template specialization
    07 partial template specialization
    08 parameter pack
    09 sizeof ... operator
    10 fold expression
    11 dependent names
    12 SFINAE
    13 constraints and concepts
*/
#include <iostream>
/// 01 template parameter and template argument

// template specialization

template<class T> class C {
private:
    T data;
public:
    C(T t): data(t) {}
    void p () {std::cout<<data<<std::endl; }
};

// specializer template class
template <>
void C<int>::p(){}  // so output is nothing

// specializer template class
template <>     // it <> must exist
void C<char>::p(){ std::cout<<"char"<<std::endl; }

template void C<float>::p();    // with no body it is okay
                                // but it does nothing
                                // f.p() in output is 2, because calls p() inside the C class

// template void C<float>::p(){};  // with body it must have gotten <> after template keyword

int main(){
    C<int> c = 1;
    c.p();

    C<float> f=2;
    f.p();
}
