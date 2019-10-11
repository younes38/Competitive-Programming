
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
    //open_file write_file
    int n ;
    cin >> n ;
    while(n--) {
        int a, b, c ;
        cin >> a >> b >> c ;

        bool ok = false ;

        for (int x = -100; x <= 100; x++) for (int y = x+1; y <= 100; y++) {

            int z = a - x-y ; if( z == x || z == y) continue ;
            if( x*y*z == b && x*x + y*y + z*z  == c && x+y+z ==a)  {
                ok = true ;

                cout << x <<" " << y <<  " " << z << endl ;
                x = 1000 ;
                break ;
            }
        }
        if (!ok) cout << "No solution." << endl ;
    }
    return 0 ;
}