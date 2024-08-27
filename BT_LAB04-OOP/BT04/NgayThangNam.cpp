#include "NgayThangNam.h"
#include <iostream>

using namespace std;

NgayThangNam::NgayThangNam() : iNgay(1), iThang(1), iNam(0) {}

NgayThangNam::NgayThangNam(int Nam, int Thang, int Ngay) : iNgay(Ngay), iThang(Thang), iNam(Nam) {}

int NgayThangNam::TinhNgay() const {
    int ngay = iNgay;
    int thang = iThang;
    int nam = iNam;

    ngay += (nam * 365);

    for (int i = 1; i < thang; i++) {
        if (i == 2) {
            ngay += 28;
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11) {
            ngay += 30; 
        }
        else {
            ngay += 31; 
        }
    }

    return ngay;
}

// Toan tu cong
NgayThangNam NgayThangNam::operator+(int ngay) const {
    NgayThangNam result = *this;
    result.iNgay += ngay;

    while (result.iNgay > 31) {
        result.iNgay -= 31;
        result.iThang++;
        if (result.iThang > 12) {
            result.iThang = 1;
            result.iNam++;
        }
    }

    return result;
}

// Toan tu tru so ngay
NgayThangNam NgayThangNam::operator-(int ngay) const {
    NgayThangNam result = *this;
    result.iNgay -= ngay;

    while (result.iNgay < 1) {
        result.iThang--;
        if (result.iThang < 1) {
            result.iThang = 12;
            result.iNam--;
        }
        result.iNgay += 31;
    }

    return result;
}

// Toan tu tru hai ngay
int NgayThangNam::operator-(const NgayThangNam& a) const {
    return this->TinhNgay() - a.TinhNgay();
}

// Toan tu tien to tang
NgayThangNam& NgayThangNam::operator++() {
    *this = *this + 1;
    return *this;
}

// Toan tu hau to tang
NgayThangNam NgayThangNam::operator++(int) {
    NgayThangNam temp = *this;
    *this = *this + 1;
    return temp;
}

// Toan tu tien to giam
NgayThangNam& NgayThangNam::operator--() {
    *this = *this - 1;
    return *this;
}

// Toan tu hau to giam
NgayThangNam NgayThangNam::operator--(int) {
    NgayThangNam temp = *this;
    *this = *this - 1;
    return temp;
}

// Toan tu so sanh bang
bool NgayThangNam::operator==(const NgayThangNam& a) const {
    return this->TinhNgay() == a.TinhNgay();
}

// Toan tu so sanh khac
bool NgayThangNam::operator!=(const NgayThangNam& a) const {
    return !(*this == a);
}

// Toan tu so sanh lon hon hoac bang
bool NgayThangNam::operator>=(const NgayThangNam& a) const {
    return this->TinhNgay() >= a.TinhNgay();
}

// Toan tu so sanh nho hon hoac bang
bool NgayThangNam::operator<=(const NgayThangNam& a) const {
    return this->TinhNgay() <= a.TinhNgay();
}

// Toan tu so sanh lon hon
bool NgayThangNam::operator>(const NgayThangNam& a) const {
    return this->TinhNgay() > a.TinhNgay();
}

// Toan tu so sanh nho hon
bool NgayThangNam::operator<(const NgayThangNam& a) const {
    return this->TinhNgay() < a.TinhNgay();
}

// Toan tu nhap
istream& operator>>(istream& in, NgayThangNam& a) {
    in >> a.iNgay >> a.iThang >> a.iNam;
    return in;
}

// Toan tu xuat
ostream& operator<<(ostream& out, const NgayThangNam& a) {
    out << a.iNgay << "/" << a.iThang << "/" << a.iNam;
    return out;
}
