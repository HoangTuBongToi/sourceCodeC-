#include <iostream>

using namespace std;

float perimeterOfRetangle(float width, float height){
    return (width + height) * 2;
}

int main(){

    cout << perimeterOfRetangle(3,2);

    return 0;
}
