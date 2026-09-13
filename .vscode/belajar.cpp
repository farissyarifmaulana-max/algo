# include <iostream>
# include <iomanip>

using namespace std;

int main () {
    int panajang = 10;
    int lebar = 5;
    int tinggi = 3;

    cout << left << setw(10) << "panjang"
         << setw (15) << "lebar"
         << setw (15) << "tinggi"
         << setw (15) << "volume"
         << setw (15) << "luas permukaan" <<endl;

    double panjang = 10;      lebar = 5;;
           tinggi = 3;
    double volume = 10 * 5 * 3;
    double luaspermukaan = 2 * ((10 * 5)+(10 * 3)+(5 * 3));
    
    cout << "hasil akhir" << volume << endl;
    cout << "hasil akhir" << luaspermukaan << endl;
    return 0;

}

    
