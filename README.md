
Hello everyone.  
I am Shakib. And for experience to myself, I do these examples in c++ language.

Where did these examples come from?  
I just printed out the whose site: en.cppreference.com
      
Well, maybe you ask why am I doing this stupid work?

First I needed to learn English language, second I needed to learn 10-finger-type
and third I liked learning programming. So I do all three of them together. And I
typed these examples to improve my EN language and TYPING and C++ programming.

I tested all these examples with this command-line argument:  
g++ -std=c++14 -O2 -Wall -pedantic -pthread

On Gnu / Ubuntu 16.01 LTS and code::blocks IDE 16.01 (32 bit)  

If you are confusing with my examples, I apologize to you.I am beginner.  
  
You can see reference sites:  
    > en.cppreference.com  
    > cplusplus.com  
    > msdn.microsoft.com  



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
 <meta name="Author" content="Made by 'tree'">
 <meta name="GENERATOR" content="$Version: $ tree v1.7.0 (c) 1996 - 2014 by Steve Baker, Thomas Moore, Francesc Rocher, Florian Sesser, Kyosuke Tokoro $">
 <title>Directory Tree</title>
 <style type="text/css">
  <!-- 
  BODY { font-family : ariel, monospace, sans-serif; }
  P { font-weight: normal; font-family : ariel, monospace, sans-serif; color: black; background-color: transparent;}
  B { font-weight: normal; color: black; background-color: transparent;}
  A:visited { font-weight : normal; text-decoration : none; background-color : transparent; margin : 0px 0px 0px 0px; padding : 0px 0px 0px 0px; display: inline; }
  A:link    { font-weight : normal; text-decoration : none; margin : 0px 0px 0px 0px; padding : 0px 0px 0px 0px; display: inline; }
  A:hover   { color : #000000; font-weight : normal; text-decoration : underline; background-color : yellow; margin : 0px 0px 0px 0px; padding : 0px 0px 0px 0px; display: inline; }
  A:active  { color : #000000; font-weight: normal; background-color : transparent; margin : 0px 0px 0px 0px; padding : 0px 0px 0px 0px; display: inline; }
  .VERSION { font-size: small; font-family : arial, sans-serif; }
  .NORM  { color: black;  background-color: transparent;}
  .FIFO  { color: purple; background-color: transparent;}
  .CHAR  { color: yellow; background-color: transparent;}
  .DIR   { color: blue;   background-color: transparent;}
  .BLOCK { color: yellow; background-color: transparent;}
  .LINK  { color: aqua;   background-color: transparent;}
  .SOCK  { color: fuchsia;background-color: transparent;}
  .EXEC  { color: green;  background-color: transparent;}
  -->
 </style>
</head>
<body>
	<h1>Directory Tree</h1><p>
	<a href="baseHREF">baseHREF</a><br>
	├── <a href="baseHREF/Container/">Container</a><br>
	│   ├── <a href="baseHREF/Container/01_std::array/">01_std::array</a><br>
	│   ├── <a href="baseHREF/Container/02_std::deque/">02_std::deque</a><br>
	│   ├── <a href="baseHREF/Container/03_std::vector/">03_std::vector</a><br>
	│   ├── <a href="baseHREF/Container/04_std::list/">04_std::list</a><br>
	│   ├── <a href="baseHREF/Container/05_std::forward_list/">05_std::forward_list</a><br>
	│   ├── <a href="baseHREF/Container/06_std::set/">06_std::set</a><br>
	│   ├── <a href="baseHREF/Container/07_std::multiset/">07_std::multiset</a><br>
	│   └── <a href="baseHREF/Container/08_std::map/">08_std::map</a><br>
	├── <a href="baseHREF/Inout_Output_Library/">Inout_Output_Library</a><br>
	│   ├── <a href="baseHREF/Inout_Output_Library/03_basic_streambuf/">03_basic_streambuf</a><br>
	│   │   └── <a href="baseHREF/Inout_Output_Library/03_basic_streambuf/protected_member/">protected_member</a><br>
	│   ├── <a href="baseHREF/Inout_Output_Library/04_basic_istream/">04_basic_istream</a><br>
	│   ├── <a href="baseHREF/Inout_Output_Library/05_basic_ostream/">05_basic_ostream</a><br>
	│   ├── <a href="baseHREF/Inout_Output_Library/06_basic_iostream/">06_basic_iostream</a><br>
	│   ├── <a href="baseHREF/Inout_Output_Library/07_basic_filebuf/">07_basic_filebuf</a><br>
	│   ├── <a href="baseHREF/Inout_Output_Library/08_basic_ifstream/">08_basic_ifstream</a><br>
	│   ├── <a href="baseHREF/Inout_Output_Library/09_basic_ofstream/">09_basic_ofstream</a><br>
	│   ├── <a href="baseHREF/Inout_Output_Library/10_basic_fstream/">10_basic_fstream</a><br>
	│   ├── <a href="baseHREF/Inout_Output_Library/11_basic_stringbuf/">11_basic_stringbuf</a><br>
	│   ├── <a href="baseHREF/Inout_Output_Library/12_basic_istringstream/">12_basic_istringstream</a><br>
	│   ├── <a href="baseHREF/Inout_Output_Library/13_basic_ostringstream/">13_basic_ostringstream</a><br>
	│   ├── <a href="baseHREF/Inout_Output_Library/14_basic_stringstream/">14_basic_stringstream</a><br>
	│   ├── <a href="baseHREF/Inout_Output_Library/basic_ios/">basic_ios</a><br>
	│   ├── <a href="baseHREF/Inout_Output_Library/I_O_manipulators/">I_O_manipulators</a><br>
	│   └── <a href="baseHREF/Inout_Output_Library/ios_base/">ios_base</a><br>
	├── <a href="baseHREF/Language/">Language</a><br>
	│   ├── <a href="baseHREF/Language/01_preprocessor/">01_preprocessor</a><br>
	│   ├── <a href="baseHREF/Language/02_expression/">02_expression</a><br>
	│   ├── <a href="baseHREF/Language/03_declaration/">03_declaration</a><br>
	│   ├── <a href="baseHREF/Language/04_initialization/">04_initialization</a><br>
	│   ├── <a href="baseHREF/Language/05_function/">05_function</a><br>
	│   ├── <a href="baseHREF/Language/06_classes/">06_classes</a><br>
	│   ├── <a href="baseHREF/Language/07_template/">07_template</a><br>
	│   ├── <a href="baseHREF/Language/08_exception/">08_exception</a><br>
	│   ├── <a href="baseHREF/Language/09_statement/">09_statement</a><br>
	│   └── <a href="baseHREF/Language/10_miscellaneous/">10_miscellaneous</a><br>
	└── <a href="baseHREF/String_Library/">String_Library</a><br>
	&nbsp;&nbsp;&nbsp; ├── <a href="baseHREF/String_Library/null_terminated_string/">null_terminated_string</a><br>
	&nbsp;&nbsp;&nbsp; └── <a href="baseHREF/String_Library/std::basic_string/">std::basic_string</a><br>
	<br><br>
	</p>
	<p>

40 directories
	<br><br>
	</p>
	<hr>
	<p class="VERSION">
		 tree v1.7.0 © 1996 - 2014 by Steve Baker and Thomas Moore <br>
		 HTML output hacked and copyleft © 1998 by Francesc Rocher <br>
		 JSON output hacked and copyleft © 2014 by Florian Sesser <br>
		 Charsets / OS/2 support © 2001 by Kyosuke Tokoro
	</p>
</body>
</html>
