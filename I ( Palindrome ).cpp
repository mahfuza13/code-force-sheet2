#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;

    string rev = N;
    reverse(rev.begin(), rev.end());
    int i = 0;
    while (i < rev.size() && rev[i] == '0')
    {
        i++;
    }
    string reversed_number = rev.substr(i);

    if (reversed_number == "")
    {
        reversed_number = "0";
    }
    cout << reversed_number << endl;


    if (N == rev)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

