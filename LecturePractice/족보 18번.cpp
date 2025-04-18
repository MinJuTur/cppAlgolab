#include <iostream>
using namespace std;

unsigned f(unsigned x, int n) {
  unsigned mask = 1;
  mask = mask << n;
  return x & ~mask;
}

string toBinaryString(unsigned x) {
  string result = "";
  int count = 0;
  do {
    result = char('0' + (x % 2)) + result;
    x /= 2;
    count++;
    if (count % 4 == 0 && x > 0)
      result = " " + result;
  } while (x > 0);
  return result;
}

int main() {
  unsigned x = 2550;
  int n = 2;
  cout << "input: " << toBinaryString(x) << endl;
  unsigned changed = f(x, n);
  cout << "changed: " << toBinaryString(changed) << endl;
  return 0;
}
