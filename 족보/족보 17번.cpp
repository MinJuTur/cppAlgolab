#include <iostream>
using namespace std;

int main() {
  int x = 0, y = 1;

  if (++x < 1 && ++y < 2)
    cout << 1;
  else
    cout << 2;
  cout << x << y;
}