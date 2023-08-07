#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fileobj;
    fileobj.open("biodataku.txt");
    cout<<"Sedang Merekam..."<<endl;
    fileobj<<"Nama          : Ahmad syauki"<<endl;
    fileobj<<"Alamat        : Jl.Paccerakkang no.156"<<endl;
    fileobj<<"Jenis kelamin : Laki-laki"<<endl;
    fileobj<<"Tahun Masuk   : 2022"<<endl;
    fileobj.close();

    return 0;
}