#include <iostream>
using namespace std;
class NgayThangNam
{
private:
    int ngay;
    int thang;
    int nam;    
public:
    NgayThangNam(int n = 0, int t = 0, int y = 0) : ngay(n), thang(t), nam(y) {}
    void Nhap()
    {
        cout << "Nhap ngay: ";
        cin >> ngay;
        cout << "Nhap thang: ";
        cin >> thang;
        cout << "Nhap nam: ";
        cin >> nam;
    }
    void Xuat()
    {
        cout << "Ngay: " << ngay << "/" << thang << "/" << nam << endl;
    }
    int GetNam() const { return nam; }
    int GetThang() const { return thang; }
    int GetNgay() const { return ngay; }
};