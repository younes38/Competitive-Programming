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

int xx ,yy, d;
void extEuclid(int a, int b) {
    if (b == 0) { xx = 1; yy = 0; d = a; return; }
    extEuclid(b, a % b);
    int x1 = yy;
    int y1 = xx - (a / b) * yy;
    xx = x1;
    yy = y1;
}

int ce(int a, int b){
    if (a % b == 0) return a / b;
    return a / b + 1;
}

int main() {
    //open_file write_file
    int t, x, k;
    cin >> t;
    while(t--){
        cin >> x >> k;
        int a = x / k;
        int b = ce(x, k);
        if (a == b) {
            cout << "0 " << k << endl;
        }else {
            extEuclid(a, b);
            cout << xx*x << " " << yy*x << endl ;
        }
    }
    return 0;
}
