#include <iostream>
using namespace std;

int main() {
    string input;
    int a = 0;
    int t = 0;
    int g = 0;
    int c = 0;
    int terbanyak;

    cin >> input;

    for (int i = 0; i <= input.length(); i++) {
        if (input[i] == 'A') {
            a++;
        } else if (input[i] == 'T') {
            t++;
        }
        else if (input[i] == 'G') {
            g++;
        }
        else if (input[i] == 'C') {
            c++;
        }

        terbanyak = a;
        if (a < t){
            terbanyak = t;
        }
        if (a < g) {
            terbanyak = g;
        }
        if (a < c) {
            terbanyak = c;
        }
    }

    cout << terbanyak << "\n";
    return 0;
    
}