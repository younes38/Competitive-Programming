
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
    //open_file  write_file
    int n, t, i, j;
    int k, m, ta, tb;
    int a, b, c, p;
    int qq = 1 ;
    while (cin >> n , n) { cout << "Case " << qq++ << ":"<< endl ;
        vi A(n) ;
        forn(i,n) cin >> A[i] ;
        int q;
        cin >> q  ;

        while (q--) {
            int v ;
            cin >> v ;
            int sum = 99999999 ;
            for(i = 0; i < n-1; i++ ) {
                for(j = i+1; j < n; j++) {
                    if (abs ( sum- v) > abs (v - A[i] - A[j]) ) sum = A[i] + A[j] ;
                }
            }
            cout << "Closest sum to "<<v<<" is "<<sum<<"." << endl ;
        }
    }

    return 0;
}

