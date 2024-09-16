#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai Anda: ";
    cin >> nilai;

    if (nilai >= 90) {
        cout << "Selamat! Anda mendapatkan nilai A." << endl;
    } else if (nilai >= 80) {
        cout << "Anda mendapatkan nilai B." << endl;
    } else if (nilai >= 70) {
        cout << "Anda mendapatkan nilai C." << endl;
    } else if (nilai >= 60) {
        cout << "Anda mendapatkan nilai D." << endl;
    } else {
        cout << "Anda mendapatkan nilai E." << endl;
    }

    return 0;
}

//ilman arifin A.R 1E informatika 2410631170143
