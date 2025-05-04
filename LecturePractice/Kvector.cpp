#include <iostream>
using namespace std;

class Kvector {
    int *m;
    int len;
  public:
    Kvector(int sz = 0, int value = 0);
    Kvector(Kvector& v);
    ~Kvector() {
      delete[] m;
    }
    void print() {
       for (int i = 0; i < len; i++) cout << m[i] << " ";
       cout << endl;
    }
    void clear() {
      delete[] m;
      m = nullptr;
      len = 0;
    }
    int size() { return len; }
};
int main() {
  Kvector v1(3); v1.print();
  Kvector v2(2,9); v2.print();
  Kvector v3(v2); v3.print();
  v2.clear();
  v2.print();
  v3.print();
  return 0;
}
Kvector::Kvector(int sz, int value) {
  if (sz == 0) {
    m = nullptr;
    return;
  }
  len = sz;
  m = new int[len];
  for (int i = 0; i < len; i++) {
    m[i] = value;
  }
}

Kvector::Kvector(Kvector& v) {
  len = v.size();
  m = new int[len];
  for (int i = 0; i < len; i++) {
    m[i] = v.m[i];
  }
}

