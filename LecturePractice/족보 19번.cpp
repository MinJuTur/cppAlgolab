#include <iostream>
using namespace std;

int f(int a = 1, int b = 2);

int main() {
  int x = f(4);
  int y = f(5,6);
  cout << x+y << endl;
}

int f (int a, int b) {
  static int s = 3;
  s += (a+b);
  return s;
}
