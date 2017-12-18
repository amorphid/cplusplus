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
  int left = 45;
  int right = 45;
  while (left > 10) {
    for (int i = 0; i < 80; i += 1) {
      setBackgroundColor(0);

      if (i >= left && i <= right) {
        setForegroundColor(2);
        cout << "*";
        resetForegroundColor();
      }
      else {
        setForegroundColor(0);
        cout << " ";
        resetForegroundColor();
      }
      resetBackgroundColor();
    }
    left -= 1;
    right += 1;
    cout << endl;
  }
  left = 42;
  right = 46;
  for (int i = 0; i < 5; i += 1) {
    for (int i = 0; i < 80; i += 1) {
      setBackgroundColor(0);

      if (i >= left && i <= right) {
        setForegroundColor(3);
        cout << "*";
        resetForegroundColor();
      }
      else {
        setForegroundColor(0);
        cout << " ";
        resetForegroundColor();
      }
      resetBackgroundColor();
    }
    cout << endl;
  }
  return 0;
}
