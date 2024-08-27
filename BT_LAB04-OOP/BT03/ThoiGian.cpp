#include "ThoiGian.h"
#include <iostream>
using namespace std;

ThoiGian::ThoiGian() : iGio(0), iPhut(0), iGiay(0) {}

ThoiGian::ThoiGian(int Gio, int Phut, int Giay) : iGio(Gio), iPhut(Phut), iGiay(Giay) {}

// Phuong thuc tinh tong so giay
int ThoiGian::TinhGiay() const {
    return iGio * 3600 + iPhut * 60 + iGiay;
}

// Phuong thuc tinh lai gio tu so giay
void ThoiGian::TinhLaiGio(int Giay) {
    iGio = Giay / 3600;
    Giay %= 3600;
    iPhut = Giay / 60;
    iGiay = Giay % 60;
}

// Toan tu cong them so giayS
ThoiGian ThoiGian::operator+(int Giay) const {
    int tongGiay = TinhGiay() + Giay;
    ThoiGian ketQua;
    ketQua.TinhLaiGio(tongGiay);
    return ketQua;
}

// Toan tu tru di so giay
ThoiGian ThoiGian::operator-(int Giay) const {
    int tongGiay = TinhGiay() - Giay;
    ThoiGian ketQua;
    ketQua.TinhLaiGio(tongGiay);
    return ketQua;
}

// Toan tu cong hai doi tuong ThoiGian
ThoiGian ThoiGian::operator+(const ThoiGian& tg) const {
    return *this + tg.TinhGiay();
}

// Toan tu tru hai doi tuong ThoiGian
ThoiGian ThoiGian::operator-(const ThoiGian& tg) const {
    return *this - tg.TinhGiay();
}

// Toan tu tien to tang gia tri thoi gian
ThoiGian& ThoiGian::operator++() {
    *this = *this + 1;
    return *this;
}

// Toan tu hau to tang gia tri thoi gian
ThoiGian ThoiGian::operator++(int) {
    ThoiGian temp = *this;
    *this = *this + 1;
    return temp;
}

// Toan tu tien to giam gia tri thoi gian
ThoiGian& ThoiGian::operator--() {
    *this = *this - 1;
    return *this;
}

// Toan tu hau to giam gia tri thoi gian
ThoiGian ThoiGian::operator--(int) {
    ThoiGian temp = *this;
    *this = *this - 1;
    return temp;
}

// Toan tu so sanh bang
bool ThoiGian::operator==(const ThoiGian& tg) const {
    return TinhGiay() == tg.TinhGiay();
}

// Toan tu so sanh khong bang
bool ThoiGian::operator!=(const ThoiGian& tg) const {
    return !(*this == tg);
}

// Toan tu so sanh lon hon hoac bang
bool ThoiGian::operator>=(const ThoiGian& tg) const {
    return TinhGiay() >= tg.TinhGiay();
}

// Toan tu so sanh nho hon hoac bang
bool ThoiGian::operator<=(const ThoiGian& tg) const {
    return TinhGiay() <= tg.TinhGiay();
}

// Toan tu so sanh lon hon
bool ThoiGian::operator>(const ThoiGian& tg) const {
    return TinhGiay() > tg.TinhGiay();
}

// Toan tu so sanh nho hon
bool ThoiGian::operator<(const ThoiGian& tg) const {
    return TinhGiay() < tg.TinhGiay();
}

// Toan tu nhap
istream& operator>>(istream& in, ThoiGian& tg) {
    cout << "Nhap gio: ";
    in >> tg.iGio;
    cout << "Nhap phut: ";
    in >> tg.iPhut;
    cout << "Nhap giay: ";
    in >> tg.iGiay;
    return in;
}

// Toan tu xuat
ostream& operator<<(ostream& out, const ThoiGian& tg) {
    out << tg.iGio << " gio " << tg.iPhut << " phut " << tg.iGiay << " giay";
    return out;
}
