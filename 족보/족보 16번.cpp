#include <iostream>
using namespace std;

int main() {
  const int N = 20;
  int sum = 0;
  int a[N+1] = {0};
  int i = 2;

  while (i * i <= N) {
    if (a[i] == 0)
      for (int j = i * i; j <= N; j += i)
        a[j] = 1;
    i++;
  }

  for (i = 2; i <= N; i++)
    if (a[i] == 0)
      sum += i;

  cout << sum;
}
