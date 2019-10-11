
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
    while (cin >> n, n) {
        cin >> m ;
        vi A(n) , B(m) ;
        forn(i,n) cin >> A[i] ;
        forn(i,m) cin >> B[i] ;
        vector<double> C ;
        forn(i,n) forn(j,m) C.push_back((double) A[i]/B[j]) ;
        sort (all(C)) ;
        //cout << C.size()<< endl ;
        //for (int i =0; i < (int) C.size(); i++) cout << C[i]<< "  ";
        double mx = 0.0 ;

        for (int  i = 0; i <(int) C.size()-1; i++) {

            if (mx < C[i+1]/C[i]) mx = C[i+1]/C[i] ; // C[i+1]/C[i]) ;
        }
        cout << setprecision(2) << fixed << mx << endl ;
    }


    return 0;
}

