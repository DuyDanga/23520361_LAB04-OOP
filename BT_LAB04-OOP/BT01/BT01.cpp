#include"PhanSoo.h"
int main() {
    PhanSo ps1, ps2;
    cout << "Nhap phan so thu nhat:\n";
    cin >> ps1;
    cout << "Nhap phan so thu hai:\n";
    cin >> ps2;

    cout << "Phan so thu nhat: " << ps1 << endl;
    cout << "Phan so thu hai: " << ps2 << endl;

    // Thực hiện các phép toán
    cout << "Tong: " << ps1 + ps2 << endl;
    cout << "Hieu: " << ps1 - ps2 << endl;
    cout << "Tich: " << ps1 * ps2 << endl;
    cout << "Thuong: " << ps1 / ps2 << endl;

    // Thực hiện các phép so sánh
    if (ps1 == ps2) cout << "Hai phan so bang nhau\n";
    if (ps1 != ps2) cout << "Hai phan so khong bang nhau\n";
    if (ps1 > ps2) cout << "Phan so thu nhat lon hon phan so thu hai\n";
    if (ps1 < ps2) cout << "Phan so thu nhat nho hon phan so thu hai\n";
    if (ps1 >= ps2) cout << "Phan so thu nhat lon hon hoac bang phan so thu hai\n";
    if (ps1 <= ps2) cout << "Phan so thu nhat nho hon hoac bang phan so thu hai\n";

    return 0;
}
