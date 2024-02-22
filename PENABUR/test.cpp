#include <bits/stdc++.h>

using namespace std;

int main() {
    int kiri=10, kanan=1000;
    int energi=0;
    while (kiri<kanan) {
        if (kiri%7==0)cout << "Tujuh: " << kiri << endl,kiri++,energi++;
        else if (kiri%3==0)cout << "Tiga: " << kiri << endl,kiri+=2,energi+=2;
        else kiri+=3,energi+=3;
    }
    return 0;
}




