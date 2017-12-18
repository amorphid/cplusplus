// -----crazy colors-----
#include <iostream>

using namespace std;

int print(int foreground,int background,string message) {
  cout << "\033[38;5;" << foreground << "m"
       << "\033[48;5;" << background << "m"
       << message
       << "\033[0m"
       << "\033[0m\n";
  return 0;
}

int main() {
  cout << "Standard" << endl << endl;

  for (int i = 0; i < 255; i += 1) {
    print(i,255-i,"I'm the Pope :D");
  }
  return 0;
}

// // -----background colors-----
// #include <iostream>
//
// using namespace std;
//
// int print(int color,string message) {
//   cout << "\033[" << color << "m" << message << "\033[0m\n";
//   return 0;
// }
//
// int main() {
//   int bgBlue = 44;
//   int bgDefault = 49;
//   int bgGreen = 42;
//   int bgRed = 41;
//   cout << "Standard" << endl << endl;
//   print(bgRed,"This text has red background");
//   print(bgGreen,"This test has green background");
//   print(bgBlue,"This test has blue background");
//   print(bgDefault,"This test has default background");
//   return 0;
// }

// // -----setiosflags manipulator-----
// #include <iostream>
// #include <iomanip>
//
// using namespace std;
//
// int main() {
//   int i = 1023;
//   cout << hex << i << ", "
//        << setiosflags(ios::uppercase)
//        << i << ", "
//        << resetiosflags(ios::uppercase)
//        << i
//        << endl;
//   return 0;
// }

// // -----setprecision manipulator-----
// #include <iostream>
// #include <iomanip>
//
// using namespace std;
//
// int main() {
//   double i = 4.09845034850348503498537;
//   cout << setprecision(2) << i
//        << "    " << setprecision(5) << i
//        << "    " << setprecision(12) << i
//        << endl;
//   return 0;
// }


// // -----setw manipulator-----
// #include <iostream>
// #include <iomanip>
//
// using namespace std;
//
// int main() {
//   int i = 437;
//   cout << setw(3) << i
//        << setfill('b') << setw(6) << i
//        << setfill('^') << setw(11) << i
//        << endl;
//   return 0;
// }

// // -----manipulators-----
// #include <iostream>
//
// using namespace std;
//
// int main() {
//   int i = 31;
//   cout << i << endl;
//   cout.setf(ios::hex,ios::basefield);
//   cout << i << endl;
//   cout << hex << i << endl;
//   cout << oct << i << endl;
//   cout.setf(ios::dec,ios::basefield);
//
//   return 0;
// }

// // -----presicion-----
// #include <iostream>
//
// using namespace std;
//
// int main() {
//   double arr[] = {1.123456789123,2.12345,3.1};
//   cout << arr[0] << " $\n";
//   cout.fill('_');
//   cout.precision(15);
//   cout.setf(ios::showpoint);
//   for (int i = 0; i < 3; i += 1) {
//     cout << "Invoice no ";
//     cout << i << " is worth: ";
//     cout.width(20);
//     cout << right << arr[i] << " $\n";
//   }
//   return 0;
// }

// // -----fill-----
// #include <iostream>
//
// using namespace std;
//
// int main() {
//   long prices[] = {120,1640000,5200,190000123};
//   for (int i = 0; i < 4; i += 1) {
//     cout << "Invoice no ";
//     cout.width(2);
//     cout.fill('*'); // single quotes
//     cout  << i << " is worth: ";
//     cout.fill('_'); // single quotes
//     cout.width(10);
//     cout << prices[i] << " $\n";
//     cout << "Last symbol used: " << cout.fill() << "\n";
//     cout << "Last width used: " ;
//     cout.width(13);
//     cout << cout.width() << "\n";
//   }
//   return 0;
// }

// // -----list of invoices-----
// #include <iostream>
//
// using namespace std;
//
// int main() {
//   long prices[] = {120,1640000,5200,190000123};
//   for (int i = 0; i < 4; i += 1) {
//     cout << "Invoice no ";
//     cout.width(2);
//     cout  << i << " is worth: ";
//     cout.width(10);
//     cout << prices[i] << " $\n";
//   }
//   return 0;
// }

// // -----scientific notation-----
// #include <iostream>
//
// using namespace std;
//
// int main() {
//   float liczba = 59;
//   cout << liczba << endl;
//   cout.setf(ios::scientific);
//   cout << liczba << endl;
//   cout.setf(ios::fixed);
//   cout << liczba << endl; // prints `0x1.d8p+5`, not `59`
//   return 0;
// }

// // -----showpoint-----
// #include <iostream>
//
// using namespace std;
//
// int main() {
//   float liczba = 59;
//   cout << liczba << endl;
//   cout.setf(ios::showpoint);
//   cout << liczba << endl;
//   return 0;
// }

// // -----uppercase hex-----
// #include <iostream>
//
// using namespace std;
//
// int main() {
//   int liczba = 59;
//   cout.setf(ios::hex,ios::basefield);
//   cout.setf(ios::uppercase);
//   cout << liczba << endl;
//   return 0;
// }

// // -----showpos-----
// #include <iostream>
//
// using namespace std;
//
// int main() {
//   int liczba = 59;
//   cout.setf(ios::showpos);
//   cout << liczba << endl;
//   return 0;
// }

// // -----bases:  dec,hex,oct-----
// #include <iostream>
//
// using namespace std;
//
// int main() {
//   int liczba = 59;
//   cout << "dec: " << liczba << "\n";
//   cout.setf(ios::hex,ios::basefield);
//   cout << "hex: " << liczba << "\n";
//   cout.setf(ios::oct,ios::basefield);
//   cout << "oct: " << liczba << "\n";
//   cout.setf(ios::dec,ios::basefield);
//   cout << "dec: " << liczba << "\n";
//   return 0;
// }

// // -----new line-----
// #include <iostream>
//
// using namespace std;
//
// int main() {
//   float a = -3.14;
//   float b = -45.4003;
//   cout.setf(ios::internal);
//   cout.width(20);
//   cout << a << endl; // flushes the stream
//   cout.width(20);
//   cout << b << "\n"; // just adds new line, which isn't necesarily printed at same time
//   return 0;
// }

// // -----internal-----
// #include <iostream>
//
// using namespace std;
//
// int main() {
//   float a = -3.14;
//   float b = -45.4003;
//   cout.setf(ios::internal);
//   cout.width(20);
//   cout << a << endl;
//   cout.width(20);
//   cout << b << endl;
//   return 0;
// }

// // -----right-----
// #include <iostream>
//
// using namespace std;
//
// int main() {
//   float a = -3.14;
//   float b = -45.4003;
//   cout.setf(ios::right);
//   cout.width(10);
//   cout << a << endl;
//   cout.width(10);
//   cout << b << endl;
//   return 0;
// }

// // -----left-----
// #include <iostream>
//
// using namespace std;
//
// int main() {
//   float a = -3.14;
//   float b = -45.4003;
//   cout.setf(ios::left);
//   cout.width(10);
//   cout << a << endl;
//   cout.width(10);
//   cout << b << endl;
//   return 0;
// }

// // -----with namespace std-----
// #include <iostream>
//
// using namespace std;
//
// int main() {
//   cout << "Hi, my name is Michael" << endl;
//   return 0;
// }


// //-----without namespace std-----
// #include <iostream>
//
// int main() {
//   std::cout << "Hi, my name is Michael" << std::endl;
//   return 0;
// }
