#include <iostream>

int main(){
    int totalBelanja;

    std::cout << "Masukkan total belanja (Rp): ";
    std::cin >> totalBelanja;

    if(totalBelanja < 100000){
        std::cout << "Diskon: 0%" << '\n';
        std::cout << "Total Bayar: Rp" << totalBelanja;
    } else if(totalBelanja < 300000){
        std::cout << "Diskon: 10%" << '\n';
        std::cout << "Total Bayar: Rp" << totalBelanja * 0.9;
    } else{
        std::cout << "Diskon: 20%" << '\n';
        std::cout << "Total Bayar: Rp" << totalBelanja * 0.8;
    }
}