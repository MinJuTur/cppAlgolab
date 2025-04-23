//
// 집합 연산
//
// C배열: 각 집합의 데이터를 1부터 100까지 저장하는 배열에 몇 번 나왔는지 세기
// 교집합: 2이상 나온 수 저장 + 세기
// 합집합: 1이상 나온 수 저장 + 세기
// C배열 두 번 돌면서 count 세기 + 출력하기
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int countArr[101] = {0}; //0~100까지

    int n1, n2, data;
    //집합A
    cin >> n1;
    for (int j = 0; j < n1; j++) {
      cin >> data;
      countArr[data]++;
    }
    //집합B
    cin >> n2;
    for (int j = 0; j < n2; j++) {
      cin >> data;
      countArr[data]++;
    }

    int intersection_Cnt = 0; //교집합 원소 개수
    int sum_Cnt = 0; //합집합 원소 개수
    for (int j = 1; j <= 100; j++) {
      if (countArr[j] >= 2) intersection_Cnt++;
      if (countArr[j] >= 1) sum_Cnt++;
    }

    // 교집합 출력
    cout << intersection_Cnt << " ";
    if (intersection_Cnt != 0) {
      for (int j = 1; j <= 100; j++) {
        if (countArr[j] >= 2) cout << j << " ";
      }
    }
    cout << endl;


    // 합집합 출력
    cout << sum_Cnt << " ";
    if (sum_Cnt != 0) {
      for (int j = 1; j <= 100; j++) {
        if (countArr[j] >= 1) cout << j << " ";
      }
    }
    cout << endl;
  }
}