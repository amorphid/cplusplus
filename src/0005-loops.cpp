#include <iostream>

using namespace std;

int main () {
  //---A basic for loop---//

  for (int i = 0 ; i < 10 ; i += 1) {
    cout << i << endl;
  }

  //---testing for variable scope---//

  for (int j = 0 ; j < 10 ; j += 1) {
    cout << j << endl;
  }

  // cout << j << endl; // undeclared variable

  //---testing for variable scope 2---//

  int k = 99;

  cout << k << endl; // 99

  for (int k = 0 ; k < 10 ; k += 1) {
    cout << k << endl; // 0 thru 9
  }

  cout << k << endl; // 99

  return 0;
}
