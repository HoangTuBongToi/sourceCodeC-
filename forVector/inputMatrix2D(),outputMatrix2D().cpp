#include <iostream>
#include <vector>
using namespace std;

void inputMatrix2D(vector<vector<int>> &matrix, int maxRows, int maxCols);
void outputMatrix2D(vector<vector<int>> &matrix, int maxRows, int maxCols);

int main(){
    vector<vector<int>> matrix2D;

    inputMatrix2D(matrix2D,2,3);
    outputMatrix2D(matrix2D,2,3);

    return 0;
}

void inputMatrix2D(vector<vector<int>> &matrix, int maxRows, int maxCols){
    for (int iRows = 0; iRows < maxRows; iRows++){
        vector<int> row;
        for (int iCols = 0; iCols < maxCols; iCols++){
            int value;
            cin >> value;
            row.push_back(value);
        }
        matrix.push_back(row);
    }
}
void outputMatrix2D(vector<vector<int>> &matrix, int maxRows, int maxCols){
    for (int iRows = 0; iRows < maxRows; iRows++){

        for (int iCols = 0; iCols < maxCols; iCols++){
            cout << matrix[iRows][iCols] << " ";
        }
        cout << "\n";

    }
}
