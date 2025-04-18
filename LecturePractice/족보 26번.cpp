#include <iostream>
using namespace std;

int **varray2D(int r, int *len) {
  int *mem, **array;
  int total = 0;
  for (int i = 0; i < r; i++) total += len[i];
  mem = new int[total];
  array = new int*[r];

  for (int i = 0; i < r; i++) {
    array[i] = mem;
    mem += len[i];
  }
  return array;
}

int main() {
	int *lengths;
    int rows, i, j;

    cin >> rows;
    lengths = new int[rows];

    for (i = 0; i < rows; i++) cin >> lengths[i];
    int **a = varray2D(rows, lengths);
}