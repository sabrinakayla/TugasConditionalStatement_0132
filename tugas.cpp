#include <iostream>
using namespace std;

void masukanData(float &berat, float &tinggi) {
    cout << "--- Selamat Datang Mahasiswa Kelas C 2025 ---" << endl;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

float hitungBMI(float berat, float tinggi) {
    return berat / (tinggi * tinggi);
}