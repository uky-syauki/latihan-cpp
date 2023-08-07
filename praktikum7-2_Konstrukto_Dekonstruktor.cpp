#include <iostream>
#include <cstring>
using namespace std;

class INFORMATIKA{
    private:
        char jurusan[20];
    public:
        INFORMATIKA(char *jurusan);
        ~INFORMATIKA();
};

INFORMATIKA R("R");

int main(){
    cout<<"Menjalankan perintah fungsi main()...."<<endl;
    INFORMATIKA S("S");
    INFORMATIKA T("T");
    cout<<"Mengakhiri perintah fungsi main().....\n\n"<<endl;
    exit(1);

    return 0;
}

INFORMATIKA::INFORMATIKA(char *jurusan){
    strcpy(INFORMATIKA::jurusan, jurusan);
    cout<<"Konstruktor Object --"<<jurusan<<"-- Yang Dijalankan"<<endl;
}

INFORMATIKA::~INFORMATIKA(){
    strcpy(INFORMATIKA::jurusan, jurusan);
    cout<<"Destruktor Object --"<<jurusan<<"-- Yang Dijalankan"<<endl;
}