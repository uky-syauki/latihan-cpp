#include <iostream>
#include <cstring>
#include "majalah.h"
// using namespace std;

majalah::majalah(char *namaMajalah, char *penerbit, int jumlah){
    strcpy(majalah::namaMajalah, namaMajalah);
    strcpy(majalah::penerbit, penerbit);
    majalah::jumlah=jumlah;
}

void majalah::info(){
    std::cout<<"Nama Majalah    : "<<namaMajalah<<std::endl;
    std::cout<<"Penerbit        : "<<penerbit<<std::endl;
    std::cout<<"Jumlah Majalah  : "<<jumlah<<std::endl;
}

int main(){
    majalah bacaan;
    majalah bacaan1("Femina", "Gramedia Group", 22);

    bacaan.info();
    bacaan1.info();
}