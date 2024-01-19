#include <iostream>
#include <vector>

using namespace std;

void sortAscending(vector<int> &Array){
    for (int element = 0; element < Array.size() -1; element++){
        for (int value = element+1; value < Array.size(); value++){
            if(Array[value] < Array[element]){
                swap(Array[element], Array[value]);
            }
        }
    }
}

void sortDescending(vector<int> &Array){
    for (int element = 0; element < Array.size() -1; element++){
        for (int value = element+1; value < Array.size(); value++){
            if(Array[value] > Array[element]){
                swap(Array[element], Array[value]);
            }
        }
    }
}
int main(){
    vector<int> Array={1,9,2,8,3,7,4,6,5,0};

    sortAscending(Array);
    sortDescending(Array);

    cout << "\nArray: " << endl;
    for(auto number: Array){
        cout << number << " ";
    }
    return 0;
}
