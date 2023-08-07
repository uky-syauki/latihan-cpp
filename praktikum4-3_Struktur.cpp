#include <iostream>
// #include <stdlib.h>
#include <iomanip>
#include <cstring>
using namespace std;

struct pelanggan_toko
{
    char nama[20][20], alamat[20][20], kelamin[20][2], telp[20][20];
    int umur[20];
};

char* templat(char var[20], int def){
    int p = strlen(var);
    char* hasil = new char[def+1];
    strcpy(hasil, var);
    for (int i = p; i < def; i++){
        hasil[i] = ' ';
    }
    hasil[def] = '|';
    return hasil;
}

int main(){
    pelanggan_toko data;
    int jumlah, i;

    cout<<"INPUT DATA PELANGGAN\n";
    cout<<"Jumlah Pelanggan : ";cin>>jumlah;
    cin.ignore();
    for (i=0; i < jumlah; i++){
        // cin.ignore();
        cout<<"\nNama Pelanggan Toko        : ";cin.getline(data.nama[i], sizeof(data.nama[i]));
        cout<<"Alamat Pelanggan Toko        : ";cin.getline(data.alamat[i], sizeof(data.alamat[i]));
        cout<<"Umur Pelanggan Toko          : ";cin>>data.umur[i];
        cin.ignore();
        cout<<"Jenis Kelamin Pelanggan[L/P] : ";cin>>data.kelamin[i];
        cin.ignore();
        cout<<"No telp Pelanggan            : ";cin>>data.telp[i];
        cin.ignore();
    }

    cout<<"\n\n\n";

    char LNama[] = "Nama", LAlamat[] = "Alamat", LUsia[] = "Usia", LKelamin[] = "Kelamin", LTelp[] = "No Telp";
    cout<<"-------------------------------------------------------------------------------------------------"<<endl;
    cout<<"             Data Pelanggan Toko!                                                               |"<<endl;
    cout<<"                                                                                                |"<<endl;
    cout<<templat(LNama,20)<<templat(LAlamat,30)<<templat(LUsia,7)<<templat(LKelamin,10)<<templat(LTelp, 25)<<endl;
    cout<<"-------------------------------------------------------------------------------------------------"<<endl;
    for (i=0; i < jumlah; i++){
        char chrUmur[3];
        sprintf(chrUmur, "%d", data.umur[i]);
        // char kel[3];
        // strcpy(kel, data.kelamin[i]);
        cout<<templat(data.nama[i],20)<<templat(data.alamat[i], 30)<<templat(chrUmur,7)<<templat(data.kelamin[i],10)<<templat(data.telp[i], 25)<<endl;
    }
    cout<<"-------------------------------------------------------------------------------------------------"<<endl;
}
