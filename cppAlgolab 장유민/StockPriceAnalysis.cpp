#include <iostream>

using namespace std;

int main(){
    int numTestCases;
    cin >> numTestCases;
    for(int i = 0 ; i < numTestCases ; i++){
        int prev, cur, next, num, cnt = 0;
        cin >> num >> prev >> cur;
        for(int i = 2 ; i < num ; i++){
            if(prev > cur){
                prev = cur;
                cin >> cur;
            }
            else if(prev == cur) cin >> cur;
            else{
                cin >> next;
                if(cur < next) {
                    prev = cur;
                    cur = next;
                }
                else if(cur == next);
                else{
                    cnt++;
                    prev = cur;
                    cur = next;
                } 
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}


/*#include <iostream>
using namespace std;

void calMidHighPrice(){
    int num;
    int prev, cur ,cnt = 0;
    bool isPeak = false;
    cin >> num >> prev;
    for(int i = 1; i < num ; i++){
        cin >> cur;
        if(prev > cur && isPeak) {
            isPeak = false;
            cnt++;
        }
        else if(prev < cur) isPeak = true;
        prev = cur;
    }
    cout << cnt << "\n";
}

int main(){
    int numTestCases;
    cin >> numTestCases;
    while(numTestCases--) calMidHighPrice();
}*/