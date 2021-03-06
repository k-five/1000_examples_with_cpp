/*
            The Regular Expression Library
            ******************************
Defined in header <regex>
// for more detail see: regex.h
                        regex_constants.h

--> Exception:
    This class defines the type of object thrown as exceptions to report errors from the
    regular expression library.

>   regex_error:    reports errors generated by the regular expression library

*/
/// std::regex_error
// Defines the type of exception object thrown to report errors in
// the regular expression library.
//
// inherited form std::exception
// member function what()
// inherited form diagram
// member function code

#include <iostream>
#include <regex>

// #include <iterator>
// #include <algorithm>
// #include <string>


int main(){

    try{ std::regex rgx("[a-b][c"); }
    catch (const std::regex_error& re){
        std::cout<<"regex_error caught: "<<re.what()<<'\n';
        if(re.code()==std::regex_constants::error_brack){
            std::cerr<<"The code was error_break\n";
        }
    }


return 0;}













