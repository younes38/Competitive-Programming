
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

int A[21] ;


bool ok(int i, int len) {
    if (i==n) return false ;
    len+=A[i] ;

    if (len == l) return true ;
   
    return ok(i+1, len) || ok(i+1, len - A[i]) ;
}

int main() {


    //open_file write_file
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);


    cin >> t ;
    while (t--) {
        cin >> l ;
        cin >> n ;
        forn(i,n) cin >> A[i] ;
        cout << (ok(0,0) || l==0 ? "YES" :"NO") << endl ;

    }
    return 0;
}

