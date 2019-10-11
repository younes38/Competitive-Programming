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
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    int t ;
    int n ;
    string s ;
    ll x ;
    while (cin >> x) {
        cin.ignore() ;
        getline(cin , s) ;
        vi A ;
        stringstream ss(s) ;
        ll v ;
        while(ss >> v) {
            A.push_back(v) ;
        }
        ll p = 1 ;

        v = 1 ;

        int i = 1 ;
        ll r = 0 ;
        for(int j = A.size() -2 ; j >=0; j--) {
            p= v * (i++) ;
            v *= x ;
            r += A[j] * p ;

        }
        cout << r << endl ;

    }



    return 0;
}
