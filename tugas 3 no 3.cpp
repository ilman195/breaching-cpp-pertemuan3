#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float sisi, panjang, lebar, alas, tinggi, luas;


    cout << "Pilih bentuk untuk menghitung luas:\n";
    cout << "1. Persegi\n";
    cout << "2. Persegi Panjang\n";
    cout << "3. Segitiga\n";
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> pilihan;


    switch (pilihan) {
        case 1:
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas persegi: " << luas << endl;
            break;
        case 2:
            cout << "Masukkan panjang persegi panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar persegi panjang: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas persegi panjang: " << luas << endl;
            break;
        case 3:
            cout << "Masukkan alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas segitiga: " << luas << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }

    return 0;
}

//Ilman arifin A.R 1E informatikan 2410631170143
