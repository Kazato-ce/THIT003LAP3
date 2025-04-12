#include "cDaThuc.h"
#include <iostream>
using namespace std;
int main(){
    int n, m;
    cout << "Nhap so don thuc trong da thuc 1: ";
    cin >> n;
    cDaThuc dt1(n);
    dt1.nhap();
    cout << "Nhap so don thuc trong da thuc 2: ";
    cin >> m;
    cDaThuc dt2(m);
    dt2.nhap();
    
    cout << "Da thuc 1: ";
    dt1.xuat();
    cout << "Da thuc 2: ";
    dt2.xuat();
    
    dt1.CongDaThuc(dt2);
    
    cout << "Tong hai da thuc: ";
    dt1.xuat();

    cout<<"Hieu hai da thuc: ";
    dt1.HieuDaThuc(dt2);
    
    return 0;
}