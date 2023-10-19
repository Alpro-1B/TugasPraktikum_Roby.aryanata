#include <iostream>

using namespace std;

int main() {
    int firstValue,secondValue;
    
    firstValue = 10;
    secondValue = 8;

//melakukan tambah dan kurang dua variable untuk menukar nilai variable tersebut
    firstValue = firstValue + secondValue; //10+8=18
    secondValue = firstValue - secondValue; //18-8=10
    firstValue = firstValue - secondValue; //18-10=8

cout << firstValue <<endl;
cout << secondValue <<endl;

    return 0;
}