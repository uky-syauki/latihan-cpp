#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int i;
    char namahari[7][8] = {"Senin","Selasa","Rabu","Kamis","Jumat","Sabtu","Minggu"};
    char (*arrp)[8] = namahari;
    cout<<"Nama-nama Hari: "<<endl;

    for (i=0; i < 7; i++){
        cout<<namahari[i]<<" | ";
    }
    cout<<endl;

    char ganti[] = "unknow";

    // arrp[0] = ganti;
    strcpy(arrp[0], ganti);

    for (i=0; i < 7; i++){
        cout<<namahari[i]<<" | ";
    }
    cout<<endl;

    return 0;
}