#include <iostream>

using namespace std;

void pause() {
  cout << endl << "Press any key to continue...";
  cin.get();
}

int main() {
  int a = 100;
  int* b = &a;
  cout << "The value of a is: " << a << endl;
  cout << "The value of b is: " << b << endl;
  cout << "The value of b is: " << *b << endl;
  cout << endl;

  a = 200;
  cout << "The value of a is: " << a << endl;
  cout << "The value of b is: " << *b << endl;

  pause();
  return EXIT_SUCCESS;
}
