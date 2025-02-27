#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
float tinhPhiVanChuyen (float m, float s) {
    if (m <= 0) return -2;
    if (s <= 0) return -1;
    if (m <= 10) {
        if (s <= 5) {
            return m*s*1500;
        } else {
            return m*s*1200;
        }
    } else {
        if (s <= 5) {
            return m*s*2000;
        } else {
            return m*s*1800;
        }
    }
}
int main() {
    float cost = 0;
    float m[6] = {-1, 5, 8, 7, 13, 14};
    float s[6] = {10, -2, 2, 10, 3, 9};
    for (int i = 0; i < 6; i++) {
        cost = tinhPhiVanChuyen(m[i], s[i]);
        cout << "Test " << i+1 << ": can nang = " << m[i] << "kg khoang cach = " << s[i] << "km:" << endl;
        if (cost == -2 ) {
            cout << "Can nang cua kien hang phai lon hon 0" << endl;
            continue;
        } else if ( cost == -1) {
            cout << "Khoang cach van chuyen phai lon hon 0" << endl;
            continue;
        } else {
            cout << "Phi van chuyen cua kien hang la: " << cost << endl;
        }
    }
    return 0;
}
