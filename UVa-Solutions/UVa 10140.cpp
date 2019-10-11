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

const int MAXN = 100000 ;

bool p[MAXN] ;
vector<int> pr ;
void sieve(ll n){
    mem(p, true);
    p[0] = 0;
    p[1] = 0;
    for(ll i= 2; i <=n; i++){
        if(p[i]) {
            for(ll j = i*i; j<=n; j+=i) p[j] = 0 ;
            pr.push_back(i) ;
        }
    }

}
bool P[1000001] ;
int main()
{
    sieve(MAXN - 1);

    //open_file write_file
    //ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    ll l, r;

    while(cin >> l >> r) {
        mem(P, true);
        if (l == 1) P[0] = false ;
        if (l == 0) P[0] = P[1] = false;
        ll i = 0 ;
        for(ll prime : pr) {
            if (prime > r) break ;
            ll fir = l/prime*prime ;
            if (fir == 0) fir = 2*prime ;
            if (fir == prime || fir < l) fir+=prime ;
            for(ll i = fir ;i<=r;i+=prime) {
                P[i - l] = 0;
            }
        }
        int mn = 1000002 ;
        int mx = 0 ;
        ll last = -1 ;
        ll p_mx, p_mn ;
        bool ok = false ;
        for(ll i =0; i <= r - l; i++) {
            if (P[i]) {
                if (last == -1) last = i ;
                else {
                    ok = true ;
                    if (i - last > mx){
                        mx = i - last ;
                        p_mx = last ;
                    }
                    if (i - last < mn) {
                        mn = i-last ;
                        p_mn = last ;
                    }
                    last = i;
                }
            }
        }
        if (!ok) cout << "There are no adjacent primes.\n" ;
        else cout << p_mn+l << "," << p_mn + mn + l << " are closest, " << p_mx + l << "," << p_mx + mx + l << " are most distant.\n";

    }
    return 0;
}
