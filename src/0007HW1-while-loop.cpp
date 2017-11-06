#include <iostream>

using namespace std;

int main() {
  cout << "-----printing odd numbers in range -300 to -200-----" << endl;

  int i = -299;
  int limit = -201;

  while (i < limit) { // prints in line
    cout << i << ", ";
    i += 2;
  }
  cout << i << endl; // prints last, then ends line

  return 0;
}
