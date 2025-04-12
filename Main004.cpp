#include "cArray.h"
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    cArray arr(n); // Tạo đối tượng mảng với kích thước n
    arr.Nhap(); // Nhập các phần tử của mảng
    arr.Xuat(); // Xuất các phần tử của mảng
    int x;
    cin >> x; // Nhập giá trị x để đếm số lần xuất hiện
    arr.Demsolanxuathienphantu(x); // Đếm số lần xuất hiện của x trong mảng
    arr.TimPhanLenhoNhat(); // Tìm phần tử lẻ lớn nhất trong mảng
    arr.TimSoNguyenToLonNhat(); // Tìm số nguyên tố lớn nhất trong mảng
    arr.KiemTraTangDan(); // Kiểm tra xem mảng có được sắp xếp theo thứ tự tăng dần không
    arr.SapXepTangDan(); // Sắp xếp mảng theo thứ tự tăng dần
    arr.KiemTraGiamDan(); // Kiểm tra xem mảng có được sắp xếp theo thứ tự giảm dần không
    arr.SapXepGiamDan(); // Sắp xếp mảng theo thứ tự giảm dần
    return 0; // Kết thúc chương trình
}
//- Tạo mảng ngẫu nhiên gồm n số nguyên
//- Xuất các phần tử mảng
//- Đếm số lần xuất hiện của giá trị x trong mảng
//- Kiểm tra các phần tử trong mảng có tăng dần hay không
//- Tìm phần lẻ nhỏ nhất trong mảng
//- Tìm số nguyên tố lớn nhất trong mảng
//- Sắp xếp các phần tử trong mảng tăng dần/giảm dần theo các thuật toán đã học 
//trong môn Cấu trúc dữ liệu và giải thuật