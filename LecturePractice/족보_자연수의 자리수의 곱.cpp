//
// 자연수의 자리수의 곱
//
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;

    long result = 1;
    int count_0 = 0;

    while (n > 0) {
      if (n % 10 == 0) count_0++;
      else result *= n % 10;
      n /= 10;
    }
    cout << result << " " << count_0 << endl;
  }
}