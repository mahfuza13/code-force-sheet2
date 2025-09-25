#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
    cin >> n ;
    int mx ;
    cin >> mx ;
    for (int i = 1 ; i < n ; i ++ )
    {
        int x ;
        cin >> x ;
        mx = max(mx, x);
    }
     cout << mx << endl ;
    return 0 ;
}
