#include <iostream>
#include <vector>

using namespace std;

void input(int sizeArray, vector<int> &mang){

    while(sizeArray-- != 0){
        int number;
        cin >>  number;
        mang.push_back(number);
    }
}

int printLargestNumber(vector<int> &mang){

    int LargestNumber=mang[0];
    for(auto element: mang){
        if(element > LargestNumber){
            LargestNumber=element;
        }
    }

    return LargestNumber ;
}
int main() {
    vector<int> a ;

    int n;
    cin >> n;

    input(n,a) ;
    cout<<printLargestNumber(a);
    return 0;
}
