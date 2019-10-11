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


int main()
{


    //open_file write_file
    ll n;

    while (cin >> n, n) {
        ll x = n;
        ll res = 1 ;
        for(ll i = 2; i*i <=n; i++) {
            int cp = 0 ;
            while (n%i == 0) n /=i, cp++ ;
            res*=2*cp+1 ;
        }
        if (n > 1) res*= 3;
        cout << x << " "<< (res + 1)/2 <<endl ;

    }


    return 0;
}
