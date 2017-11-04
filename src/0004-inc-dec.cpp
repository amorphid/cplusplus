#include <iostream>

using namespace std;

int main () {
  int i = 0;

  cout << (i == 0)         << endl; // 0 == 0
  i++;                              // inc 1
  cout << (i == 1)         << endl; // 1 == 1
  cout << (i++ == 1)       << endl; // 1 == 1
  cout << (i == 2)         << endl; // 2 == 2
  cout << (++i == 3)       << endl; // 3 == 3
  cout << ((i = i+1) == 4) << endl; // 4 == 4
  i--;                              // dec 1
  cout << (i == 3)         << endl; // 19 == 19
  --i;                              // dec 1
  cout << (i == 2)         << endl; // 2 == 2
  cout << (i-- == 2)       << endl; // 2 == 2
  cout << (--i == 0)       << endl; // 0 == 0

  return 0;
}
