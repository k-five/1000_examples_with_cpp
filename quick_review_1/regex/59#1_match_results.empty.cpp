/*
            Regular Expression
            ******************
written and tested on code::block 16.01
                      Ubuntu      16.01
            ******************


std::match_results

regex matching operation, each match being of the corresponding "sub_match" type.

It is filled by regex_match, regex_search, or regex_iterator with the results of
the matching operation. The elements in "match_results" object are const-qualified,
and thus are not meant to be modified outside of these function.


some typedef for match_results:

cmatch      equals to typedef match_results< const char*>
smatch      equals to typedef match_results< string::const_iterator >

wcmatch      equals to typedef match_results< const wchar_t* >
wsmatch      equals to typedef match_results< wstring::const_iterator >


    Member function:
        constructor
        destructor
        operator =

    Capacity:
        empty
        size
        max_size

    Iterator:
        begin
        end
        cbegin
        cend

    Element access:
        operator []
        prefix
        suffix
        length
        position
        str

    Formating:
        format

    Swap:
        swap

    Observers:
        ready
        get_allocator

    Non-member function:
        operators( match_result )
        std::swap( match_result )
*/

/// std::match_results empty



#include <iostream>
#include <regex>
#include <string>


int main(  ){

    typedef std::match_results< const char* > mr_t;
    mr_t first, second;

    const char* c_string = "Subject";

    std::basic_regex< char > regex_1( "sub(.+)" );
    std::basic_regex< char > regex_2( "sub(.+)", std::regex_constants::ECMAScript | std::regex_constants::icase );

    std::regex_match( c_string, first, regex_1 );   // nothing will match so first.empty() == 1
    std::regex_match( c_string, second, regex_2 );  // okay, it will match so second.empty() == 0

    if( first.empty() ) puts( "first is empty" );
    else                puts( "first is not empty" );

    if( second.empty() )    puts( "second is empty" );
    else                    puts( "second is not empty" );



}

/* output for me:

first is empty
second is not empty

*/
