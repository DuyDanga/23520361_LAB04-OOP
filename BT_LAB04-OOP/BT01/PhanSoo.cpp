#include "PhanSoo.h"
#include<iostream>
using namespace std;
int PhanSo::UCLN(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

void PhanSo::rutGon() {
    int ucln = UCLN(abs(iTu), abs(iMau));
    iTu /= ucln;
    iMau /= ucln;
    if (iMau < 0)
    {
        iTu = -iTu;
        iMau = -iMau;
    }
}


PhanSo PhanSo::operator+(const PhanSo& ps) const 
{
    PhanSo ketQua;
    ketQua.iTu = iTu * ps.iMau + ps.iTu * iMau;
    ketQua.iMau = iMau * ps.iMau;
    ketQua.rutGon();
    return ketQua;
}

PhanSo PhanSo::operator-(const PhanSo& ps) const 
{
    PhanSo ketQua;
    ketQua.iTu = iTu * ps.iMau - ps.iTu * iMau;
    ketQua.iMau = iMau * ps.iMau;
    ketQua.rutGon();
    return ketQua;
}

PhanSo PhanSo::operator*(const PhanSo& ps) const {
    PhanSo ketQua;
    ketQua.iTu = iTu * ps.iTu;
    ketQua.iMau = iMau * ps.iMau;
    ketQua.rutGon();
    return ketQua;
}

PhanSo PhanSo::operator/(const PhanSo& ps) const {
    PhanSo ketQua;
    ketQua.iTu = iTu * ps.iMau;
    ketQua.iMau = iMau * ps.iTu;
    ketQua.rutGon();
    return ketQua;
}
bool PhanSo::operator==(const PhanSo& ps) const {
    return iTu == ps.iTu && iMau == ps.iMau;
}

bool PhanSo::operator!=(const PhanSo& ps) const {
    return !(*this == ps);
}

bool PhanSo::operator>=(const PhanSo& ps) const {
    return (iTu * ps.iMau >= ps.iTu * iMau);
}

bool PhanSo::operator<=(const PhanSo& ps) const {
    return (iTu * ps.iMau <= ps.iTu * iMau);
}

bool PhanSo::operator>(const PhanSo& ps) const {
    return (iTu * ps.iMau > ps.iTu * iMau);
}

bool PhanSo::operator<(const PhanSo& ps) const {
    return (iTu * ps.iMau < ps.iTu * iMau);
}

istream& operator>>(istream& is, PhanSo& ps) {
    cout << "Nhap tu so: ";
    is >> ps.iTu;
    cout << "Nhap mau so: ";
    is >> ps.iMau;
    ps.rutGon();
    return is;
}

ostream& operator<<(ostream& os, const PhanSo& ps) {
    os << ps.iTu << "/" << ps.iMau;
    return os;
}

