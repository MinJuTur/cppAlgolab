//
// 2024년 어느 날짜의 요일 구하기
//
// 몇 번째 날인지, 요일 숫자로 출력
// 몇 번째 날인지: 각 달의 날의 개수를 배열에 저장
// 요일: 1월 1일이 월요일임을 이용. 1월 1일로부터 며칠이 지났는지 계산 -> 1(월요일)에 더해서 7로 나누기
// 32-1 = 31일 지남 -> 1+31=32 -> 32 % 7 = 4(목요일)

#include <iostream>
using namespace std;

int main() {
  int months[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int month, day;
    cin >> month >> day;

    int sumDays = 0;
    for (int j = 1; j < month; j++) { // 1월부터 (month-1)월까지 날 수 더하기
      sumDays += months[j];
    }
    sumDays += day;

    cout << sumDays << " " << sumDays % 7 << endl;
  }
}