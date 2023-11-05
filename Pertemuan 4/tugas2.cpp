#include <iostream>
using namespace std;

int main(){
    int n; // deklarasi variabel 
    
    cout << "Masukkan nilai segitiga: ";

    cin >> n;
    cout << "Ini adalah segitiga dengan tinggi " << n;
    cout << endl;

    for (int i = 1; i <= n; i++){ //outer loop untuk menentukan tinggi segitiga
        for (int j = n; j > i; j--){ //inner loop untuk memberi jarak kanan dan kiri
            cout << " "; 
        }
        for (int k = 1; k <= i; k++){ //inmner loop lain untuk mengeluarkan bentuk segitiga yaitu (*)
            cout << "* "; 
        }

    cout << endl;
    }
    
    return 0;
}