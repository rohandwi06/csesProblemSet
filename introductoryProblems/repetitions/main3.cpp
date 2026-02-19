#include <iostream>
using namespace std;

int main() {
    string input;
    long long streakTerbanyak = 1;
    long long streakSaatIni = 1;
    long long indexSebelumnya;

    cin >> input;

    for (int i = 0; i <= input.length(); i++) {

        indexSebelumnya = i - 1;

        if (input[i] == input[indexSebelumnya]) {

            streakSaatIni++;

            if (streakSaatIni > streakTerbanyak) {
                streakTerbanyak++;
            }

        } else {
            streakSaatIni = 1;
        }
    }

    cout << streakTerbanyak << endl;
    return 0;

}