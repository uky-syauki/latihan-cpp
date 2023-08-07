#include <iostream>
// #include <conio>
using namespace std;

int main(){
    int varInt = 63;     // variable biasa
    int *pointerVar;        // pointer variable

    cout<<"Nilai/Isi Variable varInt awal       : "<<varInt<<endl;
    cout<<"Alamat dari variable varInt          : "<<&varInt<<endl<<endl;

    pointerVar = &varInt;
    *pointerVar = 10;

    cout<<"Nilai/Isi Variable varInt akhir  : "<<varInt<<endl;
    cout<<"Alamat variable varInt           : "<<pointerVar<<endl;
    cout<<"Nilai/Isi Variable varInt        : "<<*pointerVar<<endl;

    return 0;
}