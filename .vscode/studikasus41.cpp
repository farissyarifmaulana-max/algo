 #include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    int jr = 1500000;
    int kk = 15959.6500;

    int jumlah_dolar = jr / kk;

    cout << "Jumlah Rupiah: Rp " << (long long)jr << endl;
//    cout << fixed << setprecision(2);
    cout << "Jumlah Dollar: $ " << jumlah_dolar << endl;

    // cout << right << setw(20) << "panjang"
    //               << setw(20) << "lebar"
    //               << setw(20) << "tinggi"
    //               << setw(20) << "volume" 
    //               << setw(20) << "luaspermukaan" << endl; 

    // cout << right << setw(20) << p 
    //               << setw(20) << l 
    //               << setw(20) << t 
    //               << setw(20) << volume
    //               << setw(20) << luaspermukaan << endl;

    return 0;
}