/// Sequence containers : set
/// std::set
///
/// Capacity
/// 10_std::set::size
/// definition in header < set >

/**
int_type size() const;

Returns the number of element in the container, i.e. std::distance(begin(), end());
**/


//#include <unistd.h>
#include <iostream>
#include <string>
#include <set>

/// helper function for printing pairs
template<class CH,class TR,class A,class B>
std::basic_ostream<CH, TR>& operator<<(std::basic_ostream<CH, TR>& out,std::pair<A, B>& pair){
    return out <<'('<<pair.first<<','<<pair.second<<')';
}

/// helper function for printing containers
template<class CH, class TR, class CON>
std::basic_ostream<CH, TR>& operator<<(std::basic_ostream<CH, TR>& out, CON& container){
    out<<'{'<<*container.begin();
    for ( auto it = ++(container.begin());it != container.end();++it)
        out<<','<<*it;
    return out<<'}';
}

void printStuff(){
    std::cout<<std::endl;
}
template<typename F, typename... L>
void printStuff(F first,L... list){
    std::cout<<' ';
    std::cout<<first.size();
    printStuff(list...);
}
int main(){


    { /// my sample
    }
    { /// en.reference.com
        std::set<int> emptySet;
        std::cout<<emptySet.size()<<std::endl;
        std::initializer_list<int> i{1};
        emptySet.insert(i);
        std::cout<<emptySet.size()<<std::endl;

    }

}
