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

const int MAXN = 100005;
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
int main()
{
    sieve(MAXN - 1);

   // open_file write_file
    ll a, b;
    ll n;
    while (cin >> n && n) {
        a = n;
        vector<int> F ;
        if (n < 0) F.push_back(-1) ;
        n = abs(n) ;
        for(int i = 0 ; i < pr.size(); i++) {
            if (pr[i] > n) break ;
            while (n%pr[i] == 0 ){
                F.push_back(pr[i]);
                n /= pr[i];
            }
        }
        if (n > 1) F.push_back(n) ;
        cout << a << " ="  ;
        for(int i = 0 ; i < F.size(); i++) {
            if (i < F.size() -1) {
                cout << " " << F[i] << " x";
            }else cout << " " << F[i] << endl ;
        }
    }



    return 0;
}
