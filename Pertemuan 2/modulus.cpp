#include <iostream>

using namespace std;

int main(void) {
    int m,n;
    cout << "Jumlah bebek: " ;
    cin >> m;

    cout << "Jumlah teman pak tatang: " ;
    cin >> n;

    int jumlahBebek = m / n; //bagi m dan n untuk mengetahui jumlah bebek pak tatang yang akan dibagi oleh temannya
    int sisaBebek= m % n ; //mencari sisa bebek pak tatang

    cout << "Bebek yang akan diterima teman pak tatang : " << jumlahBebek << endl;
    cout << "Sisa bebek pak tatang : " << sisaBebek << endl;

    return (0);
}