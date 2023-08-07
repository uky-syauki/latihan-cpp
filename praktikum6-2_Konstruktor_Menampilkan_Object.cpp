#include <iostream>
#include <cstring>
using namespace std;

class Buku {
    private:
        char judul[30];
        char pengarang[25];
        int jumlah;

    public:
        Buku(char *Judul, char *Pengarang, int Jumlah){
            strcpy(judul, Judul);
            strcpy(pengarang, Pengarang);
            jumlah = Jumlah;
        };
        void info();
};

int main(){
    Buku Komik("Kopi Kapal Terbakar","Tambayong",63);

    Komik.info();

    return 0;
}

// Buku::Buku(char *Judul, char *Pengarang, int Jumlah){
//     strcpy(judul, Judul);
//     strcpy(pengarang, Pengarang);
//     jumlah = Jumlah;
// };

void Buku::info(){
    cout<<"Judul Komik      : "<<judul<<endl;
    cout<<"Nama Pengarang pengarang: "<<pengarang<<endl;
    cout<<"Jumlah Komik     : "<<jumlah<<endl;
};