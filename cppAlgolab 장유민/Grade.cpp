#include <iostream>
using namespace std;

int main(){
    int numCase;
    cin >> numCase;
    for(int i = 0; i < numCase ; i++){
        int num;
        cin >> num;
        int A=0, B=0, C=0, D=0, F=0;
        int grade[num];
        for(int j = 0; j < num ; j++){
            cin >> grade[j];
        }
        for(int j = 0; j < num ; j++){
            switch (grade[j]/10)
            {
            case 10:
            case 9:
                A += 1;
                break;
            case 8:
                B += 1;
                break;
            case 7:
                C += 1;
                break;
            case 6:
                D += 1;
                break;
            default:
                F += 1;
                break;
            }
        }
        cout << A << " " << B << " " << C << " " << D << " " << F << endl;
    }
    return 0;
}

/*#include <iostream> 
using namespace std;
 
void printGrade(){
    int num, numA, numB, numC, numD, numF, grade;
    numA = numB = numC = numD = numF = 0;
    cin >> num;
    while(num--){
        cin >> grade;
        int ch = grade / 10;
        switch (ch) 
        {
        case 10:
        case 9:
            numA++;
            break;
        case 8 : 
            numB++;
            break;
        case 7: 
            numC++;
            break;
        case 6 :
            numD++;
            break;
        default:
            numF++;
            break;
        }
    }
    cout << numA << " " << numB<< " " << numC << " " << numD << " " << numF << "\n";
}

int main(void)
{
    int numTestCases;
    cin >> numTestCases;
    while(numTestCases--) printGrade();
}*/