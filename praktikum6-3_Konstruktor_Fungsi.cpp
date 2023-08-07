#include <iostream>
#include <cstring>
using namespace std;

class SalesPerson{
    public:
        SalesPerson();
        void getSalesFromUser();
        void setSales(int,double);
        void printAnnualSales();
    private:
        double totalAnnualSales();
        double sales[12];
};
SalesPerson::SalesPerson(){
    for (int i = 0; i < 12; i++){
        sales[i]=0.0;
    }
}
void SalesPerson::getSalesFromUser(){
    double salesFigure;
    int i;
    for (i = 1; i <= 12; i++){
        cout<<"Jumlah penjualan pada bulan ["<<i<<"] : ";
        cin>>salesFigure;
        setSales(i, salesFigure);
    }
}
void SalesPerson::setSales(int mount, double amount){
    if (mount >= 1 && amount > 0){
        sales[mount-1] = amount;
    } else {
        cout<<"Salah Bulan / Jumlah Penjualan"<<endl;
    }
}
void SalesPerson::printAnnualSales(){
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Total Penjualan Rp. "<<totalAnnualSales()<<endl;
}
double SalesPerson::totalAnnualSales(){
    double total=0.0;
    int i;
    for (i = 0; i < 12; i++){
        total += sales[i];
    }
    return total;
}


int main(){
    SalesPerson Nana;
    Nana.getSalesFromUser();
    Nana.printAnnualSales();

    return 0;
}