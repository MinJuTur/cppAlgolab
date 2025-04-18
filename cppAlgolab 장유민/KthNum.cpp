#include <iostream>
using namespace std;

void calKthNum(){
    int k;
        cin >> k;
        int digit=1, cnt=9, num=1;
        while (k > digit * cnt) {
            k -= digit * cnt;
            digit++;
            cnt *= 10;
            num *= 10;
        } // k에서 자릿수 만큼의 값을 빼는 코드 
        num += (k - 1) / digit; //k번째 숫자 자리에 해당하는 숫자 구하기
        string s = to_string(num);
        cout << s[(k - 1) % digit] << '\n'; //해당하는 자릿수의 숫자 출력
}

int main(){
    int numTestCases;
    cin >> numTestCases;
    while(numTestCases--) calKthNum();
}