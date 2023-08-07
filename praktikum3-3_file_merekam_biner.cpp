#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int angka[] = {22,7,66};
    ofstream fileobj;
    fileobj.open("angka.dat", ios::binary);
    for (int i = 0; i < (sizeof(angka)/sizeof(int)); i++){
        fileobj.write((char *) &angka[i], sizeof(int));
    }
    fileobj.close();

    return 0;
}