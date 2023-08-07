// #include <iostream>
// using namespace std;

// void coba(int *x);

// int main(){
//     int y = 10;

//     cout<<"Nilai/Isi Variable y Awal    : "<<y<<endl;
//     coba(&y);
//     cout<<"Nilai/Isi Variable y akhir   : "<<y<<endl;

//     return 0;
// }

// void coba(int *x){
//     *x = 20;
// }

#include <iostream>
using namespace std;

void coba(int &x);

int main(){
    int y = 10;

    cout<<"Nilai/Isi Variable y Awal    : "<<y<<endl;
    coba(y);
    cout<<"Nilai/Isi Variable y akhir   : "<<y<<endl;

    return 0;
}

void coba(int &x){
    x = 20;
}