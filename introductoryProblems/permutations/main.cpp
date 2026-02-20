#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n); // Deklarasi vector

    int index = 0;
    // Loop genap
    for (int i = 2; i <= n; i += 2) {
        arr[index] = i;
        index++;
    }

    // Loop ganjil
    for (int i = 1; i <= n; i += 2) {
        arr[index] = i;
        index++;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}