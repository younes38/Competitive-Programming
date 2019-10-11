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


int sdiv(int n) {
    int res = 0 ;
    for(int i = 1; i*i<=n; i++) {
        if (n%i == 0) {
            res+=i ;
            if (i != n/i) res += n/i;
        }
    }
    return res;
}
int main()
{
    // ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    //open_file write_file
    int n;
    int ans[1001] ;
    for(int& a:ans)a = -1;
    for(int i = 1; i<=1000; i++) {
        int x = sdiv(i);
        if (x > 1000) continue;
        ans[x] = i;
    }
    int q = 1;
    while (cin >> n && n) {
        cout << "Case " << q++ << ": " ;
        cout << ans[n] << endl;
    }

    return 0;
}
