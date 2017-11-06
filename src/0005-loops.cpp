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

  //---HOMEWORK 1---//

  for (int l = 51 ; l < 200 ; l += 2) {
      cout << l << endl; // odds number from 51 to 199
  }

  //---HOMEWORK 2---//

  for (int m = 7 ; m <= 700 ; m += 7) {
      cout << m << endl; // multiples of 7 in range 7 to 700
  }

  return 0;

}
