#include <iostream>
using namespace std;

int main(){
    int numCase;
    cin >> numCase;
    for(int i = 0 ; i < numCase ; i++){
        int num, temp;
        long mulNum = 1;
        cin >> num;
        for(int j = 0; j < num ; j++){    
            cin >> temp;
            mulNum *= temp;
            if(mulNum>10) mulNum %= 10;
            mulNum %= 10;
        }
        cout << mulNum << endl;
    }
    return 0;
}

/*#include <iostream> 
using namespace std;
 
void mulFinalNum(){
    int num, temp, ans = 1;
    cin >> num;
    while(num--){
        cin >> temp;
        ans *= temp%10;
        ans %= 10;
    }
    cout << ans << "\n";
}

int main(void)
{
    int numTestCases;
    cin >> numTestCases;
    while(numTestCases--) mulFinalNum();
}*/