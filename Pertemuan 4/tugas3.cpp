#include <iostream>
using namespace std;

int main()
{
  cout << "Deret fibonacci" << endl;
  int n, no1 = 0, no2 = 1, f = 0; //deklarasi variabel 

    cout << "Masukkan jumlah deret fibonacci: "; 
    cin >> n; //input nomor 

    for(int i = 1; i <= n; i++) { //deret nilai ke-1
	    if(i == 1) {
            cout << no1 << " ";
        }

        if(i == 2) { //deret nilai ke-2
            cout << no2 << " ";
        }

    	f = no1 + no2; //deret nilai ke-n atau nilai yang dimasukkan input
   	 	no1 = no2;
    	no2 = f;
    	cout << f << " "; //output fibonacci
    }

cout << endl;
return 0;
}