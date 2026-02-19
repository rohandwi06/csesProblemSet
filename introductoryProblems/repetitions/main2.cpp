#include <iostream>
using namespace std;

int main() {
    string input;
    int a = 1;
    int t = 1;
    // int g = 1;
    int terbanyak = 0;

    cin >> input;

    for (int index = 0; index <= input.length(); index++){
        if (input[index] == 'a') {
            a++;
        }
        else if (input[index] == 't') {
            t++;
        }
        // else if (input[index] == 'g') {
        //     g++;
        // }

    }

    terbanyak = a;
        if (a < t) {
            terbanyak = t;
        }


    cout << terbanyak << endl;
}