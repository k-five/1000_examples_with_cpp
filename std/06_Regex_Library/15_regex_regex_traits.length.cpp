/*
            The Regular Expression Library
            ******************************
Defined in header <regex>
// for more detail see: regex.h
                        regex_constants.h

--> Traits:
    The regex traits class is used to encapsulate the localizable aspect of a regex.

>   regex_traits:   provides meta-information about a character type, required by the regex library

    > constructor:          constructs the regex_traits object
    > length:               calculate the length of a null-terminated character string
    > translate:            determines the equivalence key for a character
    > translate_nocase:     determines the case-insensitive equivalence key for a character
    > transform:            determines the sort key for the given string, used to provide collation order
    > transform_primary:    determines the primary sort key for the character sequence, used to determine equivalence class
    > lookup_collatename:   get a collation element by name
    > lookup_classname:     get a character class by name
    > isctype:              indicates membership in a localized character class
    > value:                translates the character representing a numeric digit into an integral value
    > imbue:                sets the locale
    > getloc:               gets the locale

*/
/// std::regex_traits::length
// Calculates the length of a null-terminated character sequence, that is
// the smallest 'i' such that p[i]==0.
// Standard library specialization of std::regex_traits execute std::char_traits<CharT>::length(p);

#include <iostream>
#include <regex>

// #include <iterator>
// #include <algorithm>
// #include <string>


int main(){
    std::cout<<std::regex_traits<char>::length("how are you today?")<<std::endl; // 18
return 0;}













