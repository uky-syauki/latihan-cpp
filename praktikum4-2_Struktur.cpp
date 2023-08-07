#include <iostream>
using namespace std;

struct Koordinat
{
    int X, Y;
};

void Tampil_Posisi(Koordinat Posisi);

int main(){
    Koordinat Posisi;
    Posisi.X = 64;
    Posisi.Y = 66;

    cout<<"\n\n\n"<<endl;
    Tampil_Posisi(Posisi);
}

void Tampil_Posisi(Koordinat Posisi){
    cout<< "Posisi Kordinat X adalah "<<Posisi.X<<endl;
    cout<< "Posisi Kordinat Y adalah "<<Posisi.Y<<endl;
}