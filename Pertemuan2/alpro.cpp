#include <iostream>
#include <string>

int main() {
    std::string text = "Motivasi untuk masuk informatika = Penasaran dengan cara kerja game ";
    int textLength = text.length();

    for (int i = 0; i < textLength; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;
    std::cout << "Nama : Roby Aryanata" << std::endl;
    std::cout << "NPM : 2310631170116" << std::endl;
    std::cout << "Kelas : B - Informatika" << std::endl;
    std::cout << "Cita - Cita : Ingin membantai " << std::endl;

    std::cout << text << std::endl;
    
    for (int i = 0; i < textLength; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;

    return 0;
}

// Your First C++ Program
/*
#include <iostream>
#include <string>

int main() {
    std::string text = "";
    int textLength = text.length();
    for (int i = 20; i < textLength; i++) {
        std::cout << "-";
    }

    std::cout << "Nama : Roby Aryanata" << std::endl;
    std::cout << "NPM :" << std::endl;
    std::cout << "Kelas : B - Informatika" << std::endl;
    std::cout << "Cita - Cita = Tidur dengan nyenyak" << std::endl;
    std::cout << "Motivasi untuk masuk informatika = Penasaran dengan cara kerja game " << std::endl;
    for (int i = 20; i < textLength; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;

    return 0;
}
*/