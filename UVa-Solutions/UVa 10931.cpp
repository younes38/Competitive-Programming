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
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)

void read ( vi &a) {
    string s ;
    getline(cin , s) ;
        stringstream ss(s) ;
        int x ;
        while (ss>> x) {
            a.push_back(x) ;
        }
}
int chr(int n) {
    return (int) to_string(n).size() ;
}
const int MOD = 998244353 ;



int main()
{
    //open_file //write_file
    //ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    ll n ;
    while (cin >> n, n){
        int r = 0 ;
        string s ;
        ll x = n ;
        while (x) {
            s+= '0' + x%2 ;
             x >>= 1 ;
        }
        reverse(all(s)) ;
        while (n) {
            r += n&1 ;
            n >>=1 ;
        }
        cout << "The parity of " << s << " is "<<r<<" (mod 2).\n";

    }

    return 0;
}
