#include <iostream>
using namespace std;

float Panjang, Lebar;

float FungsiHitungLuas(){
    return Panjang * Lebar;
}

int main() {
    cout << "Masukkan Panjangnya : ";
    cin >> Panjang;
    cout << "Masukkan Lebarnya :";
    cin >> Lebar;

    cout << "Luas Persegi Panjang : " << FungsiHitungLuas();
}