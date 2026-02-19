// #include <iostream>
// using namespace std;

// int main() {
//     long long n;
//     int totalSelisih = 0;

//     cin >> n;
//     n = n - 1;
//     long long arr[n];

//     for (int i = 0; i <= n; i++) {
//         cin >> arr[i];
//     }
    
//     for (int i = 0; i < n; i++) {

//         if (arr[i+1] < arr[i]) {
//             long long selisih = arr[i+1]-arr[i];
//             cout << selisih << endl;
//             totalSelisih += abs(selisih);
//         }
//     }

//     cout << totalSelisih << endl;

//     return 0;
// }