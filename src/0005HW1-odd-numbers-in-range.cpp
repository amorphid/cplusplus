#include <iostream>

using namespace std;

int main () {
  cout << "-----Printing odd numbers in range 50 to 200-----" << endl;

  for (int i = 51 ; i < 200 ; i += 2) {
      cout << i << " is odd" << endl; // odds number from 51 to 199
  }

  return 0;

}
