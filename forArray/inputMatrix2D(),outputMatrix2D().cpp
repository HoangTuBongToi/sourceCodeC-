#include <iostream>

using namespace std;

#define MAXSIZE 100

void inputMatrix2D(int matrix2D[][MAXSIZE], int rows, int cols){
    for (int iRows = 0; iRows < rows; iRows++){
        for (int iCols = 0; iCols < cols; iCols++){
            cin >> matrix2D[iRows][iCols];
        }
    }
}

void showMatrix2D(int matrix2D[][MAXSIZE], int rows, int cols){
    for (int iRows = 0; iRows < rows; iRows++){
        for (int iCols = 0; iCols < cols; iCols++){
            cout << matrix2D[iRows][iCols] << " ";
        }
        cout << "\n";
    }
}

int main(){
    int a[MAXSIZE][MAXSIZE];

    inputMatrix2D(a,3,3);
    showMatrix2D(a,3,3);

    return 0;
}
