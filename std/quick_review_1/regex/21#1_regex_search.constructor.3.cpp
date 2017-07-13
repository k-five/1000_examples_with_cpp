/*
            Regular Expression
            ******************
written and tested on code::block 16.01
                      Ubuntu      16.01
            ******************


std::regex_search:
    This function returns true if the expression is found anywhere in
    the target sequence, even if the sequence contains more characters
    that are not part of the match before or after the match.

    For a function that returns true only when the entire sequence matches
    see regex_match.

*/
/// std::regex_search constructor
//  It has 7 signatures
//
// 1) c-string
// 2) std::string
// 3) range
// 4) c-string with result_match
// 5) std::string with result_match
// 6) range with result_match
// 7) moving string is deleted( because of temporary object )

#include <iostream>
#include <regex>
#include <string>


int main(  ){

    std::string string = "this subject has a submarine as a subsequence. sub space sub space";
    std::match_results< std::string::const_iterator > m_result;
    // also you can you use the alias for this, that named std::smatch
    std::basic_regex< char > regex ( "\\b(sub)([^ ]*)" ); // matches word boundary sub with 0 or 1 not whitespace
                                                    // matches sub but not space
    // also you can use the alias for this, that named std::regex



    // for searching though all match, we can put the function in a while loop
    // the refresh the string by assigning it from the rest of the m_result.suffix().str()

    // because the m_result is a containers of the string
    // we can get the its contents
    while( std::regex_search( string, m_result, regex ) ){
        std::cout << m_result.str() << " => ";

        // return its contents to str
        for( std::string str : m_result ) std::cout << str << ' ';

        // updating the string
        string = m_result.suffix().str();

        std::cout << std::endl;
    }

    // the same syntax in Perl:
    // echo this subject has a submarine as a subsequence. sub space sub space | perl -lne 'print $&," -> ", $&," ",$1," ",$2 while /\b(sub)([^ ]*)/g'
    // subject -> subject sub ject
    // submarine -> submarine sub marine
    // subsequence. -> subsequence. sub sequence.
    // sub -> sub sub
    // sub -> sub sub
}

/* output for me:

subject => subject sub ject
submarine => submarine sub marine
subsequence. => subsequence. sub sequence.
sub => sub sub
sub => sub sub

*/
