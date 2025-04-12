#include "cTamGiac.h"
using namespace std;
void cTamGiac::Nhap() {
    cout << "Nhap toa do dinh A: " << endl;
    A.Nhap();
    cout << "Nhap toa do dinh B: " << endl;
    B.Nhap();
    cout << "Nhap toa do dinh C: " << endl;
    C.Nhap();
}
void cTamGiac::Xuat() {
    cout << "Toa do dinh A: ";
    A.Xuat();
    cout << "Toa do dinh B: ";
    B.Xuat();
    cout << "Toa do dinh C: ";
    C.Xuat();
}
float cTamGiac::KhoangCach(const cDiem &a, const cDiem &b) {
    return sqrt(pow(a.GetX() - b.GetX(), 2) + pow(a.GetY() - b.GetY(), 2));
}
float cTamGiac::TinhChuVi() {
    float AB = KhoangCach(A, B);
    float BC = KhoangCach(B, C);
    float CA = KhoangCach(C, A);
    return AB + BC + CA;
}
float cTamGiac::TinhDienTich() {
    float AB = KhoangCach(A, B);
    float BC = KhoangCach(B, C);
    float CA = KhoangCach(C, A);
    float p = (AB + BC + CA) / 2;
    return sqrt(p * (p - AB) * (p - BC) * (p - CA));
}
void cTamGiac::TinhTuyen(float a, float b) {
    A.TinhTuyen(a, b);
    B.TinhTuyen(a, b);
    C.TinhTuyen(a, b);
}
void cTamGiac::PhongTo(float k) {
    A.PhongTo(k);
    B.PhongTo(k);
    C.PhongTo(k);
}
void cTamGiac::ThuNho(float k) {
    A.ThuNho(k);
    B.ThuNho(k);
    C.ThuNho(k);
}
void cTamGiac::Quay(float goc) {
    A.Quay(goc);
    B.Quay(goc);
    C.Quay(goc);
}
