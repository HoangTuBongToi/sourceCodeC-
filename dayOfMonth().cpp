#include <iostream>

using namespace std;

int monthOfYear(int month, int year){
    if (12<month || month <= 0 || year < 1){
        return 0;
    }
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
        case 2: return 28+((year % 4 == 0 && year %100 != 0)||(year %  400 == 0));
        case 4: case 6: case 9: case 11: return 30;
    }
    return 0;
}

int main(){
    int month,year;
    cin >> month >> year;

    cout<<monthOfYear(month,year);


    return 0;
}
