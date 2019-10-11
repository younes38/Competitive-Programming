
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
    int ok = 0;
    while (cin >> n, n) {
        if (ok) cout << endl ; ok = 1 ;
        vi A(n) ;
        forn(i,n) cin >> A[i] ;
        for (int a=0; a < n-5; a++)
            for (int b =a+1; b< n-4; b++)
                for (int c = b+1; c < n-3; c++)
                    for (int d = c+1; d < n-2; d++)
                        for (int e = d+1; e < n-1; e++)
                            for (int f =e+1; f < n; f++)
                                cout << A[a] << " " << A[b] << " "<<A[c] << " " << A[d]<< " " << A[e] << " " << A[f] << endl ;
    }


    return 0;
}

