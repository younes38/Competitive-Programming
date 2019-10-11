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
const int MAXN =32000;
bool p[MAXN] ;
vector<int> pr ;
void sieve(ll n){
    memset(p, true, sizeof p) ;
    p[0] = p[1] = false ;
    for(ll i= 2; i <=n; i++){
        if(p[i]) {
            for(ll j = i*i; j<=n; j+=i) p[j] = false ;
            pr.push_back(i);
        }
    }

}
//needs pre-calculations of first prime numbers <= sqrt(n)
ll phi(ll n) {
    ll ans = n;
    for(ll p: pr) {
        if (p > n) break ;
        if (n%p == 0) {
            ans-=ans/p ;
            while (n%p == 0) n /=p;
        }
    }
    if (n > 1) ans-=ans/n;
    return ans;
}

int main()
{
   // ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    //open_file write_file
    sieve(MAXN - 1);

    int n;
    while (cin >> n && n) {
        cout << phi(n) << endl;
    }

    return 0;
}
