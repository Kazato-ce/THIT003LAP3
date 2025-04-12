#include <iostream>
#include <string>
#include "NgayThangNam.h"
using namespace std;
class cCandidate
{
private:
    int ma;
    string ten;
    NgayThangNam ngaysinh; 
    float diemToan;
    float diemVan;
    float diemAnh;
    float diemT;
public:
    cCandidate(int m = 0, string t = "", NgayThangNam ns = NgayThangNam(), float dt = 0, float dv = 0, float da = 0) 
        : ma(m), ten(t), ngaysinh(ns), diemToan(dt), diemVan(dv), diemAnh(da) 
    {
        diemT = diemToan + diemVan + diemAnh;
    }
    void Nhap()
    {
        cout << "Nhap ma: ";
        cin >> ma;
        cout << "Nhap ten: ";
        cin.ignore();
        getline(cin, ten);
        ngaysinh.Nhap();
        cout << "Nhap diem Toan: ";
        cin >> diemToan;
        cout << "Nhap diem Van: ";
        cin >> diemVan;
        cout << "Nhap diem Anh: ";
        cin >> diemAnh;
        diemT = (diemToan + diemVan + diemAnh) / 3;
    }
    void Xuat()
    {
        cout << "Ma: " << ma << endl;
        cout << "Ten: " << ten << endl;
        ngaysinh.Xuat();
        cout << "Diem Toan: " << diemToan << endl;
        cout << "Diem Van: " << diemVan << endl;
        cout << "Diem Anh: " << diemAnh << endl;
        cout << "Diem Trung Binh: " << diemT << endl;
    }
    int GetMa() const { return ma; }
    string GetTen() const { return ten; }
    NgayThangNam GetNgayThangNam() const { return ngaysinh; }
    float GetDiemToan() const { return diemToan; }
    float GetDiemVan() const { return diemVan; }
    float GetDiemAnh() const { return diemAnh; }
    float GetdiemT() const { return diemT; }
    void SetMa(int m) { ma = m; }
    void SetTen(string t) { ten = t; }
    void SetNgayThangNam(NgayThangNam ns) { ngaysinh = ns; }
};