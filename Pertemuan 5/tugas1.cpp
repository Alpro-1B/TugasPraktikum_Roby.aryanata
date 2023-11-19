#include <iostream>

using namespace std;

void outputUser(string name){
    cout << "Jumlah Bilangan" << name << endl; //function disini gunanya untuk mempermudah dalam penulisan dibawah
};

int main()
{
    int batas ,jumlahGanjil = 0 ,jumlahGenap = 0 ,jumlahPrima = 0; // deklarasi variabel

    cout << "Program Bilangan Ganjil, Genap, dan Prima " << endl;

    cout << "Masukkan batas: ";
    cin >> batas;	// Input batas akhir yang diinginkan

// Bilangan Ganjil

    cout << "Ganjil: ";// Output bilangan ganjil
    for (int i = 0; i <= batas; i++){
        if (i % 2 != 0){ //jika modulus i bukan sama dengan 0 maka keluar output tersebut
            cout << i << " "; // Menampilkan bilangan ganjil
            jumlahGanjil += i;   // Operasi penjumlahan bilangan ganjil
        }
    }

    cout << endl;

// Bilangan Genap

    cout << "Bilangan Genap: "; //output bilangan genap
    for (int i = 0; i <= batas; i += 2){ //dimulai dari angka 0 dan selalu ditambah dengan 2 untuk mendapatkan hasil bilangan genap 
        cout << i << " ";
        jumlahGenap += i;
    }
    cout << endl;

    cout << "Bilangan Prima: "; //output bilangan prima
    for (int i = 2; i <= batas; i++){ //outer untuk menentukan batas dari input
        int j; //deklarasi variabel
        for (j = 2; j * j <= i && i % j != 0; j++){ //innerloop untuk menentukan bilangan yang difaktor oleh dirinya maka skip
        }
        if (j * j > i){ //jika variabel j * j lebih besar dari variabel i maka keluar output tersebut
            cout << i << " ";
            jumlahPrima += i;
        }
    }
    cout << endl;

//Output sekaligus deklarasi function    
    outputUser(" Ganjil");
    outputUser(" Genap"); 
    outputUser(" Prima");


// Faktor untuk masing masing bilangan

	cout<< endl;
	cout << "Faktor ganjil: ";
	for (int k = 1; k <= jumlahGanjil; k++){
		if (jumlahGanjil % k == 0){
			cout << k << " ";
			}
		}
	cout<< endl;
	cout << "Faktor genap: ";
	for (int l = 1; l <= jumlahGenap; l++){
		if (jumlahGenap % l == 0){
			cout << l << " ";
			}
		}
		cout<< endl;
    
    cout << "Faktor bilangan prima: ";
	for (int m = 1; m <= jumlahPrima; m++){
		if (jumlahPrima % m == 0){
			cout << m << " ";
			}
		}
}