#include "cPhanso.h"
#include <iostream>
#include <algorithm> 
using namespace std;

cPhanso::cPhanso(int tu, int mau) : tu(tu), mau(mau) {
    if (mau == 0) {
        cout << "Mau so khong the bang 0. Dat mau so = 1." << endl;
        this->mau = 1;
    }
}

void cPhanso::Nhap() {
    cout << "Nhap tu so: ";
    cin >> tu;
    cout << "Nhap mau so: ";
    cin >> mau;
    if (mau == 0) {
        cout << "Mau so khong the bang 0. Dat mau so = 1." << endl;
        mau = 1;
    }
}

void cPhanso::Xuat() {
    cout << tu << "/" << mau << endl;
}
void cPhanso::RutGon() {
    int gcd = __gcd(tu, mau); // Tìm ước số chung lớn nhất
    tu /= gcd; // Rút gọn tử số
    mau /= gcd; // Rút gọn mẫu số
}
cPhanso cPhanso::operator+(const cPhanso &ps) const {
    return cPhanso(tu * ps.mau + ps.tu * mau, mau * ps.mau);
}
bool cPhanso::operator>(const cPhanso &ps) const {
    return tu * ps.mau > ps.tu * mau;
}
bool cPhanso::operator<(const cPhanso &ps) const {
    return tu * ps.mau < ps.tu * mau;
}
