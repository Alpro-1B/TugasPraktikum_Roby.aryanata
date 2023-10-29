#include <iostream>

using namespace std;

int main() {
int luas; //variabel luas untuk memasukkan hasil perkalian
int bidang; //variabel bidang untuk mengetahui sedang menghitung apa

cout << "Pilihlah bidang sesuai keinginan (1 for persegi, 2 for persegi panjang, 3 for segitiga): "; //memberikan 3 pilihan untuk menghitung salah satu dari 3 bidang yang tersedia
cin >> bidang;

switch (bidang) {
    case 1: //case 1 untuk mendeklarasikan case pertama
    int sisi; //untuk mendeklarasikan sisi 
    cout << "Masukkan sisi dari persegi: ";  //output deskripsi dari input sisi
    cin >> sisi; //user akan memasukkan angka sesuai keinginan
    luas = sisi * sisi; //variabel untuk mengkalikan sisi dan sisi
    break; //break untuk membantasi gerakan dari case 1 ke case lainnya

    case 2: //case 2 untuk mendeklarasikan case kedua
    int panjang, lebar; //untuk mendeklarasikan panjang dan lebar
    cout << "Masukkan panjang dari persegi panjang: "; //output deskripsi input panjang
    cin >> panjang; //input untuk user memasukkan panjang sesuai keinginan
    cout << "Masukkan Lebar: "; //output deskripsi input lebar
    cin >> lebar; //input untuk user memasukkan lebar sesuai keinginan
    luas = panjang * lebar; //variabel untuk mengkalikan panjang dan lebar
    break; //break untuk membantasi gerakan dari case 2 ke case lainnya

    case 3: //case 3 untuk mendeklarasikan case ketiga
    int alas, tinggi; //untuk mendeklarasikan alas dan tinggi
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