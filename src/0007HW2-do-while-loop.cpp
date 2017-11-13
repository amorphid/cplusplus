#include <iostream>

using namespace std;

int main() {
  cout << "-----fib 1,000,000-----" << endl;

  int i = 0;
  int j = 1;
  int sum;

  do {
    cout << i << " + " << j << " is ";
    sum = i + j;
    cout << sum << endl;
    i = j;
    j = sum;
  } while (sum < 1000000); // is requiremet last before or first after 1_000_000?
  // if the condition is true, e.g. for  999 999 the code do{} is executed

  
  return 0;
}
