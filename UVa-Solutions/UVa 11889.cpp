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

const int MAXN = 10009;
bool p[MAXN] ;
vector<ll> pr ;
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

int poww (int a,int b) {
    int res = 1;
    while (b  > 0) {
        if (b&1) res *= a;
        a = a*a;
        b = b/2;
    }
    return res;
}

int main()
{
    sieve(MAXN - 1);
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    //open_file write_file
    int t, a, c, b;
    cin >> t;
    while (t--) {
        cin >> a >> c;
        if (c%a == 0 ) {
            b = 1;
            for(int p : pr){
                if (c < p) break ;
                if (c % p == 0) {
                    int aa = 0, bb = 0 ;
                    while (a%p == 0 ) aa++, a/=p;
                    while (c%p == 0 ) bb++, c/=p;
                    if(aa == bb) continue;
                    b*=poww(p, bb);
                }
            }
            if (c > 1 && a == 1 ) b*=c;
            cout << b << endl ;
        }else cout << "NO SOLUTION\n";
    }



    return 0;
}
