#include <iostream>

using namespace std;

int main() {
  int a;
  float b;
  char c;

  a = -2;
  b = -0.123;
  c = 'c';

  char d = 'd';
  bool e = true;
  bool f = false;

  string text = "I fricking love potatos!";


  int g = 1234567890; // 12345678901 too long
  // int h = 4294967295; // too big for int!
  // int h = 2147483648; // too big for int!
  int h = 2147483647; // max for int
  int i = -2147483648; // min for int

//###########
//  Data types have their range:
//  https://en.wikibooks.org/wiki/C%2B%2B_Programming/Programming_Languages/C%2B%2B/Code/Statements/Variables/Type/Data_Types
//  for bigger numbers you can try adding "unsigned" or "long" or both or "long long".... depending how much memory you want to use for it.
//###########

  char j = 99; // is `99` the same as `'c'`?
  // string k = 99999; // compiler didn't like this one

//###########
//  of course.
//  to define a string variable you need to use ""
//  e.g.
    string k = "99999";
//  if you wanna play with defining chars inside string using numbers like above (char j = 99;)
//  you can use another type: "an array of chars" which is also often used like 'string'

    char ciag_znak[ 13 ] = { 'P', 'o', 'T', 'a', 'T', 'o', 'S', ' ' , '<', '3', ' ' , 99, '\0' };
    char wyraz[ 50 ];

    cout << "Write some text: ";
    cin >> wyraz;
    cout << "Your text: \"" << wyraz
    << "\"" << endl;

    cout << "Text about Potatos: \""
    << ciag_znak
    << "\"" << endl;

//###########

// And some other ways of declaring it:

    //declaration of the array with a string
    char ciag_znak2[ 10 ] = "123 - C++";

    //compiler automatically calculate the size! :D
    char wyraz2[] = "Potatos and burritos ;) ...";

    cout << ciag_znak2 << endl;
    cout << wyraz2 << endl;



  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;
  cout << e << endl; // true, prints 1 to console;
  cout << f << endl; // false, prints 0 to console;
  cout << text << endl;
  cout << g << endl;
  cout << h << endl;
  cout << i << endl;
  cout << j << endl;
  cout << k << endl;

// Self study:
//
// - read about iostream: https://en.wikipedia.org/wiki/Input/output_(C%2B%2B)
// - read about namespace: https://msdn.microsoft.com/en-us/library/5cb46ksf.aspx
// - uncomment some errors and read compiler warnings

// Experimenting:
//
// I compiled && ran the program without the initializing the variables...
//
//     #include <iostream>
//
//     using namespace std;
//
//     int main() {
//       int a;
//       int b;
//
//       cout << a << endl;
//       cout << b << endl;
//     }
//
// and this happened
//
//     $ bin/compile_file.sh src/0002-data-types.cpp && ./_build/0002-data-types
//     src/0002-data-types.cpp:12:11: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
//       cout << a << endl;
//               ^
//     src/0002-data-types.cpp:6:8: note: initialize the variable 'a' to silence this warning
//       int a;
//            ^
//             = 0
//     src/0002-data-types.cpp:13:11: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
//       cout << b << endl;
//               ^
//     src/0002-data-types.cpp:7:8: note: initialize the variable 'b' to silence this warning
//       int b;
//            ^
//             = 0
//     2 warnings generated.
//     0
//     0
//
// It's interesting the compile issues warnings, instead of failing to compile at all.

//######
// agree,it's interesting, but it's ok. It just get a value (number) of 4 bytes [you can try this: sizeof(int)] in RAM memory
// and if you don't define it, it has the value stored earlier in the memory.
// ...so it would be a one way to create a memory's sniffer/spy :-)
// ... but maybe later ;)
//######

// -------------------
//
// Making `int b` a float...
//
//     $ bin/compile_file.sh src/0002-data-types.cpp && ./_build/0002-data-types
//     src/0002-data-types.cpp:10:7: warning: implicit conversion from 'double' to 'int' changes value from 5.123 to 5
//           [-Wliteral-conversion]
//       b = 5.123;
//         ~ ^~~~~
//     1 warning generated.
//     2
//     5
//
// -------------------
//
// A float works without the leading zero, but including the 0 is probably best
//
//    b = -.123 // compiles w/ no errors & runs fine
//
// includes the 0 when printing to console
//
//    -0.123
//

//### that's right

// -------------------
//
// Assigned a variable, but didn't used it, and got a compiler warning
//
//     $ bin/compile_run src/0002-data-types.cpp
//     src/0002-data-types.cpp:9:8: warning: unused variable 'd' [-Wunused-variable]
//       char d = 'd';
//

//#### that's super nice. So you can optimize your programme by removing un used vars

// -------------------
//
// I tried using single quotes for the string, and got a whole bunch of warnings,
// although the program still compiled and ran.
//
//     $ bin/compile_run src/0002-data-types.cpp
//     src/0002-data-types.cpp:18:17: warning: multi-character character constant [-Wmultichar]
//       string text = 'I fricking love potatos!';
//                     ^
//     src/0002-data-types.cpp:18:17: warning: character constant too long for its type
//     src/0002-data-types.cpp:18:10: error: no viable conversion from 'int' to 'string' (aka 'basic_string<char,
//           char_traits<char>, allocator<char> >')
//       string text = 'I fricking love potatos!';
//              ^      ~~~~~~~~~~~~~~~~~~~~~~~~~~
//     /Library/Developer/CommandLineTools/usr/include/c++/v1/string:763:5: note: candidate constructor not viable: no known
//           conversion from 'int' to 'const std::__1::basic_string<char> &' for 1st argument
//         basic_string(const basic_string& __str);
//         ^
//     /Library/Developer/CommandLineTools/usr/include/c++/v1/string:778:31: note: candidate constructor not viable: no known
//           conversion from 'int' to 'const value_type *' (aka 'const char *') for 1st argument
//         _LIBCPP_INLINE_VISIBILITY basic_string(const value_type* __s);
//                                   ^
//     2 warnings and 1 error generated.
//     -2
//     -0.123
//     c
//     d
//     1
//     0
//     I fricking love potatos!
//
// Actually the program didn't compile correctly, even though it ran.
// I added another variable afterwards, and that variable didn't get printed.
// So...  use double quotes w/ strings :)
//

//######## perfecto :D

// -------------------
//
// Played w/ min & max values for int.  Looks like int is 32 bit!
//
// -------------------
//

//####### hehe you can always check the range on the Internet of use the following function sizeof(int) to check how many bytes it takes.

cout << "\n\n sizeof(int) function: " << sizeof(int);

}
