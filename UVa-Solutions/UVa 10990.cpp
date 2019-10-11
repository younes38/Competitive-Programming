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
const int MAXN =2000009;
int p[MAXN] ;
void sieve(ll n){
    for(int i = 0 ;i < MAXN; i++) p[i] = i;
    for(ll i= 2; i <=n; i++){
        if(p[i] == i) {
            for(ll j = i; j<=n; j+=i) p[j] -= p[j]/i ;
        }
    }
}

int dp[MAXN], ans[MAXN];

int main()
{
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    //open_file write_file
    sieve(MAXN -1);
    dp[0] = 0 ;
    dp[1] = 0;
    dp[2] = 1;
    for(int i = 3 ;i< MAXN; i++) {
        dp[i] = dp[p[i]] + 1;
    }
    ans[0] = 0;
    for(int i = 1; i <MAXN; i++){
        ans[i] = ans[i-1] + dp[i];
    }

    int t;
    int l, r;
    cin >> t ;
    while (t--) {
        cin >> l >> r ;
        cout << ans[r] - ans[l-1] << endl ;
    }
    return 0;
}
