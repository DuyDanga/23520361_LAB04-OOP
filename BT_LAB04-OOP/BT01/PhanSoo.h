#pragma once
#include <iostream>
using namespace std;

class PhanSo {
private:
    int iTu;
    int iMau;
    void rutGon();
    int UCLN(int a, int b);
public:
    PhanSo() : iTu(0), iMau(1) {};
    PhanSo(int Tu, int Mau) : iTu(Tu), iMau(Mau) {
        rutGon();
    }
    PhanSo operator+(const PhanSo& ps) const;
    PhanSo operator-(const PhanSo& ps) const;
    PhanSo operator*(const PhanSo& ps) const;
    PhanSo operator/(const PhanSo& ps) const;
    bool operator==(const PhanSo& ps) const;
    bool operator!=(const PhanSo& ps) const;
    bool operator>=(const PhanSo& ps) const;
    bool operator<=(const PhanSo& ps) const;
    bool operator>(const PhanSo& ps) const;
    bool operator<(const PhanSo& ps) const;
    friend istream& operator>>(istream& is, PhanSo& ps);
    friend ostream& operator<<(ostream& os, const PhanSo& ps);
};
