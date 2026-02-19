#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i <= 1; i--) {
        i = n;
        cout << n << endl;
        n--;
    }
}