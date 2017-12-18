// -----crazy colors-----
#include <iostream>
#include <iomanip>

using namespace std;

int resetBackgroundColor() {
  cout << "\033[0m";
  return 0;
}

int resetForegroundColor() {
  cout << "\033[0m";
  return 0;
}

int setBackgroundColor(int color) {
  cout << "\033[48;5;" << color << "m";
  return 0;
}

int setForegroundColor(int color) {
  cout << "\033[38;5;" << color << "m";
  return 0;
}

int main() {
  for (float i = 1; i < 15; i += 1) {
    setForegroundColor(i);
    setBackgroundColor(0);
    cout << setw(4)
         << showpos
         << setfill('-')
         << i
         << setfill(' ')
         << " /2 ==> "
         << setw(8)
         << setfill('`')
         << i/2
         << " : ";
    for (int j = 0; j < i; j += 1) {
      cout << "SF,";
    }
    resetForegroundColor();
    resetBackgroundColor();
    cout << endl;
  }

  return 0;
}
