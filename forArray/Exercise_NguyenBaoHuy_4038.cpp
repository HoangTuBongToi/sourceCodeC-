#include <iostream>
#define pi 3.14
#define MAXSIZE 100

using namespace std;

void createArray(int Array[], int &trueSizeOfArray);
int maxOfArray(int Array[], int trueSizeOfArray);
void input(float &value);
void display(float value);
bool isPrime(int value);
void displayPrime(int Array[], int trueSizeOfArray);
void iSort(int Array[], int trueSizeOfArray);
void iInsert(int Array[], int &trueSizeOfArray, int value, int index);
void showArray (int Array[], int trueSizeOfArray);
float circumferenceOfCircle(float radius);
float areaOfCircle(float radius);
int reverseNumber(int number);
void ascendingOrder(int number1, int number2, int number3, int number4);
int sumPrime(int n);
int monthOfYear(int month, int year);
void pause();

int main(){
    float b=0;
    int sizeOfArray;
    int a[MAXSIZE];

    //input array
    createArray(a,sizeOfArray);

    pause();

    //Questions 1: get the larest value in a array
    cout << "Max of array: " << maxOfArray(a,sizeOfArray);

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
    displayPrime(a,sizeOfArray);

    pause();

    //Question 4: sort elements increasing in an array
    cout << "Sort ascending array: ";
    iSort(a,sizeOfArray);
    showArray(a,sizeOfArray);

    pause();

    //Question 5: insert an element to a sorted array
    cout << "Insert element: ";
    iInsert(a,sizeOfArray,99,1);

    //Check array
    showArray(a,sizeOfArray);

    pause();

    //Question 6.1: caculate circumference of circle
    cout << "Circumference of circle: " << circumferenceOfCircle(1);

    pause();

    //Question 6.2: caculate area of circle
    cout << "Area of circle: " << areaOfCircle(1);

    pause();

    //Question 7: output reverse number
    cout << "Reverse number: " << reverseNumber(1234);

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

void createArray(int Array[], int &trueSizeOfArray){
    cout << "Input number of elements: ";
    cin >> trueSizeOfArray;
    cout << "Input elements: ";
    for (int i = 0; i < trueSizeOfArray; i++){
        cin >> Array[i];
    }
    cin.ignore();
    cout << "Create array done !";
}

int maxOfArray(int Array[], int trueSizeOfArray){
    int Max=Array[0];

    for (int i = 0; i < trueSizeOfArray; i++){
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

void displayPrime(int Array[], int trueSizeOfArray){
    for (int i = Array[0] ; i < Array[trueSizeOfArray]; i++){
        if (isPrime(i)){
            cout << i << " ";
        }
    }
}

void iSort(int Array[], int trueSizeOfArray){
    for (int i = 0; i < trueSizeOfArray -1; i++){
        for (int j = i+1; j < trueSizeOfArray; j++){
            if(Array[j] < Array[i]){
                swap(Array[j], Array[i]);
            }
        }
    }
}

void iInsert(int Array[], int &trueSizeOfArray, int value, int index){
     for (int i = 0; i < trueSizeOfArray -1; i++){
        for (int j = i+1; j < trueSizeOfArray; j++){
            if(Array[j] < Array[i]){
                swap(Array[j], Array[i]);
            }
        }
    }

    for (int i= trueSizeOfArray; i > index; i--){
        Array[i]=Array[i-1];
    }

    Array[index]=value;

    trueSizeOfArray++;
}

void showArray (int Array[], int trueSizeOfArray){
    for (int i = 0; i < trueSizeOfArray; i++){
        cout << Array[i] << " ";
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
    int Array[] = {number1,number2,number3,number4};

    for(int i = 0; i < 3; i++){
        for (int j = i + 1; j < 4;j++){
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
