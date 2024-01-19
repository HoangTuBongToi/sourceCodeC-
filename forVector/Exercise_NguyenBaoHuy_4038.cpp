#include <iostream>
#include <vector>
#define pi 3.14

using namespace std;

int maxOfArray(vector<int> &Array);
void input(float &value);
void display(float value);
bool isPrime(int value);
void displayPrime(vector<int> &Array);
void iSort(vector<int> &Array);
void iInsert(vector<int> &Array, int value, int index);
void showArray (vector<int> &Array);
float circumferenceOfCircle(float radius);
float areaOfCircle(float radius);
int reverseNumber(int number);
void ascendingOrder(int number1, int number2, int number3, int number4);
int sumPrime(int n);
int monthOfYear(int month, int year);
void pause();

int main(){
    float b=0;
    vector<int> a = {6,3,8,4,77,43,5,5,0};

    //Questions 1: get the larest value in a array
    cout << "Max of array: " << maxOfArray(a);

    pause();


    //Question 2.1: get values from the keyboard
    cout << "Input number: ";
    input(b);

    pause();

    //Question 2.2: display values in to the screen
    cout << "Display number: ";
    display(b);

    pause();

    //Question 3: display all prime numbers in an array
    cout << "Display prime of array: ";
    displayPrime(a);

    pause();

    //Question 4: sort elements increasing in an array
    cout << "Sort ascending array: ";
    iSort(a);
    showArray(a);

    pause();

    //Question 5: insert an element to a sorted array
    cout << "Insert element: ";
    iInsert(a,b,1);

    //Check array
    showArray(a);

    pause();

    //Question 6.1: caculate circumference of circle
    cout << "Circumference of circle: " << circumferenceOfCircle(2);

    pause();

    //Question 6.2: caculate area of circle
    cout << "Area of circle: " << areaOfCircle(2);

    pause();

    //Question 7: output reverse number
    cout << "Reverse number: " << reverseNumber(567809);

    pause();

    //Question 8: output 4 number ascending order
    cout << "Display 4 number ascending order: ";
    ascendingOrder(3,6,3,7);

    pause();

    //Question 9: display sum prime smaller than n
    cout<< "Sum prime small than n: " << sumPrime(10);

    pause();

    //Question 10: display month of year and check it is leap year
    monthOfYear(2,2024);

    return 0;
}

int maxOfArray(vector<int> &Array){
    int Max=Array[0];

    for (int i = 0; i < Array.size(); i++){
        if (Array[i] > Max){
            Max= Array[i];
        }
    }

    return Max;
}

void input(float &value){
    cin >> value;
}

void display(float value){
    cout << value;
}

bool isPrime(int value) {
    if (value <= 1) {
        return false;
    }

    for (int i = 2; i * i <= value; i++) {
        if (value % i == 0) {
            return false;
        }
    }

    return true;
}

void displayPrime(vector<int> &Array){
    for (auto element: Array){
        if (isPrime(element)){
            cout << element << " ";
        }
    }
}

void iSort(vector<int> &Array){
    for (int i = 0; i < Array.size() -1; i++){
        for (int j = i+1; j < Array.size(); j++){
            if(Array[j] < Array[i]){
                swap(Array[j], Array[i]);
            }
        }
    }
}

void iInsert(vector<int> &Array, int value, int index){
     iSort(Array);

    Array.push_back(0);
    for (int i= Array.size(); i > index; i--){
        Array[i]=Array[i-1];
    }

    Array[index]=value;
}

void showArray (vector<int> &Array){
    for (auto element : Array){
        cout << element << " ";
    }
}

float circumferenceOfCircle(float radius){
    if (radius < 0){
        return 0;
    }

    return 2*radius*pi;
}

float areaOfCircle(float radius){
    if (radius < 0){
        return 0;
    }

    return pi*radius*radius;
}

int reverseNumber(int number){
    int newNumber=0;

    while (number != 0){
        int x = number % 10;
        newNumber = newNumber * 10 + x;
        number/=10;
    }

    return newNumber;
}

void ascendingOrder(int number1, int number2, int number3, int number4){
    vector<int> Array = {number1,number2,number3,number4};

    for(int i = 0; i < Array.size()-1; i++){
        for (int j = i+1; j < Array.size();j++){
            if (Array[j] < Array[i]){
                swap(Array[j],Array[i]);
            }
        }
    }

    for (auto element : Array){
        cout << element << " ";
    }

}

int sumPrime(int n){
    if (n < 0 || n > 50){
        return 0;
    }

    int sum=0;

    for (int i = 2; i < n; i++){
        if(isPrime(i)){
            sum += i;
        }
    }

    return sum;
}

int monthOfYear(int month, int year){
    if (12<month || month <= 0 || year < 1){
        return 0;
    }

    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: cout << 31; break;
        case 2: cout << 28+((year % 4 == 0 && year %100 != 0)||(year %  400 == 0)); break;
        case 4: case 6: case 9: case 11: cout << 30; break;
    }

    if ((year % 4 == 0 && year %100 != 0)||(year %  400 == 0)){
        cout << " Leap year";
    }else{
        cout << " Common year";
    }
    return 0;
}

void pause(){
    cout << "\n\nTo be continue !";
    getchar();
    system("cls");
}
