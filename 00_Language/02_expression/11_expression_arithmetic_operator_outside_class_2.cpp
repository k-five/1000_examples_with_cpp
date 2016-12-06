///
/// Expression
///
/// Arithmetic Operator
///
/// 11_expression_arithmetic_operator_outside_class_2.cpp

/**
Return the result of specific arithmetic operator;

Note:
All built-in operator returns values, and most user-defined overload
also return value so that the user-defined can be used in the same _
manner as the built-ins. However, in a user-defined operator overload,
any type can be used as return type ( including void ). In particular,
stream insertion and stream extraction overloads of operator<< and __
operator>> return &

name:                  syntax       overload
unary plus              +a              yes
unary minus             -a              yes
addition                a + b           yes
subtraction             a - b           yes
multiplication          a * b           yes
division                a / b           yes
module                  a % b           yes

bitwise NOT             ~a              yes
bitwise AND             a & b           yes
bitwise OR              a | b           yes
bitwise XOR             a ^ b           yes
bitwise list shift      a << b          yes
bitwise right shift     a >> b          yes

**/


#include <iostream>
#include <string>
class Operand {
private:
    int data;
public:
    Operand(const int tempData) : data (tempData) {}
    Operand() : Operand(0) {}
    Operand(const double tempData) : Operand(static_cast<int>(tempData)) {}
    friend std::ostream& operator<<(std::ostream& out, const Operand& object){
        out << object.data;
        return out;
    }
    /************************************************/
    ///template<typename T>
    ///friend T operator~(const T&);

    template<typename L,typename R>
    friend L operator&(const L&,const R&);

    template<typename L,typename R>
    friend L operator|(const L&,const R&);

    template<typename L,typename R>
    friend L operator^(const L&,const R&);

    template<typename L,typename R>
    friend L operator>>(const L&,const R&);

    template<typename L,typename R>
    friend L operator<<(const L&,const R&);


};
/// bitwise not ~
template<typename T>
T operator~(const T& one) {
    return ~(*((int*)(&one)));
}
/// bitwise and &
template<typename L,typename R>
L operator&(const L& left,const R& right){
    return left.data&right.data;
}

/// bitwise or |
template<typename L,typename R>
L operator|(const L& left,const R& right){
    return left.data|right.data;
}

/// bitwise xor ^
template<typename L,typename R>
L operator^(const L& left,const R& right){
    return left.data^right.data;
}

/// bitwise left shift <<
template<typename L,typename R>
L operator<<(const L& left,const R& right){
    return left.data<<right.data;
}

/// bitwise right shift >>
template<typename L,typename R>
L operator>>(const L& left,const R& right){
    return left.data>>right.data;
}


int main(){
    Operand one(10);
    Operand two(2);
    std::cout<<"one         : "<<one<<std::endl;
    std::cout<<"two         : "<<two<<std::endl;
    std::cout<<(std::string(25,'.'))<<std::endl;
    std::cout<<"~one        : "<<~one<<std::endl;
    std::cout<<"one&two     : "<<(one&two)<<std::endl;
    std::cout<<"one|two     : "<<(one|two)<<std::endl;
    std::cout<<"one^two     : "<<(one^two)<<std::endl;
    std::cout<<"one>>two    : "<<(one>>two)<<std::endl;
    std::cout<<"one<<two    : "<<(one<<two)<<std::endl;

    std::cout<<~(*((int*)(&one)))<<std::endl;
}



/**
**It has no explanation and only has a sample**
for getting more information, you can read others documentation.

**NOTE**
There is `friend` definition because of `private date`
If we use `public data` no need to use `friend`
---
**/
