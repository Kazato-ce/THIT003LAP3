#include "cDSPhanso.h"
using namespace std;
cDSPhanso::cDSPhanso() : n(0), a(nullptr) {} // Khởi tạo mặc định
cDSPhanso::cDSPhanso(int n) : n(n) {
    a = new cPhanso[n]; // Cấp phát bộ nhớ cho mảng phân số
}
void cDSPhanso::Nhap() {
    cout << "Nhap so luong phan so: ";
    cin >> n;
    delete[] a; // Giải phóng bộ nhớ cũ nếu đã được cấp phát
    a = new cPhanso[n]; // Cấp phát bộ nhớ cho mảng phân số
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan so thu " << i + 1 << ": ";
        a[i].Nhap(); // Nhập từng phân số
    }
}
void cDSPhanso::Xuat() {
    cout << "Danh sach phan so: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Phan so thu " << i + 1 << ": ";
        a[i].Xuat(); // Xuất từng phân số
    }
}
void cDSPhanso::TongCacPhanSo() {
    cPhanso tong;
    for (int i = 0; i < n; i++) {
        tong = tong + a[i]; // Tính tổng các phân số
    }
    cout << "Tong cac phan so: ";
    tong.Xuat(); // Xuất tổng
}
void cDSPhanso::TimPhanSoCoTuSoNhoNhat() {
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (a[i].GetTuSo() < a[minIndex].GetTuSo()) {
            minIndex = i; // Cập nhật chỉ số phân số có tử số nhỏ nhất
        }
    }
    cout << "Phan so co tu so nho nhat: ";
    a[minIndex].Xuat(); // Xuất phân số có tử số nhỏ nhất
}
void cDSPhanso::SapXepTangDan() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]); // Hoán đổi vị trí nếu phân số i lớn hơn phân số j
            }
        }
    }
    cout << "Danh sach phan so sau khi sap xep tang dan: " << endl;
    Xuat(); // Xuất danh sách đã sắp xếp
}
void cDSPhanso::SapXepGiamDan() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                swap(a[i], a[j]); // Hoán đổi vị trí nếu phân số i nhỏ hơn phân số j
            }
        }
    }
    cout << "Danh sach phan so sau khi sap xep giam dan: " << endl;
    Xuat(); // Xuất danh sách đã sắp xếp
}
void cDSPhanso::TimPhanSoLonNhat() {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[maxIndex]) {
            maxIndex = i; // Cập nhật chỉ số phân số lớn nhất
        }
    }
    cout << "Phan so lon nhat: ";
    a[maxIndex].Xuat(); // Xuất phân số lớn nhất
}
void cDSPhanso::TimPhanSoNhoNhat() {
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[minIndex]) {
            minIndex = i; // Cập nhật chỉ số phân số nhỏ nhất
        }
    }
    cout << "Phan so nho nhat: ";
    a[minIndex].Xuat(); // Xuất phân số nhỏ nhất
}
