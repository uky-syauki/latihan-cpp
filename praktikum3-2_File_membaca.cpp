#include <iostream>
#include <fstream>
using namespace std;

int main(){
    const int maks = 80;
    char penyangga[maks+1];

    ifstream fileobj("biodataku.txt");
    while(fileobj){
        fileobj.getline(penyangga, maks);
        cout<<penyangga<<endl;
    }
    fileobj.close();

    return 0;
}