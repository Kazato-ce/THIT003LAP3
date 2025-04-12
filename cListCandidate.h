#include "cCandidate.h"
#include <iostream>
using namespace std;
class cListCandidate
{
private:
    cCandidate *list;
    int n;
public:
    cListCandidate(int size = 0) : n(size)
    {
        list = new cCandidate[n];
    }
    ~cListCandidate()
    {
        delete[] list;
    }
    void Nhap()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Nhap thong tin thi sinh " << i + 1 << ":" << endl;
            list[i].Nhap();
        }
    }
    void Xuat()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Thong tin thi sinh " << i + 1 << ":" << endl;
            list[i].Xuat();
        }
    }
   void DanhSachThiSinhcodiemT()
    {
        cout << "Danh sach thi sinh co diem tong >= 15:" << endl;
        for (int i = 0; i < n; i++)
        {
            if (list[i].GetdiemT() >= 15)
            {
                list[i].Xuat();
            }
        }
    }
 void DanhSachThiSinhcodiemTLonNhat()
    {   float max = list[0].GetdiemT();
        for (int i = 1; i < n; i++)
        {
            if (list[i].GetdiemT() > max)
            {
                max = list[i].GetdiemT();
            }
        }
        cout << "Danh sach thi sinh co Tong diem lon Nhat:" << endl;
        for (int i = 0; i < n; i++)
        {
            if (list[i].GetdiemT() == max)
            {
                list[i].Xuat();
            }
        }
    } 
void XapxepDanhSachThiSinhGiamDan()
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (list[i].GetdiemT() < list[j].GetdiemT())
                {
                    cCandidate temp = list[i];
                    list[i] = list[j];
                    list[j] = temp;
                }
            }
        }
        cout << "Danh sach thi sinh sau khi sap xep:" << endl;
        Xuat();
    }
};