// -----personal details-----
// echo -e "Mister\nPotatohead\n1\n4155551212 \nmister@potato.head\n123 Spud St\nPotatown, PS 12345\n12\n445566\n" | bin/compile_run src/0010-cin.cpp
#include <iostream>

using namespace std;

int main() {
  string name,surname,tel,email,address1,address2;
  int age,salary;
  bool is_potato; // 0 - not potato, 1 - potato

  cout << "name:  ";
  cin >> name;
  cout << "surname:  ";
  cin >> surname;
  do {
    cin.clear();
    cout << "is_potato:  ";
    cin >> is_potato;
  } while(cin.fail());
  cout << "tel:  ";
  cin >> tel;
  cout << "email:  ";
  cin >> email;
  cout << "address1:  ";
  cin.ignore(); // used wen piped from stdout of prev. process
  getline(cin,address1);
  cout << "address2:  ";
  getline(cin,address2);
  cout << "age:  ";
  cin >> age;
  cout << "salary:  ";
  cin >> salary;

  cout << "\n\n";

  cout << "Provided details:\n";
  cout << "Full name:  " << name << " "<< surname << "\n";
  cout << "is_potato (0-false,1-true):  " << is_potato << "\n";
  cout << "tel:  " << tel << "\n";
  cout << "email:  " << email << "\n";
  cout << "address1:  " << address1 << "\n";
  cout << "address2:  " << address2 << "\n";
  cout << "age:  " << age << "\n";
  cout << "salary:  " << salary << "\n";

  return 0;
}

// // -----simple calculator-----
// #include <iostream>
//
// using namespace std;
//
// int main() {
//
//   int a;
//   int b;
//
//   cout << "Please give the first number:  ";
//   cin >> a;
//   cout << "Please give the second number:  ";
//   cin >> b;
//   cout << "\n";
//   cout << "\na + b: " << a + b;
//   cout << "\na - b: " << a - b;
//   cout << "\na * b: " << a * b;
//   cout << "\na / b: " << (float)a / b << endl;
//
//   return 0;
// }


// // -----get & print number-----
// #include <iostream>
//
// using namespace std;
//
// int main() {
//
//   int a;
//
//   cout << "Please give a number:" << endl;
//   cin >> a;
//   cout << a << endl;
//
//   return 0;
// }
