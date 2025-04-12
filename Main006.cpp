#include "cListCandidate.h"
#include <iostream>
#include <iomanip>
int main()
{
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;
    cListCandidate ds(n);
    ds.Nhap();
    ds.Xuat();
    ds.DanhSachThiSinhcodiemT();
    ds.DanhSachThiSinhcodiemTLonNhat();
    return 0;
}