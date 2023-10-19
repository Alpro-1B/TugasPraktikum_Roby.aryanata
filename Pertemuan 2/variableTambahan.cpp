#include <iostream>

using namespace std;

int main() {
    int firstValue,secondValue,thirdValue; //menambahkan variabe ketiga untuk menukar variable dengan lebih mudah
    
    firstValue = 10;
    secondValue = 8;
    
thirdValue = firstValue;
firstValue = secondValue;
secondValue = thirdValue;


cout << firstValue <<endl;
cout << secondValue <<endl;

    return 0;
}