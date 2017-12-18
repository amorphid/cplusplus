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

int printCharOrSnow(int color,string i) {
  if (rand() % 20 == 0) {
    setForegroundColor(7);
    cout << "*";
    resetForegroundColor();
  }
  else {
    setForegroundColor(color);
    cout << i;
    resetForegroundColor();
  }
  return 0;
}

int main() {
  int left = 45;
  int right = 45;
  while (left > 10) {
    for (int i = 0; i < 80; i += 1) {
      setBackgroundColor(0);
      if (i >= left && i <= right) {
        printCharOrSnow(2,"*");
      }
      else {
        printCharOrSnow(0," ");
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
        printCharOrSnow(3,"*");
      }
      else {
        printCharOrSnow(0," ");
      }
      resetBackgroundColor();
    }
    cout << endl;
  }
  return 0;
}
