#include <iostream>

using namespace std;

int main () {
  cout << "-----Printing odd numbers in range 50 to 200-----" << endl;

  for (int l = 51 ; l < 200 ; l += 2) {
      cout << l << " is odd" << endl; // odds number from 51 to 199
  }

  return 0;

}
