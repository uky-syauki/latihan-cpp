#include <iostream>
#include <cstring>
using namespace std;

class p{
    private:
        char teks[50];
    public:
        char *hasil(){
            return teks;
        }
        p(const char *Teks){
            strcpy(teks, Teks);
            hasil();
        }
};


int main(){
    p nama("Ahmad Syauki");
    cout<<nama.hasil()<<endl;

    return 0;
}
// class Mahasiswa{
//     private:
//         char nim[10], nama[25];
//         int usia;
//     public:
//         Mahasiswa(const char *NIM, const char *NAMA, int USIA){
//             strcpy(nim, NIM);
//             strcpy(nama, NAMA);
//             usia = USIA;
//         }
//         void info(){
//             cout<<"INFO:"<<endl;
//             cout<<"Nim:     "<<nim<<endl;
//             cout<<"Nama:    "<<nama<<endl;
//             cout<<"Usia:    "<<usia<<endl;
//         }
// };

// int main(){
//     Mahasiswa Uki("01225010","Ahmad Syauki",22), Gilang("01225012","Gilang gia khuzuki",20);

//     Uki.info();
//     Gilang.info();

//     return 0;
// }


// char* templat(char *var, int def){
//     int p = strlen(var);
//     char* hasil = new char[def+1];
//     strcpy(hasil, var);
//     for (int i = p; i < def; i++){
//         hasil[i] = ' ';
//     }
//     hasil[def] = '|';
//     return hasil;
// }


// int main(){
//     char nama[] = "Ahmad Syauki", email[] = "Achmad.uky@gmail.com";

//     char* hasil = templat(nama, 20);
//     char* LEmail = templat(email, 30);
//     cout<<hasil<<LEmail<<endl;


//     return 0;
// }

// int main(){
//     int nomor = 1;
//     int *ptrnomor = &nomor;
//     int **ptr2 = &ptrnomor;

//     cout<<"Ini Var Nomor: "<<nomor<<"\nIni Var Pointer Nomor: "<<ptrnomor<<endl;
//     cout<<"Ini Var Nomor: "<<&nomor<<"\nIni Var Pointer Nomor: "<<*ptrnomor<<endl;
//     cout<<"Ini Var Nomor: "<<&nomor<<"\nIni Var Pointer Nomor: "<<&ptrnomor<<endl;
//     cout<<"Ini Var Nomor: "<<*ptr2<<"\nIni Var Pointer Nomor: "<<ptr2<<endl;
//     cout<<"Ini Var Nomor: "<<**ptr2<<"\nIni Var Pointer Nomor: "<<ptr2<<endl;



    

// }

// void pangkat(int &a,int p){
//     int n = a;
//     for (int i = 1; i < p; i++){
//         cout<<"hasil: "<<" > "<<n<<" pangkat "<<i<<": "<<a<<endl;
//         a = a * n;
//     }
//     cout<<"hasil: "<<" > "<<n<<" pangkat 8: "<<a<<endl;
// }

// int main(){
//     int usia = 2;

//     pangkat(usia, 8);

//     cout<<usia<<endl;

//     return 0;
// }
//