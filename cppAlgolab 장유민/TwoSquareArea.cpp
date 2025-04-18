#include <iostream>

using namespace std;

int square1[4];
int square2[4];

int main(){
    int numTestCases;
    cin >> numTestCases;
    for(int i = 0 ; i < numTestCases ; i++){
        int w1, w2, h1, h2;
        for(int j = 0 ; j < 4 ; j++) cin >> square1[j];
        for(int j = 0 ; j < 4 ; j++) cin >> square2[j];
        w1 = square1[2] - square1[0];
        w2 = square2[2] - square2[0];
        h1 = square1[3] - square1[1];
        h2 = square2[3] - square2[1];
        if(!(square1[2] <= square2[0] || square2[2] <= square1[0] ||
            square1[3] <= square2[1] || square2[3] <= square1[1])){
            if((square1[0] <= square2[0] && square1[1] <= square2[1] 
            && square1[2] >= square2[2] && square1[3] >= square2[3])
            ||(square2[0] <= square1[0] && square2[1] <= square1[1] 
            && square2[2] >= square1[2] && square2[3] >= square1[3])){
                if(w1 < w2) cout << w2*h2 << " " << 2*(w2+h2) << "\n";
                else cout << w1*h1 << " " << 2*(w1+h1) << "\n";
            }
            else{
                int w3, h3;
                w3 = min(square1[2], square2[2]) - max(square1[0], square2[0]);
                h3 = min(square1[3], square2[3]) - max(square1[1], square2[1]);
                cout << (w1*h1)+(w2*h2) - (w3*h3)  << " " << 2*(w1+w2+h1+h2-w3-h3) << "\n";
            }
        }
        else cout << (w1*h1)+(w2*h2) << " " << 2*(w1+w2+h1+h2) << "\n";
    }
}