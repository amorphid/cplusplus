#include <iostream>

using namespace std;

int main() {
  //---always runs---//

  // while (true) {
  //   cout << "looping forever!" << endl;
  // }

  //---while loop never runs---//

  cout << "There should be nothing..." << endl;

  while (0>1) {
    cout << "if you can see this line, it's a bug!" << endl;
  }

  cout << "...between these lines!" << endl;

  //---while loop runs if less than 20---//

  int i = 0;
  cout << "-----printing 0 to 20-----" << endl;

  while (i < 20) {
    cout << i << ", "; // evens from 0 to 18
    i += 1;
  }
  cout << i << endl; // 20

  //---do-while loop runs from 0 to 10---//

  int j = 0;
  cout << "-----printing 0 to 10-----" << endl;

  cout << j;

  do {
    j += 1;
    cout << ", " << j;
  } while (j < 10);

  cout << endl;

  return 0;
}
