#pragma once
#include<iostream>
using namespace std;

class NgayThangNam {
private:
    int iNgay;
    int iThang;
    int iNam;

public:
    NgayThangNam();
    NgayThangNam(int Nam, int Thang, int Ngay = 1);
    int TinhNgay() const;
    NgayThangNam operator+(int ngay) const;
    NgayThangNam operator-(int ngay) const;
    int operator-(const NgayThangNam& a) const;
    NgayThangNam& operator++();
    NgayThangNam operator++(int);
    NgayThangNam& operator--();
    NgayThangNam operator--(int);
    bool operator==(const NgayThangNam& a) const;
    bool operator!=(const NgayThangNam& a) const;
    bool operator>=(const NgayThangNam& a) const;
    bool operator<=(const NgayThangNam& a) const;
    bool operator>(const NgayThangNam& a) const;
    bool operator<(const NgayThangNam& a) const;
    friend istream& operator>>(istream& in, NgayThangNam& a);
    friend ostream& operator<<(ostream& out, const NgayThangNam& a);
};

