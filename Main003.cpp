#include "cDSPhanso.h"
int main(){
    cDSPhanso ds; // Tạo đối tượng danh sách phân số
    ds.Nhap(); // Nhập danh sách phân số
    ds.Xuat(); // Xuất danh sách phân số
    ds.TongCacPhanSo(); // Tính tổng các phân số
    ds.TimPhanSoCoTuSoNhoNhat(); // Tìm phân số có tử số nhỏ nhất
    ds.SapXepTangDan(); // Sắp xếp danh sách phân số theo thứ tự tăng dần
    ds.SapXepGiamDan(); // Sắp xếp danh sách phân số theo thứ tự giảm dần
    ds.TimPhanSoLonNhat(); // Tìm phân số lớn nhất trong danh sách
    ds.TimPhanSoNhoNhat(); // Tìm phân số nhỏ nhất trong danh sách
    return 0; // Kết thúc chương trình
}