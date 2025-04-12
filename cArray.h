#include <iostream>
#include <algorithm> // for std::swap
using namespace std;
class cArray
{
private:
    int *arr; 
    int size; 
public:
    cArray(int s) : size(s) {
        arr = new int[size]; 
    }
    ~cArray() {
        delete[] arr; 
    }
    void Nhap() {
        cout << "Nhap " << size << " phan tu cho mang: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i]; 
        }
    }
    void Xuat() const {
        cout << "Mang : ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    void KiemTraTangDan() const {
        bool isAscending = true; 
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                isAscending = false; 
                break;
            }
        }
        if (isAscending) {
            cout << "Mang da sap xep tang dan." << endl;
        } else {
            cout << "Mang khong sap xep tang dan." << endl;
        }
    }
    void SapXepTangDan() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] > arr[j]) {
                    swap(arr[i], arr[j]); 
                }
            }
        }
        cout << "Mang sau khi sap xep tang dan: ";
        Xuat(); 
    }
    void KiemTraGiamDan() const {
        bool isDescending = true; 
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] < arr[i + 1]) {
                isDescending = false; 
                break;
            }
        }
        if (isDescending) {
            cout << "Mang da sap xep giam dan." << endl;
        } else {
            cout << "Mang khong sap xep giam dan." << endl;
        }
    }
    void SapXepGiamDan() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] < arr[j]) {
                    swap(arr[i], arr[j]); 
                }
            }
        }
        cout << "Mang sau khi sap xep giam dan: ";
        Xuat(); 
    }
    void Demsolanxuathienphantu(int x) const {
        int count = 0; 
        for (int i = 0; i < size; i++) {
            if (arr[i] == x) {
                count++; 
            }
        }
        cout << "Phan tu " << x << " xuat hien " << count << " lan." << endl;
    }
    void TimPhanLenhoNhat() const {
        int maxIndex = 0; 
        for (int i = 1; i < size; i+=2) {
            if (arr[i] > arr[maxIndex]) {
                maxIndex = i; 
            }
        }
        cout << "Phan tu lon nhat: " << arr[maxIndex] << endl;
    }
    void TimSoNguyenToLonNhat() const {
        int maxPrime = -1; 
        for (int i = 0; i < size; i++) {
            bool isPrime = true; 
            if (arr[i] < 2) {
                isPrime = false; 
            } else {
                for (int j = 2; j * j <= arr[i]; j++) {
                    if (arr[i] % j == 0) {
                        isPrime = false; 
                        break;
                    }
                }
            }
            if (isPrime && arr[i] > maxPrime) {
                maxPrime = arr[i]; 
            }
        }
        if (maxPrime != -1) {
            cout << "So nguyen to lon nhat: " << maxPrime << endl;
        } else {
            cout << "Khong co so nguyen to trong mang." << endl;
        }
    }
};