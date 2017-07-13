/*

A review of abstraction section from cplusplus.com

*/

/// basic_istream::get
//  int_type get()
//  basic_istream& get ( char_type& c )
//
//  basic_istream& get ( char_type* s, streamsize n )
//  basic_istream& get ( char_type* s, streamsize n, char_type delim )
//
//  basic_istream& get ( streambuf& sb )
//  basic_istream& get ( streambuf& sb, char_type delim )
//
//  Gets characters
#include <iostream> // std::cout, std::ios, std::streamsize, std::streambuf
#include <fstream>



int main(){

    std::ifstream input_file_stream( "file" );
    input_file_stream.get( *std::cout.rdbuf(), '(' ); // read from begging up to the first '(' open parenthesis
    input_file_stream.close();

}
/**
If the get pointer
Process returned 0 (0x0)   execution time : 0.004 s
Press ENTER to continue.



**/
