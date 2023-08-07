#include <iostream>
using namespace std;

struct  Node
{
    int NilaiUTS;
    int NilaiUAS;
    int N1, N2;
};

Node *P, *Q;


int main(){
    P = new Node;
    P -> N1 = 99;

    Q = new Node;
    Q -> N2 = 78;

    Node A;
    A.N1 = 1;


    cout<<"Isi Variable P = "<<P -> N1 << endl;
    cout<<"Isi Variable Q = "<<Q -> N2 << endl;
    cout<<"Isi Variable A = "<<A.N1<<endl;


    return 0;
}