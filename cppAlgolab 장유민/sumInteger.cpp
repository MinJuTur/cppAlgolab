#include <iostream>
using namespace std;

int main(){
	int numTestCases;
	cin >> numTestCases;
	
	for(int i = 0 ; i < numTestCases ; i++){
		int numData, data;
		int sum =0;
		cin >> numData;
		for(int j = 0 ; j < numData ; j++){
			cin >> data;
			sum += data;
		}
		cout << sum << endl;
	}
	return 0;
}



/*#include <iostream> 
using namespace std;
 
void sumInteger(){
    int n;
    cin >> n;
    int totalSum = 0, temp;
    while(n--){
        cin >> temp;
        totalSum += temp;
    }
    cout << totalSum << "\n";
}

int main(void)
{
    int numTestCases;
    cin >> numTestCases;
    while(numTestCases--) sumInteger();
}*/