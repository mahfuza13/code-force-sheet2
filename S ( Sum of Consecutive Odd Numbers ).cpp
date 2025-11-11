#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int x ;
    cin >> x ;
    while (x--)
    {
        int n , m ;
        cin >> n >> m ;
        if (n>m)
        {
            swap (n,m);
        }
        int sum = 0 ;
        for (int i = n+1 ; i<m ;i++)
        {
            if (i%2!=0)
            {
                sum += i ;
            }
        }
        cout << sum << endl ;
    }
    return 0 ;
}
