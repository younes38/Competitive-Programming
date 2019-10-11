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
 ll A[1000005] ;
int main()
{
    //open_file write_file
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    ll n;

    A[0] = 0 ;
    A[1] = 1 ;
    for(ll i = 2; i <1000001; i++) {
        A[i] = A[i-2] + i*(i+1) / 2 ;
    }
    cerr<< "ok " << endl ;
    while (cin >> n) {
        if(n < 3 ) break ;
        ll res = n * (n-1) * (n-2) / 6 ;
        n-=2 ;
        res -= A[n] ;
        cout << res << endl ;
    }


    return 0;
}
