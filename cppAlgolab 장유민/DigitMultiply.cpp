#include <iostream>
#include <string>
using namespace std;

int main(){
    int numTestCases, temp;
    unsigned int num;
    cin >> numTestCases;
    for(int i = 0 ; i < numTestCases ; i++){
        cin >> num;
        while(num >= 10){
            temp = 1;
            for(char i : to_string(num)) if(i != '0') temp *= (i-'0');
            num = temp;
        }
    cout << num << endl;
    }
}


/*#include <iostream>
using namespace std;

void mulAllNumber(){
    unsigned int num;
    int temp, ans;
    cin >> num;
    if (num < 10) cout << num << "\n";
    else {
        while(num>=10){
            ans = 1;
            while(num>0){
                temp = num%10;
                num = num/10;
                if (temp == 0) continue; 
                ans *= temp;
            }
            num = ans;
        }
        cout<< num << "\n";    
    }
}

int main(){
    int numTestCases;
    cin >> numTestCases;
    while(numTestCases--) mulAllNumber();
}*/