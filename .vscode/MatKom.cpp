#include <iostream>

// Fungsi validasi umur dewasa
bool isAdult(int age) {
    return age >= 17 && age <= 150;
}

int main() {
    // Daftar angka tes
    int tesUmur[] = {-5, 12, 17, 25, 160};

    std::cout << "=== TES VALIDASI UMUR ===" << std::endl;

    for (int age : tesUmur) {
        std::cout << "Umur " << age << " -> ";
        
        if (isAdult(age)) {
            std::cout << "VALID (True)" << std::endl;
        } else {
            std::cout << "TIDAK VALID (False)" << std::endl;
        }
    }

    return 0;
}
