#include <iostream>

using namespace std;

int main() {
float luas; //float berfungsi jika hasil yang dikeluarkan desimal,karena integer tidak dapat mengeluarkan hasil yang desimal
int bidang , sisi , panjang , lebar , alas , tinggi; //variabel bidang untuk mengetahui sedang menghitung apa

cout << "Pilihlah bidang sesuai keinginan (1 untuk persegi, 2 untuk persegi panjang, 3 untuk segitiga): "; //memberikan 3 pilihan untuk menghitung salah satu dari 3 bidang yang tersedia
cin >> bidang;

switch (bidang) {
    case 1: //case 1 untuk mendeklarasikan case pertama
    cout << "Masukkan sisi dari persegi: ";  //output deskripsi dari input sisi
    cin >> sisi; //user akan memasukkan angka sesuai keinginan
    luas = sisi * sisi; //variabel untuk mengkalikan sisi dan sisi
    break; //break untuk membantasi gerakan dari case 1 ke case lainnya

    case 2: //case 2 untuk mendeklarasikan case kedua
    cout << "Masukkan panjang dari persegi panjang: "; //output deskripsi input panjang
    cin >> panjang; //input untuk user memasukkan panjang sesuai keinginan
    cout << "Masukkan Lebar: "; //output deskripsi input lebar
    cin >> lebar; //input untuk user memasukkan lebar sesuai keinginan
    luas = panjang * lebar; //variabel untuk mengkalikan panjang dan lebar
    break; //break untuk membantasi gerakan dari case 2 ke case lainnya

    case 3: //case 3 untuk mendeklarasikan case ketiga
    cout << "Masukkan alas dari segitiga: "; //output deskripsi input alas segitiga
    cin >> alas ; //input untuk user memasukkan alas segitiga 
    cout << "Masukkan tinggi dari segitiga: "; //output deskripsi input tinggi segitiga
    cin >> tinggi ; //input untuk user memasukkan tinggi segitiga
    luas = 0.5 * alas * tinggi; //variabel untuk mengkalikan alas dan tinggi
    break; //break untuk membantasi gerakan dari case 3 variabel selanjutnya

    default: //jika user salah memilih angka pada switch case pertama 
    cout << "Salah memasukkan nomor" << endl; //output jika user tidak memiling angka dengan benar
    return 0; //mengakhiri program
}

cout << "Luas dari bidang tersebut adalah " << luas << endl; //output hasil dari perhitungan luas diatas
return 0; //sama aja tapi dibawah
}