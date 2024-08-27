#include "SoPhuc.h"
#include <iostream>
#include<iomanip>

using namespace std;

SoPhuc::SoPhuc() : dThuc(0), dAo(0) {}

SoPhuc::SoPhuc(double thuc, double ao) : dThuc(thuc), dAo(ao) {}

// Toan tu cong
SoPhuc SoPhuc::operator+(const SoPhuc& sp) const {
    return SoPhuc(dThuc + sp.dThuc, dAo + sp.dAo);
}

// Toan tu tru
SoPhuc SoPhuc::operator-(const SoPhuc& sp) const {
    return SoPhuc(dThuc - sp.dThuc, dAo - sp.dAo);
}

// Toan tu nhan
SoPhuc SoPhuc::operator*(const SoPhuc& sp) const {
    double thuc = dThuc * sp.dThuc - dAo * sp.dAo;
    double ao = dThuc * sp.dAo + dAo * sp.dThuc;
    return SoPhuc(thuc, ao);
}

// Toan tu chia
SoPhuc SoPhuc::operator/(const SoPhuc& sp) const {

    double mau = sp.dThuc * sp.dThuc + sp.dAo * sp.dAo;
    double thuc = (dThuc * sp.dThuc + dAo * sp.dAo) / mau;
    double ao = (dAo * sp.dThuc - dThuc * sp.dAo) / mau;
    return SoPhuc(thuc, ao);
}

// Toan tu so sanh bang
bool SoPhuc::operator==(const SoPhuc& sp) const {
    return dThuc == sp.dThuc && dAo == sp.dAo;
}

// Toan tu so sanh khong bang
bool SoPhuc::operator!=(const SoPhuc& sp) const {
    return !(*this == sp);
}

// Toan tu nhap
istream& operator>>(istream& in, SoPhuc& sp) {
    cout << "Nhap phan thuc: ";
    in >> sp.dThuc;
    cout << "Nhap phan ao: ";
    in >> sp.dAo;
    return in;
}

// Toan tu xuat
ostream& operator<<(ostream& out, const SoPhuc& sp) {
    out << fixed << setprecision(0);
    out << sp.dThuc;
    if (sp.dAo >= 0)
        out << " + " << sp.dAo << "i";
    else
        out << " - " << -sp.dAo << "i";
    return out;
}
