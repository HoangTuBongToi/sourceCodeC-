#include <iostream>

using namespace std;

char reverseLowcaseUpcase(char &character){

    if ('a' <= character && character <= 'z'){
        return character-32;
    }else if ('A' <= character && character <= 'A'){
        return character+32;
    }
    return false;
}

int main(){
    char a;
    cin >> a;

    cout<<reverseLowcaseUpcase(a);
    return 0;
}
