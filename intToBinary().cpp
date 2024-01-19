#include <iostream>

using namespace std;

string intToBinary(long long number){
    if (number < 0){
        return "INVALID";
    }
    string binary = "";
    while (number != 0){
        if(number % 2 == 0){
            binary='0'+binary;
        }else{
            binary='1'+binary;
        }
        number/=2;
    }

    return binary;
}

int main(){
    long long a;
    cin >> a;

    cout<<intToBinary(a);
    return 0;
}
