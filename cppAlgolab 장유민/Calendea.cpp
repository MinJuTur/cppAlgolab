#include <iostream>
using namespace std;

int numOfDay(int year, int month){
    if(month == 2) {
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return 29;
        else return 28;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11) return 30;
    else return 31;
}

int weekDay(int year, int month){
    if(month<3) {
        month += 12;
        year -= 1;
    }
    int k = year % 100;
    int j = year / 100;
    int date = (1 + (13*(month+1)/5) + k + k/4 + j/4 +5*j) % 7;
    return (date+6) % 7;
}

void printCalendar(){
    int year, month;
    cin >> year >> month;
    int day = numOfDay(year, month);
    int date = weekDay(year, month);
    cout << year << " " << month << "\n";
    for(int i = 0; i < date ; i++) cout << 0 << " ";
    for(int i = 1; i <= day ; i++){ 
        cout << i << " ";
        if ((i-(7-date)) % 7 == 0) cout << "\n";
    }
    if((day+date)%7 != 0) {
        for(int i = 0 ; i < 7-((day+date)%7) ; i++) cout << 0 << " ";
        cout << "\n";
    }
}

int main(){
    int numTestCases;
    cin >> numTestCases;
    while(numTestCases--) printCalendar();
}