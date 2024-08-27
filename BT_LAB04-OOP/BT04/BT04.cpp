#include <iostream>
#include "NgayThangNam.h"

using namespace std;

int main() {
    NgayThangNam ngay1(2024, 8, 26);
    NgayThangNam ngay2;
    cout << "Nhap ngay thang nam (dd mm yyyy): ";
    cin >> ngay2;
    cout << "Ngay 1: " << ngay1 << endl;
    cout << "Ngay 2: " << ngay2 << endl;
    NgayThangNam ngay3 = ngay1 + 10;
    cout << "Ngay 1 cong 10 ngay: " << ngay3 << endl;
    NgayThangNam ngay4 = ngay2 - 5;
    cout << "Ngay 2 tru 5 ngay: " << ngay4 << endl;
    int khoangCach = ngay1 - ngay2;
    cout << "Khoang cach giua ngay 1 va ngay 2: " << khoangCach << " ngay" << endl;

    cout << "Ngay 1 == Ngay 2: " << (ngay1 == ngay2 ? "True" : "False") << endl;
    cout << "Ngay 1 != Ngay 2: " << (ngay1 != ngay2 ? "True" : "False") << endl;

    cout << "Ngay 1 >= Ngay 2: " << (ngay1 >= ngay2 ? "True" : "False") << endl;
    cout << "Ngay 1 <= Ngay 2: " << (ngay1 <= ngay2 ? "True" : "False") << endl;

    cout << "Ngay 1 > Ngay 2: " << (ngay1 > ngay2 ? "True" : "False") << endl;
    cout << "Ngay 1 < Ngay 2: " << (ngay1 < ngay2 ? "True" : "False") << endl;

    return 0;
}
