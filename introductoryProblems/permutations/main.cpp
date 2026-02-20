#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Check if a beautiful permutation exists
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<int> arr(n); // Use int instead of long long since n ≤ 10^6

    int index = 0;
    // Print all even numbers first (2, 4, 6, ...)
    for (int i = 2; i <= n; i += 2) {
        arr[index] = i;
        index++;
    }

    // Then print all odd numbers (1, 3, 5, ...)
    for (int i = 1; i <= n; i += 2) {
        arr[index] = i;
        index++;
    }

    // Output the permutation
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}