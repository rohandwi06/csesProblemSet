#include <iostream>
using namespace std;

int main() {
// Fast I/O: Wajib untuk CP agar tidak kena TLE
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = (n * 3) + 1;
        }
    }
    cout << 1 << endl;

    return 0;

}
