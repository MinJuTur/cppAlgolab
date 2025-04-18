#include <iostream>

using namespace std;

int main(){
    int numTestCases;
    cin >> numTestCases;
    for(int i = 0 ; i < numTestCases ; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if((a <= c && d <= b) || (c <= a && b <= d)){
            if(a <= c && d <= b) cout << d-c << " " << b-a << "\n";
            else cout << b-a << " " << d-c << "\n";
        }
        else if(!(b<c || d<a)){
            if(a <= c) cout << b-c << " " << d-a << "\n";
            else cout << d-a << " " << b-c << "\n";
        }
        else cout << 0 << " " << b-a+d-c << "\n";
    }
}