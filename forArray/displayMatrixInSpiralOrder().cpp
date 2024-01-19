#include <iostream>

using namespace std;
#define MAXSIZE 100

void displayMatrixInSpiralOrder(int matrix[][MAXSIZE], int bottom, int right);

int main(){
    int a[][MAXSIZE]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
    };

    displayMatrixInSpiralOrder(a,3,3);

    return 0;
}

void displayMatrixInSpiralOrder(int matrix[][MAXSIZE], int maxBottom, int maxRight){
    int left=0, top=0;
    int bottom=--maxBottom;
    int right=--maxRight;

    while (left <= right && top <= bottom){
        for (int i = left; i <= right; i++){
            cout << matrix[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++){
            cout << matrix[i][right] << " ";
        }
        right--;
        for (int i = right; i >= left; i--){
            cout << matrix[bottom][i] << " ";
        }
        bottom--;
        for (int i = bottom; i >= top; i--){
            cout << matrix[i][left] << " ";
        }
        left++;
    }
}
