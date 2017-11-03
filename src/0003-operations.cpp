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
  bool is_equal_wrong = result == 0.3;

  //###### That's a bit complicated, because of the floating point numbers idea
  // I recommend this: https://randomascii.wordpress.com/2012/02/25/comparing-floating-point-numbers-2012-edition/
  // look at a table under "What do you mean ‘correct’?"

  // but you can deal with it:

  bool is_equal = result == (float) 0.3;
  bool is_equal2 = result == 0.3f;

  // I'm not sure what the value of `result` is.
  // The console shows `0.3`, and not `0.30000000000000004` like other languages.
  // And it's not equal to 0.3.
  // I asked StackOverflow: https://stackoverflow.com/q/47085033/734750

  cout << "\n\nResult: " << result << endl;
  cout << "bool is_equal_wrong = result == 0.3 is " << is_equal_wrong << endl;
  cout << "bool is_equal = result == (float) 0.3 is " << is_equal << endl;
  cout << "bool is_equal2 = result == 0.3f is " << is_equal2 << endl;

  return 0;
}
