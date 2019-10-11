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
const int MAXN =1000009;
int p[MAXN] ;
void sieve(ll n){
    memset(p, 0, sizeof p) ;
    p[0] = p[1] = 0 ;
    for(ll i= 2; i <=n; i++){
        if(p[i] == 0) {
            for(ll j = i; j<=n; j+=i) p[j]++;
        }
    }

}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    //open_file write_file
    sieve(MAXN -1);
    int n;
    while (cin >> n && n) {
        cout << n << " : " << p[n] << endl ;
    }

    return 0;
}
