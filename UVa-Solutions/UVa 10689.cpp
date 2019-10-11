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


const int mod = 10000 ;
int main()
{
    //open_file write_file
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    int t ;
    cin >> t;

    while (t--){
        int f[15000] ;
        int a, b ;
        ll n,m ;
        cin >> a >> b >> n >> m ;
        n =n %15000 ;
        f[0] =a ;
        f[1] = b ;
        for(int i = 2; i < 15000; i++)
            f[i] = (f[i-1] + f[i-2])% mod ;
        int p = 1;
        while (m--)p*=10 ;
        cout << f[n]%p << endl ;
    }


    return 0;
}
