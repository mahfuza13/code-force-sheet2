#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        unsigned int N;
        cin >> N;

        int ones = 0;
        while (N > 0) {
            if (N % 2 == 1) {
                ones++;
            }
            N /= 2;
        }
        int result = (1 << ones) - 1;

        cout << result << endl;
    }

    return 0;
}

