#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Gunakan long long untuk menampung angka hingga 10^9
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long totalMoves = 0;

    for (int i = 1; i < n; i++) {
        // Jika angka sekarang lebih kecil dari angka sebelumnya
        if (arr[i] < arr[i-1]) {
            // Hitung berapa yang harus ditambah agar sama
            totalMoves += (arr[i-1] - arr[i]);
            arr[i] = arr[i-1];
        }
    }

    cout << totalMoves << endl;

    return 0;
}