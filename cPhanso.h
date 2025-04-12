#ifndef CPHANSO_H
#define CPHANSO_H

#include <iostream>
using namespace std;

class cPhanso {
private:
    int tu, mau; // tử số và mẫu số
public:
    cPhanso(int tu = 0, int mau = 1); // constructor
    void Nhap(); // nhập phân số
    void Xuat(); // xuất phân số
    void RutGon(); // rút gọn phân số
    int GetTuSo() const { return tu; } // getter for tu
    int GetMauSo() const { return mau; } // getter for mau

    // Overload operators
    cPhanso operator+(const cPhanso &ps) const;
    bool operator<(const cPhanso &ps) const;
    bool operator>(const cPhanso &ps) const;
};

#endif // CPHANSO_H
