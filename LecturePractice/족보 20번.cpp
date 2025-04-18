#include <iostream>
using namespace std;

int main() {
  float f = 1234567890.12345678901234567890;
  double d = 1234567890.12345678901234567890;
  bool b = (f == d);
  cout << b << endl;
}