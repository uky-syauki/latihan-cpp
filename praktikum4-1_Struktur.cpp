#include <iostream>
#include <cstring>
using namespace std;

int main(){
    struct Matakuliah
    {
        char nama[30];
        int sks;
        char nHuruf;
        float nAngka;
    };

    Matakuliah DataMK;
    strcpy(DataMK.nama, "Algoritma dan Pemrograman 2");
    DataMK.sks = 3;
    DataMK.nHuruf = 'A';
    DataMK.nAngka = 4.00;

    cout<<"Mata Kuliah  : "<<DataMK.nama<<endl;
    cout<<"Jumlah sks   : "<<DataMK.sks<<endl;
    cout<<"Nilai        : "<<DataMK.nHuruf<<endl;
    cout<<"Undex        : "<<DataMK.nAngka<<endl;

    return 0;
    
}