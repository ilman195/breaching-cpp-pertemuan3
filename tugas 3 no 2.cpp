#include <iostream>
using namespace std;

int main() {
    int angka1, angka2, angka3;

    cout << "Masukkan tiga angka: ";
    cin >> angka1 >> angka2 >> angka3;

    int terbesar = angka1;

    if (angka2 > terbesar) {
        terbesar = angka2;
    }

    if (angka3 > terbesar) {
        terbesar = angka3;
    }

    cout << "Angka terbesar adalah: " << terbesar << endl;

    return 0;
}

//Ilman arifin A.R 1E informatikan 2410631170143
