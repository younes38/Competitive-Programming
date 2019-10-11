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
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)


bool ok(ll n) {
    int cp = 0 ;
    ll x= n ;
    while (x){
        cp += x%10 ;
        x = x/10 ;
    }
    int i = 2 ;
    int ok = false ;
    while (i*i <= n) {
        if(n%i == 0) {
            ok = true ;
            n= n/i ;
            int j = i ;
            while (j) {
                cp -= j%10 ;

                j=j/10 ;
            }
            if (cp < 0) return false ;
        }else i++;
    }
    if (n!=1) {
        while (n) {
            cp -= n%10 ;
            n =n /10 ;
        }
    }
    return ok && (cp == 0) ;
}
int main()
{
    //open_file write_file
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    int t ,n;
    cin >> t ;
    while (t--){
        cin >> n ;
        ll v ;
        for(v = n+1; ; v++) {
            if(ok (v)) break ;
        }
        cout << v << endl ;
    }
    return 0;
}
