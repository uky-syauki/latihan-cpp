#include <iostream>
#include <cstring>
using namespace std;

class Jumlah {
    public:
        Jumlah();
        int Total;
        void Tambah(int Nilai);
        void Kali(int Nilai);
} Jml;

Jumlah::Jumlah(){
    Total=0;
}

void Jumlah::Tambah(int Nilai){
    Total += Nilai;
}

void Jumlah::Kali(int Nilai){
    Total *= Nilai;
}

int main(){
    Jml.Tambah(22);
    Jml.Tambah(7);
    Jml.Tambah(66);
    
    cout<<"\nHasil Penjumlahan: "<<Jml.Total<<endl;

    Jml.Kali(28);
    Jml.Kali(10);

    cout<<"\nHasil Perkalian: "<<Jml.Total<<endl;

    return 0;
}