#include <iostream>
#include <vector>
using namespace std;

void Add(int element, vector<int> &Array){
    Array.push_back(element);
}

void Insert(int element, int &index, vector<int> &Array){
    while(index < 0 || index > Array.size()){
        cout << "Index fail ! \nEnter new Index: ";
        cin >> index;
    }

    Array.push_back(0);
    for (int i= Array.size(); i > index; i--){
        Array[i]=Array[i-1];
    }

    Array[index]=element;
}

void Remove(int index, vector<int> &Array){
    while(index < 0 || index > Array.size()){
        cout << "Index fail ! \nEnter new Index: ";
        cin >> index;
    }

    for (int i = index; i < Array.size(); i++){
        Array[i]=Array[i+1];
    }

    Array.pop_back();
}
int main(){
    vector<int> Array={0,1,2,3,4,5};
    int element, index;
    cin >> element >> index;

//    Add(element,Array);
//    Insert(element,index,Array);
//    Remove(index,Array);

    //check array
    cout << "\nArray: " << endl;
    for(auto number: Array){
        cout << number << " ";
    }

    return 0;
}
