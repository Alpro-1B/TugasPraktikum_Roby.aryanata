#include <iostream>

using namespace std;

int main() {
int a, b, c;

cout << "Masukkan tiga angka: "; //output untuk memasukkan angka
cin >> a >> b >> c; //input untuk memasukkan 3 angka

  // Inisialisasi variabel untuk menyimpan angka terbesar
int terbesar = a; //a adalah angka terbesar untuk sekarang

  // Periksa apakah b lebih besar dari terbesar
if (b > terbesar) { //jika b lebih besar dari variabel terbesar maka nilai variabel terbesar akan pindah ke b 
terbesar = b; 
}

if (c > terbesar) { //jika c lebih besar dari variabel terbesar makan nilai variabel terbesar akan pindah ke c
terbesar = c;
}

cout << "Angka terbesar adalah " << terbesar << endl; //output menyatakan angka terbesarnya
return 0;//penutup
}