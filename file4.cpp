#include <iostream>
using namespace std;

float FungsiHitungRerata(float p, float q) {
    return (p + q) / 2;
}

string FungsiCekStatus(float r){
    if (r >= 60) {
        return "Lulus";
    }
    else{
        return "Tidak Lulus";
    }
}

int main(){
    float Nilai1, Nilai2;

    cout << "Masukkan Nilai 1 : ";
    cin >> Nilai1;
    cout << "Masukkan Nilai 2 : ";
    cin >> Nilai2;

    cout << "Status Kelulusan : " << FungsiCekStatus(FungsiHitungRerata(Nilai1, Nilai2));
}