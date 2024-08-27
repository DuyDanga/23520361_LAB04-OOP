#pragma once
#include <iostream>
using namespace std;
class ThoiGian {
private:
    int iGio;   
    int iPhut;  
    int iGiay;  
public:
    ThoiGian();
    ThoiGian(int Gio, int Phut, int Giay);
    int TinhGiay() const;
    void TinhLaiGio(int Giay);
    ThoiGian operator+(int Giay) const;
    ThoiGian operator-(int Giay) const;
    ThoiGian operator+(const ThoiGian& tg) const;
    ThoiGian operator-(const ThoiGian& tg) const;
    ThoiGian& operator++();
    ThoiGian operator++(int);
    ThoiGian& operator--();
    ThoiGian operator--(int);
    bool operator==(const ThoiGian& tg) const;
    bool operator!=(const ThoiGian& tg) const;
    bool operator>=(const ThoiGian& tg) const;
    bool operator<=(const ThoiGian& tg) const;
    bool operator>(const ThoiGian& tg) const;
    bool operator<(const ThoiGian& tg) const;
    friend istream& operator>>(istream& in, ThoiGian& tg);
    friend ostream& operator<<(ostream& out, const ThoiGian& tg);
};


