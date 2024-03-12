#include <iostream>

int main() {
    int menu;

    while (true) {
        std::cout << "Aplikasi Calculator\n";
        std::cout << "1. Penambahan\n";
        std::cout << "2. Pengurangan\n";
        std::cout << "3. Perkalian\n";
        std::cout << "4. Pembagian\n";
        std::cout << "Pilih menu calculator : 1. Penambahan 2. Pengurangan 3. Perkalian 4. Pembagian\n";
        std::cout << "Input nomor menu [1..4] : ";
        std::cin >> menu;

        if (menu < 1 || menu > 4) {
            std::cout << "Maaf, menu yang Anda pilih tidak tersedia.\n";
            std::cout << "Tekan sembarang key untuk keluar Aplikasi Calculator\n";
            break;
        }
        if (menu == 1) {
            int a, b;
            std::cout << "Inputkan nilai a = ";
            std::cin >> a;
            std::cout << "1. Inputkan nilai b = ";
            std::cin >> b;
            std::cout << "Hasil Penambahan " << a << " + " << b << " = " << a + b << "\n";
        }
        else if (menu == 2) {
            int a, b;
            std::cout << "Inputkan nilai a = ";
            std::cin >> a;
            std::cout << "Inputkan nilai b = ";
            std::cin >> b;
            std::cout << "Hasil Pengurangan " << a << " - " << b << " = " << a - b << "\n";
        }
        else if (menu == 3) {
            int a, b;
            std::cout << "Inputkan nilai a = ";
            std::cin >> a;
            std::cout << "Inputkan nilai b = ";
            std::cin >> b;
            std::cout << "Hasil Perkalian " << a << " * " << b << " = " << a * b << "\n";
        }
        else if (menu == 4) {
            int a, b;
            std::cout << "Inputkan nilai a = ";
            std::cin >> a;
            std::cout << "Inputkan nilai b = ";
            std::cin >> b;
            if (b == 0) {
                std::cout << "Pembagian dengan nol tidak diperbolehkan.\n";
            }
            else {
                std::cout << "Hasil Pembagian " << a << " / " << b << " = " << a / (float)b << "\n";
            }
        }

        std::cout << "Tekan sembarang key untuk keluar Aplikasi Calculator\n";
        break;
    }

    return 0;
}