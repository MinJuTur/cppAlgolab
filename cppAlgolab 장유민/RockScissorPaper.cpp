#include <iostream>
using namespace std;

int main(){
    int numCase;
    cin >> numCase;
    for(int i = 0 ; i < numCase ; i++){
        int num, temp;
        cin >> num;
        int rock=0 , scissor=0, paper=0;
        for(int j = 0; j < num ; j++){    
            cin >> temp;
            if(temp == 1) rock += 1;
            else if(temp == 2) scissor += 1;
            else paper += 1;
            }
            if (rock != 0 && scissor != 0 && paper != 0) cout << 0 << endl;
            else if (rock == 0 && scissor == 0 && paper != 0) cout << 0 << endl;
            else if (rock != 0 && scissor == 0 && paper == 0) cout << 0 << endl;
            else if (rock == 0 && scissor != 0 && paper == 0) cout << 0 << endl;
            else if (rock == 0 && scissor != 0 && paper != 0){
                if(scissor > paper) cout << scissor << endl;
                else cout << paper << endl;
            }
            else if (rock != 0 && scissor == 0 && paper != 0){
                if(rock > paper) cout << rock << endl;
                else cout << paper << endl;
            }
            else if (rock != 0 && scissor != 0 && paper == 0) {
                if(scissor > rock) cout << scissor << endl;
                else cout << rock << endl;
        }
    }
    return 0;
}

/*#include <iostream>
using namespace std;

void rockScissorPaper(){
    int num, tmp, rock = 0, scissor = 0, paper = 0;
    cin >> num;
    for(int i = 0; i < num ; i++){
        cin >> tmp;
        if(tmp == 1) rock++;
        else if(tmp == 2) scissor++;
        else paper++;
       }
    if(!((rock == 0)^(scissor==0)^(paper==0))) cout << 0 << "\n";
    else {
        if (paper == 0) cout << (rock > scissor ? rock : scissor) << "\n";
        else if (scissor == 0) cout << (rock > paper ? rock : paper) << "\n";
        else cout << (scissor > paper ? scissor : paper) << "\n";
    } 
}

int main(){
    int numTestCases;
    cin >> numTestCases;
    while(numTestCases--) rockScissorPaper();
}*/