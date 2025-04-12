#ifndef CTAMGIAC_H
#define CTAMGIAC_H

#include "cDiem.h"
#include <iostream>
#include <cmath>
using namespace std;

class cTamGiac {
private:
    cDiem A, B, C; // 3 đỉnh của tam giác
public:
    cTamGiac(cDiem A = cDiem(), cDiem B = cDiem(), cDiem C = cDiem()) : A(A), B(B), C(C) {} // khởi tạo tam giác
    void Nhap(); // nhập tọa độ 3 đỉnh của tam giác
    void Xuat(); // xuất tọa độ 3 đỉnh của tam giác
    float KhoangCach(const cDiem &a, const cDiem &b); // tính khoảng cách giữa 2 đỉnh
    float TinhChuVi(); // tính chu vi tam giác
    float TinhDienTich(); // tính diện tích tam giác
    void TinhTuyen(float a, float b); // tính tuyến tính cho cả 3 đỉnh
    void PhongTo(float k); // phóng to tam giác theo tỉ lệ k
    void ThuNho(float k); // thu nhỏ tam giác theo tỉ lệ k
    void Quay(float goc); // quay tam giác quanh gốc tọa độ theo góc goc
};

#endif // CTAMGIAC_H