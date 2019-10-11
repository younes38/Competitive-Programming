#include<bits/stdc++.h>

using namespace std;


#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)
#define lower(sl) transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
#define upper(su) transform(su.begin(), su.end(), su.begin(), ::toupper);

int main()
{
    //open_file write_file
    //ios::sync_with_stdio(false);
    //cin.tie(0) ; cout.tie(0) ;
    int t,b,n,a,m,h ;
    int q = 1 ;
    cin >> t ;

    while (t--) {
        cout << "Case " << q++ << ": " ;
        double d, u, v ;
        cin >> d >> v >> u ;
        if( v>= u || u==0 || v==0 ) cout << "can't determine\n" ;
        else {
            cout << setprecision(3) << fixed<< ( d/sqrt(u*u- v*v) - d/u) << "\n" ;
        }
    }

    return 0;
}
