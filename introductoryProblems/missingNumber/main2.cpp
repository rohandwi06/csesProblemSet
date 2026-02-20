#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = n * (n+1) / 2;
    long long y = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;
        y += x;
    }

    cout << y << endl;

    return 0;
}