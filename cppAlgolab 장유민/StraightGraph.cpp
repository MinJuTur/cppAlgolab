#include <iostream>
#include <string>

using namespace std;

string repeat(char ch, int cnt){
    return string(cnt, ch);
}

int main(){
    int numCase;
    cin >> numCase;
    for(int i = 0; i <numCase ; i++){
        int size, center;
        cin >> size;
        center = size/2;
        for(int row = 0; row < size ; row++){
            if (row == center) cout << repeat('+', center) << 'O' << repeat('+', center);
            else{
                for(int col = 0; col < size ; col++){
                    if(col == center) cout << 'I';
                    else if(row <= center && col == size-1-row) cout << '*';
                    else if(row > center && col == size-1-row) cout << '*';
                    else cout << '.';
                }
            }
            cout << endl;
        }       
    }
    return 0;
}

/*#include <iostream> 
using namespace std;
 
void printLinearGraph(){
    int k;
    cin >> k;
    int temp = k*k;
    for(int i = 1 ; i <= temp ; i++){
        if(i == temp /2+1) cout << "O";
        else if((k/2)*k+1<=i && i<=(k/2+1)*k) cout << "+";
        else if(i%k == k/2+1) cout << "I";
        else if((i-1) % (k-1) == 0 && i != 1 && i != temp) cout << "*";
        else cout << ".";
        if(i%k == 0) cout << "\n";
    }
}

int main(void)
{
    int numTestCases;
    cin >> numTestCases;
    while(numTestCases--) printLinearGraph();
}*/