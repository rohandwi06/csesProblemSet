#include <iostream>
using namespace std;

int main() {
    long long n, x;
    if (!(cin >> n)) return 0;

    long long totalAsli = n * (n+1) / 2;
    long long totalPerhitungan = 0; 

    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        totalPerhitungan += x;
    }

    cout << totalAsli - totalPerhitungan << "\n";

    return 0;
}