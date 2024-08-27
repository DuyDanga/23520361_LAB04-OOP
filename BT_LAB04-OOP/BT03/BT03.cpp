#include <iostream>
#include "ThoiGian.h"
using namespace std;

int main() {
    ThoiGian tg1, tg2;

    cout << "Nhap thoi gian thu nhat:" << endl;
    cin >> tg1;

    cout << "Nhap thoi gian thu hai:" << endl;
    cin >> tg2;

    ThoiGian tong = tg1 + tg2;
    ThoiGian hieu = tg1 - tg2;
    ThoiGian congThemGiay = tg1 + 120;
    ThoiGian truBotGiay = tg1 - 90;

    cout << "Tong: " << tong << endl;
    cout << "Hieu: " << hieu << endl;
    cout << "Cong them 120 giay: " << congThemGiay << endl;
    cout << "Tru bot 90 giay: " << truBotGiay << endl;

    if (tg1 == tg2)
        cout << "Hai thoi gian bang nhau." << endl;
    else
        cout << "Hai thoi gian khong bang nhau." << endl;

    return 0;
}
