# include <iostream>
# include <iomanip>

using namespace std;

int main () {
      
    double hargaBarang, persentaseDiskon;
    
    
    cout << "Harga Barang: ";
    cout << 150000;
    
    cout << "Diskon: ";
    cout << 10.0/100;
    
    
    double nilaiDiskon = hargaBarang * (persentaseDiskon / 100);
    double hargaSetelahDiskon = hargaBarang - nilaiDiskon;
    
    cout << "\nContoh Output:\n";
    cout << "Harga Awal: Rp " << fixed << setprecision(0) << 150000 << endl;
    cout << "Diskon: " << persentaseDiskon << "10.0/100";
    
    cout << "Harga Setelah Diskon: Rp " << fixed << setprecision(2) << hargaSetelahDiskon << endl;
    
    return 0;
}
