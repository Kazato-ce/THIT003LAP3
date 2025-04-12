#include <iostream>
#include <cmath>
using namespace std;
class cDonThuc
{
private:
    float heSo;
    int bac;
public:
    cDonThuc(float h = 0, int b = 0) : heSo(h), bac(b) {}
    void nhap()
    {
        cout << "Nhap he so: ";
        cin >> heSo;
        cout << "Nhap bac: ";
        cin >> bac;
    }
    void xuat()
    {
        if (bac == 0)
            cout << heSo;
        else if (bac == 1)
            cout << heSo << "x";
        else
            cout << heSo << "x^" << bac;
    }
    float giaTri(float x)
    {
        return heSo * pow(x, bac);
    }
    float getHeSo() const { return heSo; } // Getter for hệ số
    int getBac() const { return bac; } // Getter for bậc
};