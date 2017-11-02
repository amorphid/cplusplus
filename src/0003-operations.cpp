#include <iostream>

using namespace std;

int main () {
  int   a = 5;
  int   b = 3;
  float c = 5.0;

  cout << a + b << endl;
  cout << a - b << endl;
  cout << a * b << endl;
  cout << a / b << endl;
  cout << (float) a / b << endl;
  cout << (float) a << endl;
  cout << c << endl;

  float d = 0.1;
  float e = 0.2;
  float result = d + e;
  bool is_equal = result == 0.3

  // I'm not sure what the value of `result` is.
  // The console shows `0.3`, and not `0.30000000000000004` like other languages.
  // And it's not equal to 0.3.
  // I asked StackOverflow: https://stackoverflow.com/q/47085033/734750
  cout << result << endl;
  cout << is_equal << endl;

  return 0;
}
