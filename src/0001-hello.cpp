#include <iostream>

using namespace std;

int main() {
  // the '<<' for 'hello world' looks funny
  // as mentioned, more on that later
  cout << "Hello world!" << endl;
  return 0;
}

// // I tried changing the return from int to void,
// // but the compiler didn't like that
// void main() {
//   cout << "Hello world!" << endl;
// }

/*
 
Generally it's a standard of many compilators to use int main() <- this is a very special function and we just should stick to it :-)
Only few of them allow to use void main (..probably Visual).

*/
