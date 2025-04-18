#include <iostream> 
using namespace std;
 
void threeSort(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a>b){
        if(b>c) cout << c << " " << b << " " << a << "\n";
        else{
            if(a>c) cout << b << " " << c << " " << a << "\n";
            else cout << b << " " << a << " " << c << "\n";
        }
    }
    else{
        if(c>b) cout << a << " " << b << " " << c << "\n";
        else{
            if(a>c) cout << c << " " << a << " " << b << "\n";
            else cout << a << " " << c << " " << b << "\n";
        }
    }
}

int main(void)
{
    int numTestCases;
    cin >> numTestCases;
    while(numTestCases--) threeSort();
}