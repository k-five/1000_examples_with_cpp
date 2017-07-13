/*

A review of abstraction section from cplusplus.com

*/

/// basic_istream::sentry (member class)
//
//  Prepares stream for input.

// class sentry {
//     public:
//     explicit sentry (basic_istream& is, bool noskipws = false);
//     ~sentry();
//     explicit operator bool() const;
//     sentry (const sentry&) = delete;
//     sentry& operator= (const sentry&) = delete;
// };

#include <iostream> // std::cout, std::ios, std::streamsize, std::streambuf
#include <sstream>
#include <string>
#include <locale>   // std::isspace, std::isdigit

struct Phone {
    std::string numbers;
    std::string alphabet;
};

std::istream& operator >>( std::istream& input_stream, Phone& tellphone ){
    std::istream::sentry snt( input_stream );
    if( snt ){
        while( input_stream.good() ){
            char chr = input_stream.get(); // gets on char
            if( std::isspace( chr, input_stream.getloc() ) ) tellphone.alphabet += chr;
            if( std::isalpha( chr, input_stream.getloc() ) ) tellphone.alphabet += chr;

            if( std::isdigit( chr, input_stream.getloc() ) ) tellphone.numbers += chr;
        }
    }
    return input_stream;
}


int main(){

    // istream::sentry
    std::istringstream iss( "I have only 3 dollars, do you have 10 million?" );
    Phone cell_one;

    iss >> cell_one;
    std::cout << "digits   pared: " << cell_one.numbers << '\n';
    std::cout << "alphabet pared: " << cell_one.alphabet << '\n';

}
/**



**/
