#include <iostream>

using namespace std;

int main() {

  int a = 3, b = 4, t;

  cout << "Before swapping: a = " << a << " b = " << b << endl;
  t = a;
  a = b;
  b = t;
  cout << "After swapping: a = " << a << " b = " << b;

  return 0;
}