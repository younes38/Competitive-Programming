#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<int > vi ;
typedef vector<ll> vl ;
#define endl '\n'
#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define forn(i,n) for(i=0;i<n;i++)

ll powmod (ll a , ll b , ll m) {
    ll res = 1 ;
    while (b>0) {
        if (b&1) res = (res*a) %m ;
        a=a*a % m ;
        b =b >>1 ;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    //open_file write_file
    ll a, b, c;

    while (cin >> a) {
        cin >> b >> c;
        cout << powmod(a, b, c) << endl ;

    }

    return 0;
}
