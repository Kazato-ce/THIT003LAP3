#include "cDonThuc.h"
#include <iostream>
using namespace std;
class cDaThuc
{
private:
    cDonThuc *dsDonThuc;
    int soDonThuc;
public:
    cDaThuc(int n = 0) : soDonThuc(n)
    {
        dsDonThuc = new cDonThuc[soDonThuc];
    }
    ~cDaThuc()
    {
        delete[] dsDonThuc;
    }
    void nhap()
    {
        for (int i = 0; i < soDonThuc; i++)
        {
            cout << "Nhap don thuc thu " << i + 1 << ": " << endl;
            dsDonThuc[i].nhap();
        }
    }
    void xuat()
    {
        for (int i = 0; i < soDonThuc; i++)
        {
            dsDonThuc[i].xuat();
            if (i < soDonThuc - 1)
                cout << " + ";
        }
        cout << endl;
    }
    void CongDaThuc(cDaThuc &dt2) {
        int n = soDonThuc + dt2.soDonThuc;
        cDonThuc *temp = new cDonThuc[n];
        int i = 0, j = 0, k = 0;
        while (i < soDonThuc && j < dt2.soDonThuc) {
            if (dsDonThuc[i].getBac() > dt2.dsDonThuc[j].getBac())
                temp[k++] = dsDonThuc[i++];
            else if (dsDonThuc[i].getBac() < dt2.dsDonThuc[j].getBac())
                temp[k++] = dt2.dsDonThuc[j++];
            else {
                temp[k] = cDonThuc(dsDonThuc[i].getHeSo() + dt2.dsDonThuc[j].getHeSo(), dsDonThuc[i].getBac());
                i++;
                j++;
                k++;
            }
        }
        while (i < soDonThuc)
            temp[k++] = dsDonThuc[i++];
        while (j < dt2.soDonThuc)
            temp[k++] = dt2.dsDonThuc[j++];
        delete[] dsDonThuc;
        dsDonThuc = temp;
        soDonThuc = k;
    }

    void HieuDaThuc(cDaThuc &dt2) {
        int n = soDonThuc + dt2.soDonThuc;
        cDonThuc *temp = new cDonThuc[n];
        int i = 0, j = 0, k = 0;
        while (i < soDonThuc && j < dt2.soDonThuc) {
            if (dsDonThuc[i].getBac() > dt2.dsDonThuc[j].getBac())
                temp[k++] = dsDonThuc[i++];
            else if (dsDonThuc[i].getBac() < dt2.dsDonThuc[j].getBac())
                temp[k++] = cDonThuc(-dt2.dsDonThuc[j].getHeSo(), dt2.dsDonThuc[j].getBac());
            else {
                temp[k] = cDonThuc(dsDonThuc[i].getHeSo() - dt2.dsDonThuc[j].getHeSo(), dsDonThuc[i].getBac());
                i++;
                j++;
                k++;
            }
        }
        while (i < soDonThuc)
            temp[k++] = dsDonThuc[i++];
        while (j < dt2.soDonThuc)
            temp[k++] = cDonThuc(-dt2.dsDonThuc[j].getHeSo(), dt2.dsDonThuc[j].getBac());
        delete[] dsDonThuc;
        dsDonThuc = temp;
        soDonThuc = k;
    }
};