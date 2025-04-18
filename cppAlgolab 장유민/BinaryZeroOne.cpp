#include <iostream>
#include <string>
using namespace std;


string int2bin(int num){
    string binary = "";
    while(num != 0){
        binary = binary + char((num % 2)+'0');
        num = num / 2;
    }
    return binary;
}

int main(){
    int numTestCases, num, zeroNum , oneNum;
    cin >> numTestCases;
    for(int i = 0 ; i < numTestCases ; i++){
        cin >> num;
        string binary = int2bin(num);
        zeroNum =0 , oneNum = 0;
        for (char j : binary) {
            if(j == '0') zeroNum += 1;
            else oneNum += 1;
        }
        cout << zeroNum << ' ' << oneNum << endl;
    }
}

/*#include <iostream>
#include <string>
using namespace std;

void binaryZeroOne(){
    int num, tmp, zero = 0, one = 0;
    cin >> num;
    while(num != 0){
        tmp = num % 2;
        num /= 2;
        if(tmp == 0) zero++;
        else one++;
    }
    cout << zero << " " << one << "\n";
}

int main(){
    int numTestCases;
    cin >> numTestCases;
    while(numTestCases--) binaryZeroOne();
}*/
