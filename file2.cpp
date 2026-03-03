#include <iostream>
using namespace std;

float jariJari;
float phi = 3.14159;

void awal(){
    cout << "masukkan jari-jari lingkaran = ";
    cin >> jariJari;
}

float luas (float jari_jari, float phi){
    return phi * jariJari * jariJari;
}

void akhir (){
   cout << "Hasil luas untuk lingkaran dengan jari jari " << jariJari << " adalah = " <<luas (jariJari,phi);
}

int main(){
    awal();
    akhir();
}