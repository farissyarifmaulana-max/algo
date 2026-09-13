#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double jumlah_rupiah, kurs_konversi, jumlah_dollar;
    cout << "Masukkan jumlah Rupiah: ";
    cin >> jumlah_rupiah;
    cout << "Masukkan kurs konversi ke Dollar: ";
    cin >> kurs_konversi;

    jumlah_dollar = jumlah_rupiah / kurs_konversi;

    cout << "Jumlah Rupiah: Rp " << (long long)jumlah_rupiah << endl;
    cout << fixed << setprecision(2);
    cout << "Jumlah Dollar: $ " << jumlah_dollar << endl;

    return 0;


   
}