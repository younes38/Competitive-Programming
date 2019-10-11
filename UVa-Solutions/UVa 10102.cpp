
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
ll lcm(ll a, ll b) { return a * b / __gcd(a, b); }

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0) ; cout.tie(0) ;
    // open_file  write_file
    int n, t, i, j;
    int k, m, ta, tb;
    int a, b, c, p;
    int ok = 0;
    int X[] = {-1, 0, 0, 1} ;
    int Y[] = {0, -1, 1, 0} ;
    while (cin >> n ) {
        vector<string > A (n) ;
        forn (i,n) cin >> A[i] ;
        int B[n][n] ;
        int mx = 0 ;
        forn(i,n) forn(j,n) {
            if (A[i][j] == '1') {
                mem(B,-1) ;
                B[i][j] = 0 ;
                queue<pair<int, int >> Q ;
                Q.push({i, j}) ;
                while (!Q.empty()) {
                    int x,y ;
                    tie(x,y) = Q.front() ;
                    Q.pop() ;
                    if (A[x][y] == '3') {mx = max(mx, B[x][y]); break ; }
                    forn(k, 4)  {
                        int a = x + X[k] ;
                        int b = y + Y[k] ;
                        if ( a < n && a>=0 && b < n && b >=0)
                            if (B[a][b] == -1)  {B[a][b]=B[x][y]+1 ; Q.push({a, b}); }
                    }
                }

            }

        }
        cout << mx << endl ;
    }


    return 0;
}

