#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main() {
    SoPhuc sp1, sp2;

    cout << "Nhap so phuc thu nhat:" << endl;
    cin >> sp1;

    cout << "Nhap so phuc thu hai:" << endl;
    cin >> sp2;

    SoPhuc tong = sp1 + sp2;
    SoPhuc hieu = sp1 - sp2;
    SoPhuc tich = sp1 * sp2;
    SoPhuc thuong = sp1 / sp2;

    cout << "Tong: " << tong << endl;
    cout << "Hieu: " << hieu << endl;
    cout << "Tich: " << tich << endl;
    cout << "Thuong: " << thuong << endl;

    if (sp1 == sp2)
        cout << "Hai so phuc bang nhau." << endl;
    else
        cout << "Hai so phuc khong bang nhau." << endl;

    return 0;
}
