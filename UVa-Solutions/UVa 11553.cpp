
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define all(a) a.begin(), a.end()
#define open_file freopen("input.txt", "r", stdin);
#define write_file freopen("output.txt", "w", stdout);
#define mem(A, v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i, n) for (i = 0; i < n; i++)
#define lower(sl) transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
#define upper(su) transform(su.begin(), su.end(), su.begin(), ::toupper);
#define tp int
tp lcm(tp a, tp b) { return a * b / __gcd(a, b); }

int  i, j, k, n, l, t;

int A[8][8] ;
int B[8] ;

bool can (int col , int lin) {
    for (int j = 0; j < col; j++)
        if (B[j] == lin) return false;
    return true;
}
int mn;
void ct(int c, int cost) {
    if (c == n) {mn  = min (cost, mn ) ; return ; }
    for (int i = 0; i < n ;i++) {
        if(can(c, i)) {
            B[c] = i ;
            ct (c+1, cost + A[i][c]) ;
        }
    }
}

int main() {


    //open_file write_file
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);


    cin >> t ;
    while (t--) {
        mem(B, -1);
        mn = 99999999 ;
        cin >> n  ;
        forn(i,n) forn(j,n) cin >> A[i][j] ;
        ct(0, 0);
        cout << mn << endl ;

    }
    return 0;
}

