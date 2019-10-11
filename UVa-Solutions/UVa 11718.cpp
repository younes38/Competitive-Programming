#include<bits/stdc++.h>

using namespace std;
typedef long long ll ;

#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)
#define lower(sl) transform((sl).begin(), (sl).end(), (sl).begin(), ::tolower);
#define upper(su) transform((su).begin(), (su).end(), (su).begin(), ::toupper);

ll powmod(ll a, ll b , ll m) {
    ll res = 1LL ;
    while (b)  {
        if (b&1) res = (res * a) %m ;
        b =b>>1 ;
        a =(a*a) % m ;
    }
    return res ;
}


int main()
{
    //open_file write_file
    //ios::sync_with_stdio(false);
    //cin.tie(0) ; cout.tie(0) ;
    ll n ; int t ;
    cin >> t ;
    ll q=1, m,k;
    while (t--) {
        cin >> n >> k >> m ;
        ll s =0LL ;
        for(int i =0; i<n; i++) {
            ll v ;
            cin >> v ;
            s= (s+v) % m ;
        }
        cout << "Case " << q++ << ": " << (s * powmod(n, k-1,m)%m * k % m  ) << "\n" ;
    }

    return 0;
}
