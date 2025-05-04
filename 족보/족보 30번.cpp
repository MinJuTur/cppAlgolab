#include <iostream>
using namespace std;

int main() {
  int a[5] = {0, 2, 4, 6, 8};

  cout << &a[4] - &a[0];
}
