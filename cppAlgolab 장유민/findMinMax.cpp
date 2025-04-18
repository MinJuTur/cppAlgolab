#include <iostream> 
using namespace std;
 
void findMinMax(){
    int n;
    cin >> n;
    int min, max, temp;
    cin >> temp;
    min = max = temp;
    n--;
    while(n--){
        cin >> temp;
        if (min > temp) min = temp;
        if (max < temp) max = temp;
    }
    cout << max << " " << min << "\n";
}

int main(void)
{
    int numTestCases;
    cin >> numTestCases;
    while(numTestCases--) findMinMax();
}