#include <iostream>
using namespace std;

// Deklarasi fungsi
void menu() {
    cout << "Menu:" << endl;
    cout << "1. Tambah" << endl;
    cout << "2. Kurang" << endl;
    cout << "3. Kali" << endl;
    cout << "4. Bagi" << endl;
}

void tambah() {
    int a, b;
    cout << "Masukkan dua angka: ";
    cin >> a >> b;
    cout << "Hasil penjumlahan: " << a + b << endl;
}

void kurang() {
    int a, b;
    cout << "Masukkan dua angka: ";
    cin >> a >> b;
    cout << "Hasil pengurangan: " << a - b << endl;
}

void kali() {
    int a, b;
    cout << "Masukkan dua angka: ";
    cin >> a >> b;
    cout << "Hasil perkalian: " << a * b << endl;
}

void bagi() {
    int a, b;
    cout << "Masukkan dua angka: ";
    cin >> a >> b;
    if (b != 0) {
        cout << "Hasil pembagian: " << static_cast<double>(a) / b << endl;
    } else {
        cout << "Tidak dapat dibagi dengan nol." << endl;
    }
}

int main() {
    menu();
    tambah();
    kurang();
    kali();
    bagi();
    return 0;
}
