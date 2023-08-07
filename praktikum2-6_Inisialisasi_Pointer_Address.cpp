#include <iostream>
using namespace std;

int main(){
    int n, *pn, **ppn;
    n = 44;
    pn = &n;
    ppn = &pn;

    cout<<"Isi Variable [n - *pn - **ppn]:      "<<n<<" - "<<*pn<<" - "<<**ppn<<endl;
    cout<<"Alamat Variable [n - pn - ppn]:      "<<&n<<" - "<<&pn<<" - "<<&ppn<<endl;
    cout<<"Isi Variable dalam Hexa [n-pn-ppn]:  "<<n<<" - "<<pn<<" - "<<ppn<<endl;

    return 0;
}