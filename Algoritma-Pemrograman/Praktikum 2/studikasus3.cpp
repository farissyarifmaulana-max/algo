 #include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    int p = 10;
    int l = 5;
    int t = 3;

    int volume = p * l * t;
    int luaspermukaan = 2 * ((p * l)+ (p * t)+ (l * t));

    cout << right << setw(20) << "panjang"
                  << setw(20) << "lebar"
                  << setw(20) << "tinggi"
                  << setw(20) << "volume" 
                  << setw(20) << "luaspermukaan" << endl; 

    cout << right << setw(20) << p 
                  << setw(20) << l 
                  << setw(20) << t 
                  << setw(20) << volume
                  << setw(20) << luaspermukaan << endl;

    return 0;
}