#include <iostream>
using namespace std;

int main(){
    int n = 44;

    int *pn = &n;

    cout<<"Alamat Address [pn]: "<<pn<<endl;
    cout<<endl;

    int m = *pn;
    cout<<"Isi variable m       : "<<m<<endl;

    cout<<"Alamat memori m:     : "<<&m<<endl;
    cout<<"Alamat memori pn:    : "<<pn<<endl;
    cout<<"Alamat memori n      : "<<&n<<endl;

    return 0;
}