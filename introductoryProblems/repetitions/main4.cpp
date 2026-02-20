#include <iostream>
using namespace std;

int main() {
    string n;

    cin >> n;

    int max = 1;
    int count = 1;

    for (int i = 1; i < n.length(); i++) {
        int prevIndex = i - 1;

        if (n[i] == n[prevIndex]) {
            count++;
        } else {
            count = 1;
        }

        if (count > max) max = count;
    }

    cout << max << endl;

    return 0;
}