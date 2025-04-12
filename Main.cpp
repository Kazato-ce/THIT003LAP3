#include "cTamGiac.h"
#include <iostream>
using namespace std;

int main() {
    cTamGiac tamGiac;
    tamGiac.Nhap(); // Nhập tọa độ 3 đỉnh của tam giác
    cout << "Tam giac ban dau: " << endl;
    tamGiac.Xuat(); // Xuất tọa độ 3 đỉnh của tam giác
    cout << "Chu vi tam giac: " << tamGiac.TinhChuVi() << endl; // Tính chu vi tam giác
    cout << "Dien tich tam giac: " << tamGiac.TinhDienTich() << endl; // Tính diện tích tam giác
    tamGiac.TinhTuyen(2, 3); // Tính tuyến tính cho cả 3 đỉnh
    cout << "Tam giac sau khi tinh tuyen: " << endl;
    tamGiac.Xuat(); // Xuất tọa độ 3 đỉnh sau khi tính tuyến tính
    tamGiac.PhongTo(2); // Phóng to tam giác theo tỉ lệ 2
    tamGiac.Xuat(); // Xuất tọa độ 3 đỉnh sau khi phóng to
    tamGiac.ThuNho(2); // Thu nhỏ tam giác theo tỉ lệ 2
    tamGiac.Xuat(); // Xuất tọa độ 3 đỉnh sau khi thu nhỏ
    tamGiac.Quay(45); // Quay tam giác quanh gốc tọa độ theo góc 45 độ
}
