#include "cPhanso.h"
using namespace std;
class cDSPhanso  // Danh sách phân số
{
private:
    cPhanso *a; // Mảng chứa các phân số
    int n; // Số lượng phân số trong danh sách
public:
    cDSPhanso(); // Hàm khởi tạo mặc định
    cDSPhanso(int n); // Hàm khởi tạo với số lượng phân số
    ~cDSPhanso(); // Hàm hủy
    void Nhap(); // Nhập danh sách phân số
    void Xuat(); // Xuất danh sách phân số
    void TongCacPhanSo(); // Tính tổng các phân số trong danh sách
    void TimPhanSoCoTuSoNhoNhat(); // Tìm phân số có tử số nhỏ nhất
    void SapXepTangDan(); // Sắp xếp danh sách phân số theo thứ tự tăng dần
    void SapXepGiamDan(); // Sắp xếp danh sách phân số theo thứ tự giảm dần
    void TimPhanSoLonNhat(); // Tìm phân số lớn nhất trong danh sách
    void TimPhanSoNhoNhat(); // Tìm phân số nhỏ nhất trong danh sách

};