
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
    cin >> t ;

    while (t--) {
        cin >> n ;
        vi A(n) ;
        int cp = 0 ;
        forn(i,n) cin >> A[i] ;
        for (int i =1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                cp += A[j] <= A[i]  ;
            }
        }
        cout << cp << endl ;
    }

    return 0;
}

